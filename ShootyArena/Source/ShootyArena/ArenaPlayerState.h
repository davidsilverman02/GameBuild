// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "ArenaPlayerState.generated.h"

class AArenaPlayerState;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnPointsChanged, AArenaPlayerState*, PlayerState, int32, NewPoints, int32, Delta);
/**
 * 
 */
UCLASS()
class SHOOTYARENA_API AArenaPlayerState : public APlayerState
{
	GENERATED_BODY()

protected:

	UPROPERTY(EditDefaultsOnly, ReplicatedUsing="OnRep_Points", Category = "Points")
	int32 Points;

	UFUNCTION()
	void OnRep_Points(int32 OldPoints);

public:

	UFUNCTION(BlueprintCallable, Category = "Points")
	int32 GetPoints() const;

	UFUNCTION(BlueprintCallable, Category = "Points")
	void AddPoints(int32 Delta);

	UFUNCTION(BlueprintCallable, Category = "Points")
	bool RemovePoints(int32 Delta);

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnPointsChanged OnPointsChanged;
};
