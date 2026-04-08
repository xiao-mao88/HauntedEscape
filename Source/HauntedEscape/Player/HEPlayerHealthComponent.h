// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HEPlayerHealthComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLivesChanged, int32, RemainingLives);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPlayerDied);

/**
 * Manages player lives/health system for HauntedEscape.
 * Player has a set number of lives - lose them all and game over.
 */
UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class HAUNTEDESCAPE_API UHEPlayerHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UHEPlayerHealthComponent();

protected:
	/** Number of lives the player starts with. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Health")
	int32 MaxLives = 3;

	/** Current number of lives remaining. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Health")
	int32 CurrentLives = 3;

	/** Invincibility duration after taking damage (seconds). */
	UPROPERTY(EditAnywhere, Category="Health")
	float InvincibilityDuration = 2.0f;

	/** Whether player is currently invincible. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Health")
	bool bIsInvincible = false;

	/** Timer for invincibility. */
	FTimerHandle InvincibilityTimer;

public:
	/** Broadcast when lives change. */
	UPROPERTY(BlueprintAssignable, Category="Health")
	FOnLivesChanged OnLivesChanged;

	/** Broadcast when player dies (runs out of lives). */
	UPROPERTY(BlueprintAssignable, Category="Health")
	FOnPlayerDied OnPlayerDied;

	virtual void BeginPlay() override;

	/** Take one life from the player. Returns true if player died. */
	UFUNCTION(BlueprintCallable, Category="Health")
	bool TakeLife();

	/** Add one life to the player. */
	UFUNCTION(BlueprintCallable, Category="Health")
	void AddLife();

	/** Reset lives to max. */
	UFUNCTION(BlueprintCallable, Category="Health")
	void ResetLives();

	/** Get current lives. */
	UFUNCTION(BlueprintPure, Category="Health")
	int32 GetCurrentLives() const { return CurrentLives; }

	/** Check if player is invincible. */
	UFUNCTION(BlueprintPure, Category="Health")
	bool IsInvincible() const { return bIsInvincible; }

protected:
	/** End invincibility period. */
	void EndInvincibility();
};
