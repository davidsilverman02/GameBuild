// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MenuGameModeBase.generated.h"

class UUserWidget;
/**
 * 
 */
UCLASS()
class SHOOTYARENA_API AMenuGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:

	AMenuGameModeBase();

	virtual void BeginPlay() override;

	//UUserWidget* Wight;

	UPROPERTY(BlueprintReadWrite)
	APlayerController* MyController;
};
