// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ShootyArenaGameMode.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTimeChanged, FString, Tim);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGameEnded, bool, HighHealth);
UCLASS(minimalapi)
class AShootyArenaGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AShootyArenaGameMode();

	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int MatchTime;

	UPROPERTY(BlueprintReadWrite)
	int CurrentTime;
	
	UPROPERTY()
	FTimerHandle MatchStart;

	UFUNCTION(BlueprintCallable)
	FString TimeInMinutes();

	UPROPERTY(BlueprintCallable)
	FOnTimeChanged TimeChanged;

	UPROPERTY(BlueprintCallable)
	FGameEnded GameEnded;

	UFUNCTION(BlueprintCallable)
	void TimeDown();

	UFUNCTION(BlueprintCallable)
	void TimeEnd();

	UFUNCTION(BlueprintCallable)
	void StartGame();

	UPROPERTY(BlueprintReadWrite)
	bool InGame;

	
};



