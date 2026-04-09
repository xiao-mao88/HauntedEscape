// Copyright Epic Games, Inc. All Rights Reserved.

#include "AICharacter/HEEnemyCharacter.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Player/HEPlayerHealthComponent.h"
#include "TimerManager.h"
#include "HauntedEscape.h"

AHEEnemyCharacter::AHEEnemyCharacter()
{
	// Start at patrol speed; switch to ChaseSpeed via SetChaseSpeed() from the AI controller
	GetCharacterMovement()->MaxWalkSpeed = PatrolSpeed;

	// The First Person Mesh is inherited from HauntedEscapeCharacter but enemies don't need it
	// Disable it in the constructor so it never tries to look up the "head" socket
	if (USkeletalMeshComponent* FPMesh = GetFirstPersonMesh())
	{
		FPMesh->SetSkeletalMesh(nullptr);
		FPMesh->SetHiddenInGame(true);
		FPMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		FPMesh->Deactivate();
	}
}

void AHEEnemyCharacter::BeginPlay()
{
	Super::BeginPlay();

	// Bind to capsule overlap to damage player on contact
	if (UCapsuleComponent* Capsule = GetCapsuleComponent())
	{
		UE_LOG(LogHauntedEscape, Warning, TEXT("Enemy BeginPlay: Binding overlap event to capsule"));
		Capsule->OnComponentBeginOverlap.AddDynamic(this, &AHEEnemyCharacter::OnCapsuleBeginOverlap);
		
		// Log capsule collision settings
		UE_LOG(LogHauntedEscape, Warning, TEXT("Enemy Capsule - Generate Overlap Events: %s"),
		       Capsule->GetGenerateOverlapEvents() ? TEXT("TRUE") : TEXT("FALSE"));
	}
	else
	{
		UE_LOG(LogHauntedEscape, Error, TEXT("Enemy BeginPlay: NO CAPSULE COMPONENT FOUND!"));
	}
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

void AHEEnemyCharacter::OnCapsuleBeginOverlap(
	UPrimitiveComponent* OverlappedComponent,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex,
	bool bFromSweep,
	const FHitResult& SweepResult)
{
	UE_LOG(LogHauntedEscape, Warning, TEXT("Enemy overlap triggered with: %s"), *GetNameSafe(OtherActor));
	
	// Don't do anything if this enemy is already dead
	if (bIsDead)
	{
		UE_LOG(LogHauntedEscape, Log, TEXT("Enemy is dead, ignoring overlap"));
		return;
	}

	// Check if we hit the player
	if (OtherActor && OtherActor->Tags.Contains(FName("Player")))
	{
		UE_LOG(LogHauntedEscape, Warning, TEXT("Enemy touched PLAYER!"));
		
		// Try to damage the player via their health component
		UHEPlayerHealthComponent* PlayerHealth = OtherActor->FindComponentByClass<UHEPlayerHealthComponent>();
		if (PlayerHealth)
		{
			UE_LOG(LogHauntedEscape, Warning, TEXT("Enemy touched player, taking life!"));
			PlayerHealth->TakeLife();
		}
		else
		{
			UE_LOG(LogHauntedEscape, Warning, TEXT("Enemy touched player but no HEPlayerHealthComponent found!"));
		}
	}
	else
	{
		UE_LOG(LogHauntedEscape, Log, TEXT("Overlapped actor does not have 'Player' tag. Actor tags: %d"),
		       OtherActor ? OtherActor->Tags.Num() : 0);
	}
}
