// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "HEAIController.generated.h"

class UAIPerceptionComponent;
class UBehaviorTree;
struct FAIStimulus;

/**
 *  Base AI Controller for HauntedEscape enemy characters.
 *  Handles possession, death cleanup, perception callbacks, and target tracking.
 *  Subclass this in Blueprint to configure perception senses and assign a Behavior Tree.
 */
UCLASS(BlueprintType, Blueprintable)
class HAUNTEDESCAPE_API AHEAIController : public AAIController
{
	GENERATED_BODY()

	/** Detects other actors through sight, hearing, and other senses. Configure senses in the Blueprint subclass. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components", meta = (AllowPrivateAccess = "true"))
	UAIPerceptionComponent* AIPerception;

protected:

	/** The Behavior Tree to run on possession. Assign this in BP_HEAIController. */
	UPROPERTY(EditAnywhere, Category="AI")
	UBehaviorTree* BehaviorTree;

	/** The actor this enemy is currently chasing / targeting. */
	TObjectPtr<AActor> TargetActor;

public:

	/** Blackboard key names — must match BB_HEEnemy exactly. */
	static const FName BB_TargetActor;
	static const FName BB_PatrolLocation;
	static const FName BB_NearestLight;
	static const FName BB_IsFleeingFromLight;

	AHEAIController();

protected:

	/** Called when this controller possesses a pawn. */
	virtual void OnPossess(APawn* InPawn) override;

	/** Called when the possessed enemy dies — stops movement and destroys the controller. */
	UFUNCTION()
	void OnEnemyDeath();

public:

	// -----------------------------------------------------------------------
	// Target tracking — callable from Blueprint or a Behavior Tree task
	// -----------------------------------------------------------------------

	/** Set the actor this enemy should chase/attack. Also writes to the Blackboard. */
	UFUNCTION(BlueprintCallable, Category="AI")
	void SetTargetActor(AActor* NewTarget);

	/** Clear the current target. Also clears the Blackboard key. */
	UFUNCTION(BlueprintCallable, Category="AI")
	void ClearTargetActor();

	/** Returns the current target, or nullptr if there is none. */
	UFUNCTION(BlueprintCallable, Category="AI")
	AActor* GetTargetActor() const { return TargetActor; }

protected:

	// -----------------------------------------------------------------------
	// Light detection and avoidance
	// -----------------------------------------------------------------------

	/** How often to check for nearby lights (seconds). */
	UPROPERTY(EditAnywhere, Category="AI")
	float LightCheckInterval = 0.2f;

	/** Maximum range to detect lights. */
	UPROPERTY(EditAnywhere, Category="AI")
	float LightDetectionRange = 1500.0f;

	/** Minimum light intensity to react to. */
	UPROPERTY(EditAnywhere, Category="AI")
	float MinLightIntensity = 0.1f;

	/** Delay before AI starts pursuing at game start (seconds). */
	UPROPERTY(EditAnywhere, Category="AI")
	float StartupDelay = 10.0f;

	/** Whether the startup delay has elapsed. */
	bool bStartupDelayComplete = false;

	/** Timer for startup delay. */
	FTimerHandle StartupDelayTimer;

	/** Timer for periodic light checks. */
	FTimerHandle LightCheckTimer;

	/** Check for nearby active light sources and update the Blackboard. */
	void CheckForLights();

protected:

	// -----------------------------------------------------------------------
	// Perception callbacks
	// -----------------------------------------------------------------------

	/** Called when the perception component detects or updates awareness of an actor. */
	UFUNCTION()
	void OnPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus);

	/** Called when the perception component forgets an actor (stimulus expired). */
	UFUNCTION()
	void OnPerceptionForgotten(AActor* Actor);
};
