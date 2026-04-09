// Copyright Epic Games, Inc. All Rights Reserved.

#include "AICharacter/BTTask_FleeFromActor.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "NavigationSystem.h"
#include "Navigation/PathFollowingComponent.h"
#include "Components/LightComponent.h"
#include "HauntedEscape.h"

UBTTask_FleeFromActor::UBTTask_FleeFromActor()
{
	NodeName = "Flee From Actor";
	
	// This task needs to know which blackboard key contains the actor to flee from
	ActorToFleeFrom.AddObjectFilter(this, GET_MEMBER_NAME_CHECKED(UBTTask_FleeFromActor, ActorToFleeFrom), AActor::StaticClass());
}

EBTNodeResult::Type UBTTask_FleeFromActor::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AAIController* AIController = OwnerComp.GetAIOwner();
	if (!AIController)
	{
		return EBTNodeResult::Failed;
	}

	APawn* ControlledPawn = AIController->GetPawn();
	if (!ControlledPawn)
	{
		return EBTNodeResult::Failed;
	}

	UBlackboardComponent* BlackboardComp = OwnerComp.GetBlackboardComponent();
	if (!BlackboardComp)
	{
		return EBTNodeResult::Failed;
	}

	// Get the actor we're fleeing from
	UObject* TargetObject = BlackboardComp->GetValueAsObject(ActorToFleeFrom.SelectedKeyName);
	AActor* TargetActor = Cast<AActor>(TargetObject);
	
	if (!TargetActor)
	{
		UE_LOG(LogHauntedEscape, Warning, TEXT("BTTask_FleeFromActor: No valid actor to flee from"));
		return EBTNodeResult::Failed;
	}

	// Get the actual light location (might be a component on the actor)
	FVector TargetLocation = TargetActor->GetActorLocation();
	
	// If the actor has a light component, use that location instead
	ULightComponent* LightComp = TargetActor->FindComponentByClass<ULightComponent>();
	if (LightComp)
	{
		TargetLocation = LightComp->GetComponentLocation();
		UE_LOG(LogHauntedEscape, Warning, TEXT("BTTask_FleeFromActor: Fleeing from light component on %s"), *GetNameSafe(TargetActor));
	}

	// Calculate direction away from the target
	FVector PawnLocation = ControlledPawn->GetActorLocation();
	FVector FleeDirection = (PawnLocation - TargetLocation).GetSafeNormal();

	// Calculate flee destination
	FVector FleeDestination = PawnLocation + (FleeDirection * FleeDistance);

	// Try to find a navigable location near the flee destination
	UNavigationSystemV1* NavSys = UNavigationSystemV1::GetCurrent(GetWorld());
	if (!NavSys)
	{
		UE_LOG(LogHauntedEscape, Warning, TEXT("BTTask_FleeFromActor: No navigation system found"));
		return EBTNodeResult::Failed;
	}

	FNavLocation NavLocation;
	if (NavSys->ProjectPointToNavigation(FleeDestination, NavLocation, FVector(500.0f, 500.0f, 500.0f)))
	{
		// Move to the flee location
		EPathFollowingRequestResult::Type Result = AIController->MoveToLocation(
			NavLocation.Location,
			AcceptanceRadius,
			true,  // stop on overlap
			true,  // use pathfinding
			false, // allow partial path
			true   // project destination to navigation
		);

		if (Result == EPathFollowingRequestResult::RequestSuccessful)
		{
			UE_LOG(LogHauntedEscape, Log, TEXT("BTTask_FleeFromActor: Successfully requested flee movement"));
			return EBTNodeResult::Succeeded;
		}
	}

	UE_LOG(LogHauntedEscape, Warning, TEXT("BTTask_FleeFromActor: Failed to find valid flee destination"));
	return EBTNodeResult::Failed;
}
