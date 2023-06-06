// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/PointLight.h"
#include "GameFramework/Actor.h"
#include "MazeCube.generated.h"

UCLASS()
class SHOOTYARENA_API AMazeCube : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMazeCube();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadOnly)
	bool bUp;

	UPROPERTY(EditAnywhere, Category= "Walls")
	UStaticMeshComponent* UpWall;

	UPROPERTY(BlueprintReadOnly)
	bool bDown;

	UPROPERTY(EditAnywhere, Category= "Walls")
	UStaticMeshComponent* DownWall;

	UPROPERTY(BlueprintReadOnly)
	bool bNorth;

	UPROPERTY(EditAnywhere, Category= "Walls")
	UStaticMeshComponent* NorthWall;

	UPROPERTY(BlueprintReadOnly)
	bool bSouth;

	UPROPERTY(EditAnywhere, Category= "Walls")
	UStaticMeshComponent* SouthWall;
	
	UPROPERTY(BlueprintReadOnly)
	bool bWest;

	UPROPERTY(EditAnywhere, Category= "Walls")
	UStaticMeshComponent* WestWall;
	
	UPROPERTY(BlueprintReadOnly)
	bool bEast;

	UPROPERTY(EditAnywhere, Category= "Walls")
	UStaticMeshComponent* EastWall;

	UPROPERTY(EditAnywhere)
	UPointLightComponent* Light;
	
	UPROPERTY(EditAnywhere)
	FIntVector NodePos;

	UFUNCTION(BlueprintCallable)
	void ActiveWall(bool Use, USceneComponent* Comp);
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

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
