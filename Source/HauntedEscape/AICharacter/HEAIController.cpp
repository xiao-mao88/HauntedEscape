// Copyright Epic Games, Inc. All Rights Reserved.

#include "AICharacter/HEAIController.h"
#include "AICharacter/HEEnemyCharacter.h"
#include "Perception/AIPerceptionComponent.h"
#include "Navigation/PathFollowingComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTree.h"
#include "HauntedEscape.h"

const FName AHEAIController::BB_TargetActor = FName("TargetActor");
const FName AHEAIController::BB_PatrolLocation = FName("PatrolLocation");

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
		RunBehaviorTree(BehaviorTree);
	}
}

void AHEAIController::OnEnemyDeath()
{
	UE_LOG(LogHauntedEscape, Log, TEXT("HEAIController: possessed enemy died, cleaning up"));
	GetPathFollowingComponent()->AbortMove(*this, FPathFollowingResultFlags::UserAbort);
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
