// Copyright Epic Games, Inc. All Rights Reserved.

#include "AICharacter/HEAIController.h"
#include "AICharacter/HEEnemyCharacter.h"
#include "Perception/AIPerceptionComponent.h"
#include "Navigation/PathFollowingComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTree.h"
#include "Engine/Light.h"
#include "Components/LightComponent.h"
#include "Components/DirectionalLightComponent.h"
#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"
#include "HauntedEscape.h"

const FName AHEAIController::BB_TargetActor = FName("TargetActor");
const FName AHEAIController::BB_PatrolLocation = FName("PatrolLocation");
const FName AHEAIController::BB_NearestLight = FName("NearestLight");
const FName AHEAIController::BB_IsFleeingFromLight = FName("IsFleeingFromLight");

AHEAIController::AHEAIController()
{
	// Create the perception component — configure senses (sight, hearing) in the Blueprint subclass
	AIPerception = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AIPerception"));
}

void AHEAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	// Bind perception delegates — clear first to prevent double-binding
	if (AIPerception)
	{
		AIPerception->OnTargetPerceptionUpdated.RemoveDynamic(this, &AHEAIController::OnPerceptionUpdated);
		AIPerception->OnTargetPerceptionForgotten.RemoveDynamic(this, &AHEAIController::OnPerceptionForgotten);
		AIPerception->OnTargetPerceptionUpdated.AddDynamic(this, &AHEAIController::OnPerceptionUpdated);
		AIPerception->OnTargetPerceptionForgotten.AddDynamic(this, &AHEAIController::OnPerceptionForgotten);
		UE_LOG(LogHauntedEscape, Log, TEXT("HEAIController: perception delegates bound"));
	}
	else
	{
		UE_LOG(LogHauntedEscape, Warning, TEXT("HEAIController: AIPerception component is null on possess!"));
	}

	if (AHEEnemyCharacter* Enemy = Cast<AHEEnemyCharacter>(InPawn))
	{
		Enemy->OnEnemyDeath.AddDynamic(this, &AHEAIController::OnEnemyDeath);
		UE_LOG(LogHauntedEscape, Log, TEXT("HEAIController possessed %s"), *GetNameSafe(InPawn));
	}

	if (BehaviorTree)
	{
		// Don't start the behavior tree immediately - wait for startup delay
		if (StartupDelay > 0.0f)
		{
			UE_LOG(LogHauntedEscape, Log, TEXT("HEAIController: Delaying AI start for %.1f seconds"), StartupDelay);
			if (UWorld* World = GetWorld())
			{
				World->GetTimerManager().SetTimer(
					StartupDelayTimer,
					[this]()
					{
						bStartupDelayComplete = true;
						RunBehaviorTree(BehaviorTree);
						UE_LOG(LogHauntedEscape, Log, TEXT("HEAIController: Startup delay complete, AI activated"));
					},
					StartupDelay,
					false  // don't loop
				);
			}
		}
		else
		{
			// No delay, start immediately
			bStartupDelayComplete = true;
			RunBehaviorTree(BehaviorTree);
		}
	}

	// Start periodic light checking
	if (UWorld* World = GetWorld())
	{
		World->GetTimerManager().SetTimer(
			LightCheckTimer,
			this,
			&AHEAIController::CheckForLights,
			LightCheckInterval,
			true  // loop
		);
	}
}

void AHEAIController::OnEnemyDeath()
{
	UE_LOG(LogHauntedEscape, Log, TEXT("HEAIController: possessed enemy died, cleaning up"));
	GetPathFollowingComponent()->AbortMove(*this, FPathFollowingResultFlags::UserAbort);

	// Stop light checking
	if (UWorld* World = GetWorld())
	{
		World->GetTimerManager().ClearTimer(LightCheckTimer);
		World->GetTimerManager().ClearTimer(StartupDelayTimer);
	}

	UnPossess();
	Destroy();
}

void AHEAIController::SetTargetActor(AActor* NewTarget)
{
	TargetActor = NewTarget;
	if (UBlackboardComponent* BB = GetBlackboardComponent())
	{
		BB->SetValueAsObject(BB_TargetActor, NewTarget);
	}
}

void AHEAIController::ClearTargetActor()
{
	TargetActor = nullptr;
	if (UBlackboardComponent* BB = GetBlackboardComponent())
	{
		BB->ClearValue(BB_TargetActor);
	}
}

void AHEAIController::OnPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus)
{
	if (Stimulus.WasSuccessfullySensed())
	{
		UE_LOG(LogHauntedEscape, Log, TEXT("HEAIController: perceived %s"), *GetNameSafe(Actor));
		SetTargetActor(Actor);
	}
	else
	{
		UE_LOG(LogHauntedEscape, Log, TEXT("HEAIController: lost perception of %s"), *GetNameSafe(Actor));
		ClearTargetActor();
	}
}

void AHEAIController::OnPerceptionForgotten(AActor* Actor)
{
	UE_LOG(LogHauntedEscape, Log, TEXT("HEAIController: forgot %s"), *GetNameSafe(Actor));
	if (TargetActor == Actor)
	{
		ClearTargetActor();
	}
}

void AHEAIController::CheckForLights()
{
	UWorld* World = GetWorld();
	if (!World) return;

	APawn* ControlledPawn = GetPawn();
	if (!ControlledPawn) return;

	FVector PawnLocation = ControlledPawn->GetActorLocation();

	// Find ALL light components in the world (not just ALight actors)
	// BUT ignore directional lights (like the sun)
	TArray<ULightComponent*> AllLightComponents;
	for (TObjectIterator<ULightComponent> It; It; ++It)
	{
		ULightComponent* LightComp = *It;
		if (LightComp && LightComp->GetWorld() == World)
		{
			// Skip directional lights (they're usually sun/moon - ambient lighting)
			if (LightComp->IsA<UDirectionalLightComponent>())
			{
				continue;
			}
			AllLightComponents.Add(LightComp);
		}
	}

	AActor* NearestLightOwner = nullptr;
	float ClosestDistance = LightDetectionRange;

	for (ULightComponent* LightComp : AllLightComponents)
	{
		if (!LightComp || !LightComp->IsVisible()) continue;

		// Check if light is bright enough
		if (LightComp->Intensity < MinLightIntensity) continue;

		float Distance = FVector::Dist(PawnLocation, LightComp->GetComponentLocation());

		// Check if within range and closest so far
		if (Distance < ClosestDistance)
		{
			NearestLightOwner = LightComp->GetOwner();
			ClosestDistance = Distance;
		}
	}

	// Update blackboard
	if (UBlackboardComponent* BB = GetBlackboardComponent())
	{
		if (NearestLightOwner)
		{
			BB->SetValueAsObject(BB_NearestLight, NearestLightOwner);
			BB->SetValueAsBool(BB_IsFleeingFromLight, true);
			UE_LOG(LogHauntedEscape, Warning, TEXT("HEAIController: FLEEING FROM LIGHT %s at distance %.1f"),
			       *GetNameSafe(NearestLightOwner), ClosestDistance);
		}
		else
		{
			BB->ClearValue(BB_NearestLight);
			BB->SetValueAsBool(BB_IsFleeingFromLight, false);
			// Only log occasionally to avoid spam
			static int32 LogCounter = 0;
			if (LogCounter++ % 50 == 0)
			{
				UE_LOG(LogHauntedEscape, Log, TEXT("HEAIController: No lights detected nearby"));
			}
		}
	}
}
