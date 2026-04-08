// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_FleeFromActor.generated.h"

/**
 * Behavior Tree task that makes the AI move away from a target actor.
 * Used to make enemies flee from light sources.
 */
UCLASS()
class HAUNTEDESCAPE_API UBTTask_FleeFromActor : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UBTTask_FleeFromActor();

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

protected:

	/** Blackboard key storing the actor to flee from (e.g., NearestLight). */
	UPROPERTY(EditAnywhere, Category="Blackboard")
	FBlackboardKeySelector ActorToFleeFrom;

	/** How far away to try to get from the target actor. */
	UPROPERTY(EditAnywhere, Category="AI")
	float FleeDistance = 1000.0f;

	/** Acceptable radius for the flee destination. */
	UPROPERTY(EditAnywhere, Category="AI")
	float AcceptanceRadius = 100.0f;
};
