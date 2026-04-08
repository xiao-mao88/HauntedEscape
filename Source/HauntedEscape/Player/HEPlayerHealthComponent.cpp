// Copyright Epic Games, Inc. All Rights Reserved.

#include "Player/HEPlayerHealthComponent.h"
#include "TimerManager.h"
#include "HauntedEscape.h"

UHEPlayerHealthComponent::UHEPlayerHealthComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UHEPlayerHealthComponent::BeginPlay()
{
	Super::BeginPlay();
	
	// Initialize lives
	CurrentLives = MaxLives;
	OnLivesChanged.Broadcast(CurrentLives);
}

bool UHEPlayerHealthComponent::TakeLife()
{
	// Don't take life if invincible
	if (bIsInvincible)
	{
		UE_LOG(LogHauntedEscape, Log, TEXT("Player is invincible, no life lost"));
		return false;
	}

	// Lose a life
	CurrentLives--;
	UE_LOG(LogHauntedEscape, Warning, TEXT("Player lost a life! Lives remaining: %d"), CurrentLives);
	
	// Broadcast lives changed
	OnLivesChanged.Broadcast(CurrentLives);

	// Check if player died
	if (CurrentLives <= 0)
	{
		UE_LOG(LogHauntedEscape, Warning, TEXT("Player has died! Game Over"));
		OnPlayerDied.Broadcast();
		return true;  // Player died
	}

	// Grant temporary invincibility
	bIsInvincible = true;
	if (UWorld* World = GetWorld())
	{
		World->GetTimerManager().SetTimer(
			InvincibilityTimer,
			this,
			&UHEPlayerHealthComponent::EndInvincibility,
			InvincibilityDuration,
			false
		);
	}

	return false;  // Still alive
}

void UHEPlayerHealthComponent::AddLife()
{
	CurrentLives++;
	UE_LOG(LogHauntedEscape, Log, TEXT("Player gained a life! Lives: %d"), CurrentLives);
	OnLivesChanged.Broadcast(CurrentLives);
}

void UHEPlayerHealthComponent::ResetLives()
{
	CurrentLives = MaxLives;
	bIsInvincible = false;
	if (UWorld* World = GetWorld())
	{
		World->GetTimerManager().ClearTimer(InvincibilityTimer);
	}
	OnLivesChanged.Broadcast(CurrentLives);
	UE_LOG(LogHauntedEscape, Log, TEXT("Player lives reset to %d"), MaxLives);
}

void UHEPlayerHealthComponent::EndInvincibility()
{
	bIsInvincible = false;
	UE_LOG(LogHauntedEscape, Log, TEXT("Player invincibility ended"));
}
