// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BoxItem.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTYARENA_API UBoxItem : public UObject
{
	GENERATED_BODY()
public:
	UBoxItem();
	
protected:
	UPROPERTY(BlueprintReadOnly)
	bool bUp;

	UPROPERTY(BlueprintReadOnly)
	bool bDown;

	UPROPERTY(BlueprintReadOnly)
	bool bNorth;

	UPROPERTY(BlueprintReadOnly)
	bool bSouth;
	
	UPROPERTY(BlueprintReadOnly)
	bool bWest;
	
	UPROPERTY(BlueprintReadOnly)
	bool bEast;
	
	UPROPERTY(EditAnywhere)
	FIntVector NodePos;
	
public:
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void SetNode(FIntVector vec);

	UFUNCTION(BlueprintCallable)
	FIntVector GetNode();

	UFUNCTION(BlueprintCallable)
	bool GetUp();

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void SetUp(bool newB);

	UFUNCTION(BlueprintCallable)
	FIntVector UpPoint();

	UFUNCTION(BlueprintCallable)
	bool GetDown();

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void SetDown(bool newB);

	UFUNCTION(BlueprintCallable)
	FIntVector DownPoint();

	UFUNCTION(BlueprintCallable)
	bool GetNorth();

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void SetNorth(bool newB);

	UFUNCTION(BlueprintCallable)
	FIntVector NorthPoint();

	UFUNCTION(BlueprintCallable)
	bool GetSouth();

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void SetSouth(bool newB);

	UFUNCTION(BlueprintCallable)
	FIntVector SouthPoint();

	UFUNCTION(BlueprintCallable)
	bool GetEast();

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void SetEast(bool newB);

	UFUNCTION(BlueprintCallable)
	FIntVector EastPoint();

	UFUNCTION(BlueprintCallable)
	bool GetWest();

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void SetWest(bool newB);

	UFUNCTION(BlueprintCallable)
	FIntVector WestPoint();

	UFUNCTION(BlueprintCallable)
	bool GetClog();	
};
