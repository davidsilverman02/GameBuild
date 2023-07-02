// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/PointLight.h"
#include "GameFramework/Actor.h"
#include "Maze.generated.h"

class AMazeCube;
class UMazeBox;
class UInstancedStaticMeshComponent;
class UMeshComponent;
class UBoxSerial;
class UBoxItem;
class AMaze;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSeedRepl, AMaze*, Maza);

USTRUCT(BlueprintType)
struct FNoden
{
	GENERATED_BODY(IS_PROPERTY_REPLICATED)

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bUp;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bDown;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bNorth;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bSouth;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bWest;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bEast;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bVisited;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FIntVector NodePos;

	FNoden()
	{
		bUp = true;
		bDown = true;
		bNorth = true;
		bSouth = true;
		bEast = true;
		bWest = true;
		bVisited = false;
	}
	
	FNoden(FIntVector pos)
	{
		pos = NodePos;
		bUp = true;
		bDown = true;
		bNorth = true;
		bSouth = true;
		bEast = true;
		bWest = true;
		bVisited = false;
	}
	
	FIntVector UpPoint()
	{
		return FIntVector(NodePos.X, NodePos.Y, NodePos.Z + 1);
	}
	
	FIntVector DownPoint()
	{
		return FIntVector(NodePos.X, NodePos.Y, NodePos.Z - 1);
	}
	
	FIntVector NorthPoint()
	{
		return FIntVector(NodePos.X, NodePos.Y + 1, NodePos.Z);
	}
	
	FIntVector SouthPoint()
	{
		return FIntVector(NodePos.X, NodePos.Y - 1, NodePos.Z);
	}
	
	FIntVector EastPoint()
	{
		return FIntVector(NodePos.X + 1, NodePos.Y, NodePos.Z);
	}
	
	FIntVector WestPoint()
	{
		return FIntVector(NodePos.X - 1, NodePos.Y, NodePos.Z);
	}
	
	bool GetClog()
	{
		if((bNorth == false || bSouth == false) ^ (bEast == false || bWest == false) ^ (bUp == false || bDown == false))
			return true;
		else
			return false;
	}
};

UCLASS()
class SHOOTYARENA_API AMaze : public AActor
{
	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	AMaze();

	FIntVector ToPos;

	FIntVector FromPos;
protected:

	//UPROPERTY(EditDefaultsOnly, ReplicatedUsing="OnRep_Seed", Category= "Seed")
	UPROPERTY(Replicated)
	uint32 Seed;

	FRandomStream Rand;
	
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

	UPROPERTY(EditAnywhere, Category = "Stats")
	float flatPart;

	UPROPERTY(EditAnywhere, Category = "Stats")
	float thinPart;

	UPROPERTY(EditAnywhere, Category = "Stats")
	float DistS;
	
	UStaticMesh* CubeMesh;

	UPROPERTY(BlueprintReadWrite)
	TArray<FIntVector> Adjacent;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FNoden> NodeData;

	//UPROPERTY(BlueprintReadWrite)
	//TArray<bool> Visit;
	
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

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UInstancedStaticMeshComponent* UpWalls;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UInstancedStaticMeshComponent* DownWalls;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UInstancedStaticMeshComponent* NorthWalls;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UInstancedStaticMeshComponent* SouthWalls;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UInstancedStaticMeshComponent* EastWalls;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UInstancedStaticMeshComponent* WestWalls;

	//UPROPERTY(BlueprintReadWrite, EditAnywhere)
	//UMeshComponent* Mesh;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	USceneComponent* Center;
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<class APointLight> Light;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<TSubclassOf<class APointLight>> Lights;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void PlaceNodes();

	UFUNCTION(BlueprintCallable)
	void BuildMaze();

	UFUNCTION(BlueprintCallable)
	void Walk(FIntVector NuPos);

	UFUNCTION(BlueprintCallable)
	void Hunt();

	UFUNCTION(BlueprintCallable)
	int PointIndex(FIntVector pos);

	UFUNCTION(BlueprintCallable)
	void ClearToFrom();

	UFUNCTION(BlueprintCallable)
	void SetAdj(FIntVector pont);

	UFUNCTION(BlueprintCallable)
	void GetHunt(FIntVector pont);

	UFUNCTION(BlueprintCallable)
	void MakeClean(FNoden Cube);

	UFUNCTION(BlueprintCallable)
	void BuildRoom(FVector vec);

	UFUNCTION(BlueprintCallable)
	void BuildRooms();

	UFUNCTION(BlueprintCallable)
	void MakeRoom();
	
	UFUNCTION(BlueprintCallable)
	void ExpandRooms();

	UFUNCTION(BlueprintCallable)
	void Illuminate();

	UFUNCTION()
	void OnRep_Seed();
	
	//UFUNCTION(BlueprintCallable)
	//void SetSeed();

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	
	FName GetNae(FIntVector conve);

	FTransform Trils;

	FVector VecNum;
	
	FSeedRepl SeedRepl;
};
