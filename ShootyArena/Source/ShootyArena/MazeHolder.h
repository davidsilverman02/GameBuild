// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "MazeHolder.generated.h"

class AMazeCube;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SHOOTYARENA_API UMazeHolder : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMazeHolder();
	
	//UPROPERTY(BlueprintReadWrite)
	AMazeCube* Qbby;
};
