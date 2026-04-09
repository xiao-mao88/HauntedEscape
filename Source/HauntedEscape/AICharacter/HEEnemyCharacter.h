// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Player/HauntedEscapeCharacter.h"
#include "HEEnemyCharacter.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEnemyDeathDelegate);

/**
 *  Base class for AI-controlled enemy characters in HauntedEscape.
 *  Subclass this in Blueprint to assign a mesh, anim blueprint, and AI Controller.
 *  Behavior is driven by an AIController + behavior tree / state tree.
 */
UCLASS(BlueprintType, Blueprintable)
class HAUNTEDESCAPE_API AHEEnemyCharacter : public AHauntedEscapeCharacter
{
	GENERATED_BODY()

public:

	AHEEnemyCharacter();

	// Health/Damage

	// Current HP. Enemy dies when this reaches zero.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Damage")
	float CurrentHP = 100.0f;

	// Delegate broadcast when this enemy dies.
	UPROPERTY(BlueprintAssignable, Category="Damage")
	FEnemyDeathDelegate OnEnemyDeath;

protected:

	// Collision profile to use when entering ragdoll on death
	UPROPERTY(EditAnywhere, Category="Damage")
	FName RagdollCollisionProfile = FName("Ragdoll");

	// Seconds to wait after death before destroying the actor
	UPROPERTY(EditAnywhere, Category="Damage")
	float DeferredDestructionTime = 5.0f;

	// Whether this enemy has already died (prevents double-death).
	bool bIsDead = false;

	// Timer handle for deferred destruction after death.
	FTimerHandle DeathTimer;

	// Movement speeds (set on the CharacterMovementComponent at runtime)
	// Walk/patrol speed
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Movement")
	float PatrolSpeed = 200.0f;

	// Chase/alert speed
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Movement")
	float ChaseSpeed = 450.0f;

	// Lifecycle

protected:

	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:

	// Handle incoming damage — reduces HP and triggers Die() at zero.
	virtual float TakeDamage(float Damage, struct FDamageEvent const& DamageEvent,
	                         AController* EventInstigator, AActor* DamageCauser) override;

	// Speed helpers

	// Switch movement speed to patrol mode.
	UFUNCTION(BlueprintCallable, Category="Movement")
	void SetPatrolSpeed();

	// Switch movement speed to chase mode
	UFUNCTION(BlueprintCallable, Category="Movement")
	void SetChaseSpeed();

protected:

	/** Called when this enemy overlaps with another actor (to damage player). */
	UFUNCTION()
	void OnCapsuleBeginOverlap(
		UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult
	);

protected:

	// Called when HP reaches zero.
	void Die();

	// Called after the death timer fires to destroy the actor
	void DeferredDestruction();
};
