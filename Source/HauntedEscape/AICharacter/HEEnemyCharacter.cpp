// Copyright Epic Games, Inc. All Rights Reserved.

#include "AICharacter/HEEnemyCharacter.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "TimerManager.h"
#include "HauntedEscape.h"

AHEEnemyCharacter::AHEEnemyCharacter()
{
	// Start at patrol speed; switch to ChaseSpeed via SetChaseSpeed() from the AI controller
	GetCharacterMovement()->MaxWalkSpeed = PatrolSpeed;
}

void AHEEnemyCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void AHEEnemyCharacter::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	// Clear the death timer so it doesn't fire after the actor is gone
	GetWorld()->GetTimerManager().ClearTimer(DeathTimer);
}

float AHEEnemyCharacter::TakeDamage(float Damage, struct FDamageEvent const& DamageEvent,
                                     AController* EventInstigator, AActor* DamageCauser)
{
	// Ignore damage after death
	if (bIsDead)
	{
		return 0.0f;
	}

	CurrentHP -= Damage;

	UE_LOG(LogHauntedEscape, Log, TEXT("%s took %.1f damage, HP now %.1f"), *GetNameSafe(this), Damage, CurrentHP);

	if (CurrentHP <= 0.0f)
	{
		Die();
	}

	return Damage;
}

void AHEEnemyCharacter::SetPatrolSpeed()
{
	GetCharacterMovement()->MaxWalkSpeed = PatrolSpeed;
}

void AHEEnemyCharacter::SetChaseSpeed()
{
	GetCharacterMovement()->MaxWalkSpeed = ChaseSpeed;
}

void AHEEnemyCharacter::Die()
{
	if (bIsDead)
	{
		return;
	}

	bIsDead = true;

	// Notify listeners (AIController, GameMode, etc.)
	OnEnemyDeath.Broadcast();

	UE_LOG(LogHauntedEscape, Log, TEXT("%s has died"), *GetNameSafe(this));

	// Disable capsule so it stops blocking movement
	GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	// Stop any in-progress movement
	GetCharacterMovement()->StopMovementImmediately();
	GetCharacterMovement()->StopActiveMovement();

	// Ragdoll the third-person mesh
	GetMesh()->SetCollisionProfileName(RagdollCollisionProfile);
	GetMesh()->SetSimulatePhysics(true);
	GetMesh()->SetPhysicsBlendWeight(1.0f);

	// Schedule destruction
	GetWorld()->GetTimerManager().SetTimer(
		DeathTimer, this, &AHEEnemyCharacter::DeferredDestruction, DeferredDestructionTime, false);
}

void AHEEnemyCharacter::DeferredDestruction()
{
	Destroy();
}
