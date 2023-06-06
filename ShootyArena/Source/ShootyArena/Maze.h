// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Maze.generated.h"

class AMazeCube;

UCLASS()
class SHOOTYARENA_API AMaze : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMaze();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Stats")
	int halfWidth;

	UPROPERTY(EditAnywhere, Category = "Stats")
	int halfHeight;

	UPROPERTY(EditAnywhere, Category = "Stats")
	int halfDepth;

	UFUNCTION(BlueprintCallable)
	int width();

	UFUNCTION(BlueprintCallable)
	int height();

	UFUNCTION(BlueprintCallable)
	int depth();

	UPROPERTY(EditAnywhere, Category = "Stats")
	FVector3f RoomSizeInUnits;

	UPROPERTY(BlueprintReadWrite)
	TArray<AMazeCube*> NodeItems;

	UPROPERTY(BlueprintReadWrite)
	TArray<FIntVector> Adjacent;

	UPROPERTY(BlueprintReadWrite)
	TMap<int, bool> Visit;
	
	UPROPERTY(EditAnywhere)
	UObject* RoomMake;

	UPROPERTY(EditAnywhere)
	bool bHasStarted;

	UPROPERTY(EditAnywhere)
	bool bRunning;

	UPROPERTY(EditAnywhere)
	bool bStartedHunt;

	UPROPERTY(EditAnywhere)
	bool bCantHunt;

	UPROPERTY(EditAnywhere)
	bool bBud;

	UPROPERTY(EditAnywhere)
	FIntVector NumPos;

	UPROPERTY(EditAnywhere)
	FIntVector UsdPos;

	UPROPERTY(EditAnywhere)
	FIntVector Stack;

	FActorSpawnParameters SpawnParams;

	FTransform SpawnTM;

	FRotator BaseRot;

	FVector RoomPos;

	FIntVector Calc;

	FIntVector Posit;

	FIntVector HuntPosit;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void PlaceNodes();

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void BuildMaze();

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Walk(FIntVector nuPos);

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Hunt();

	UFUNCTION(BlueprintCallable)
	int PointIndex(FIntVector pos);

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void ClearToFrom(FIntVector to, FIntVector from);

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void SetAdj(FIntVector pont);

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void GetHunt(FIntVector pont);

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void MakeClean(AMazeCube* Cube);
};
