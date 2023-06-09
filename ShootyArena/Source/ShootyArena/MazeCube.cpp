// Fill out your copyright notice in the Description page of Project Settings.


#include "MazeCube.h"

#include "Components/PointLightComponent.h"

class UPointLightComponent;
class UStaticMeshComponent;

// Sets default values
AMazeCube::AMazeCube()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	UpWall = CreateDefaultSubobject<UStaticMeshComponent>("Up");
	UpWall->SetupAttachment(RootComponent);

	DownWall = CreateDefaultSubobject<UStaticMeshComponent>("Down");
	DownWall->SetupAttachment(RootComponent);

	NorthWall = CreateDefaultSubobject<UStaticMeshComponent>("North");
	NorthWall->SetupAttachment(RootComponent);

	SouthWall = CreateDefaultSubobject<UStaticMeshComponent>("South");
	SouthWall->SetupAttachment(RootComponent);

	EastWall = CreateDefaultSubobject<UStaticMeshComponent>("East");
	EastWall->SetupAttachment(RootComponent);

	WestWall = CreateDefaultSubobject<UStaticMeshComponent>("West");
	WestWall->SetupAttachment(RootComponent);

	Light = CreateDefaultSubobject<UPointLightComponent>("Light");
	Light->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AMazeCube::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMazeCube::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMazeCube::SetNode_Implementation(FIntVector vec)
{
	NodePos = vec;
}

FIntVector AMazeCube::GetNode()
{
	return NodePos;
}

bool AMazeCube::GetUp()
{
	return bUp;
}

void AMazeCube::SetUp_Implementation(bool newB)
{
	bUp = newB;
	ActiveWall(bUp, UpWall);
}

FIntVector AMazeCube::UpPoint()
{
	return FIntVector(NodePos.X, NodePos.Y, NodePos.Z + 1);
}

bool AMazeCube::GetDown()
{
	return bDown;
}

void AMazeCube::SetDown_Implementation(bool newB)
{
	bDown = newB;
	ActiveWall(bDown, DownWall);
}

FIntVector AMazeCube::DownPoint()
{
	return FIntVector(NodePos.X, NodePos.Y, NodePos.Z - 1);
}

bool AMazeCube::GetNorth()
{
	return bNorth;
}

void AMazeCube::SetNorth_Implementation(bool newB)
{
	bNorth = newB;
	ActiveWall(bNorth, NorthWall);
}

FIntVector AMazeCube::NorthPoint()
{
	return FIntVector(NodePos.X, NodePos.Y + 1, NodePos.Z);
}

bool AMazeCube::GetSouth()
{
	return bSouth;
}

void AMazeCube::SetSouth_Implementation(bool newB)
{
	bSouth = newB;
	ActiveWall(bSouth, SouthWall);
}

FIntVector AMazeCube::SouthPoint()
{
	return FIntVector(NodePos.X, NodePos.Y - 1, NodePos.Z);
}

bool AMazeCube::GetEast()
{
	return bEast;
}

void AMazeCube::SetEast_Implementation(bool newB)
{
	bEast = newB;
	ActiveWall(bEast, EastWall);
}

FIntVector AMazeCube::EastPoint()
{
	return FIntVector(NodePos.X + 1, NodePos.Y, NodePos.Z);
}

bool AMazeCube::GetWest()
{
	return bWest;
}

void AMazeCube::SetWest_Implementation(bool newB)
{
	bWest = newB;
	ActiveWall(bWest, WestWall);
}

FIntVector AMazeCube::WestPoint()
{
	return FIntVector(NodePos.X - 1, NodePos.Y, NodePos.Z);
}

void AMazeCube::ActiveWall(bool Use, USceneComponent* Comp)
{
	if(Use)
		Comp->Activate();
	else
		Comp->Deactivate();
}

bool AMazeCube::GetClog()
{
	if((bNorth == false || bSouth == false) ^ (bEast == false || bWest == false) ^ (bUp == false || bDown == false))
		return true;
	else
		return false;
}























