// Fill out your copyright notice in the Description page of Project Settings.


#include "MazeBox.h"

#include "Constraint.h"
#include "Components/PointLightComponent.h"

class UPointLightComponent;
class UStaticMeshComponent;

// Sets default values
UMazeBox::UMazeBox()
{
	flatPart = 8.0f;
	thinPart = 0.2f;
	DistS = 390.0f;
	CubeMesh = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'")).Object;
	
	Light = CreateDefaultSubobject<UPointLightComponent>("Box");
	Light->SetupAttachment(this);
	
	UpWall = CreateDefaultSubobject<UStaticMeshComponent>("Up");
	UpWall->SetupAttachment(Light);
	UpWall->SetMobility(EComponentMobility::Stationary);
	UpWall->SetStaticMesh(CubeMesh);
	UpWall->SetRelativeScale3D(FVector(flatPart, flatPart, thinPart));
	UpWall->SetRelativeLocation(FVector(0, 0, DistS));
	UpWall->SetEnableGravity(false);
	UpWall->GetBodyInstance()->bLockXTranslation = true;
	UpWall->GetBodyInstance()->bLockYTranslation = true;
	UpWall->GetBodyInstance()->bLockZTranslation = true;
	UpWall->CastShadow = false;

	DownWall = CreateDefaultSubobject<UStaticMeshComponent>("Down");
	DownWall->SetupAttachment(Light);
	DownWall->SetMobility(EComponentMobility::Stationary);
	DownWall->SetStaticMesh(CubeMesh);
	DownWall->SetRelativeScale3D(FVector(flatPart, flatPart, thinPart));
	DownWall->SetRelativeLocation(FVector(0, 0, -DistS));
	DownWall->SetEnableGravity(false);
	DownWall->GetBodyInstance()->bLockXTranslation = true;
	DownWall->GetBodyInstance()->bLockYTranslation = true;
	DownWall->GetBodyInstance()->bLockZTranslation = true;
	DownWall->CastShadow = false;

	NorthWall = CreateDefaultSubobject<UStaticMeshComponent>("North");
	NorthWall->SetupAttachment(Light);
	NorthWall->SetMobility(EComponentMobility::Stationary);
	NorthWall->SetStaticMesh(CubeMesh);
	NorthWall->SetRelativeScale3D(FVector(flatPart, thinPart, flatPart));
	NorthWall->SetRelativeLocation(FVector(0, DistS, 0));
	NorthWall->SetEnableGravity(false);
	NorthWall->GetBodyInstance()->bLockXTranslation = true;
	NorthWall->GetBodyInstance()->bLockYTranslation = true;
	NorthWall->GetBodyInstance()->bLockZTranslation = true;
	NorthWall->CastShadow = false;

	SouthWall = CreateDefaultSubobject<UStaticMeshComponent>("South");
	SouthWall->SetupAttachment(Light);
	SouthWall->SetMobility(EComponentMobility::Stationary);
	SouthWall->SetStaticMesh(CubeMesh);
	SouthWall->SetRelativeScale3D(FVector(flatPart, thinPart, flatPart));
	SouthWall->SetRelativeLocation(FVector(0, -DistS, 0));
	SouthWall->SetEnableGravity(false);
	SouthWall->GetBodyInstance()->bLockXTranslation = true;
	SouthWall->GetBodyInstance()->bLockYTranslation = true;
	SouthWall->GetBodyInstance()->bLockZTranslation = true;
	SouthWall->CastShadow = false;

	EastWall = CreateDefaultSubobject<UStaticMeshComponent>("East");
	EastWall->SetupAttachment(Light);
	EastWall->SetMobility(EComponentMobility::Stationary);
	EastWall->SetStaticMesh(CubeMesh);
	EastWall->SetRelativeScale3D(FVector(thinPart, flatPart, flatPart));
	EastWall->SetRelativeLocation(FVector(DistS, 0, 0));
	EastWall->SetEnableGravity(false);
	EastWall->GetBodyInstance()->bLockXTranslation = true;
	EastWall->GetBodyInstance()->bLockYTranslation = true;
	EastWall->GetBodyInstance()->bLockZTranslation = true;
	EastWall->CastShadow = false;

	WestWall = CreateDefaultSubobject<UStaticMeshComponent>("West");
	WestWall->SetupAttachment(Light);
	WestWall->SetMobility(EComponentMobility::Stationary);
	WestWall->SetStaticMesh(CubeMesh);
	WestWall->SetRelativeScale3D(FVector(thinPart, flatPart, flatPart));
	WestWall->SetRelativeLocation(FVector(-DistS, 0, 0));
	WestWall->SetEnableGravity(false);
	WestWall->GetBodyInstance()->bLockXTranslation = true;
	WestWall->GetBodyInstance()->bLockYTranslation = true;
	WestWall->GetBodyInstance()->bLockZTranslation = true;
	WestWall->CastShadow = false;
}

// Called when the game starts or when spawned
void UMazeBox::BeginPlay()
{
	Super::BeginPlay();
	
}

void UMazeBox::SetNode_Implementation(FIntVector vec)
{
	NodePos = vec;
}

FIntVector UMazeBox::GetNode()
{
	return NodePos;
}

bool UMazeBox::GetUp()
{
	return bUp;
}

void UMazeBox::SetUp_Implementation(bool newB)
{
	bUp = newB;
	ActiveWall(bUp, UpWall);
}

FIntVector UMazeBox::UpPoint()
{
	return FIntVector(NodePos.X, NodePos.Y, NodePos.Z + 1);
}

bool UMazeBox::GetDown()
{
	return bDown;
}

void UMazeBox::SetDown_Implementation(bool newB)
{
	bDown = newB;
	ActiveWall(bDown, DownWall);
}

FIntVector UMazeBox::DownPoint()
{
	return FIntVector(NodePos.X, NodePos.Y, NodePos.Z - 1);
}

bool UMazeBox::GetNorth()
{
	return bNorth;
}

void UMazeBox::SetNorth_Implementation(bool newB)
{
	bNorth = newB;
	ActiveWall(bNorth, NorthWall);
}

FIntVector UMazeBox::NorthPoint()
{
	return FIntVector(NodePos.X, NodePos.Y + 1, NodePos.Z);
}

bool UMazeBox::GetSouth()
{
	return bSouth;
}

void UMazeBox::SetSouth_Implementation(bool newB)
{
	bSouth = newB;
	ActiveWall(bSouth, SouthWall);
}

FIntVector UMazeBox::SouthPoint()
{
	return FIntVector(NodePos.X, NodePos.Y - 1, NodePos.Z);
}

bool UMazeBox::GetEast()
{
	return bEast;
}

void UMazeBox::SetEast_Implementation(bool newB)
{
	bEast = newB;
	ActiveWall(bEast, EastWall);
}

FIntVector UMazeBox::EastPoint()
{
	return FIntVector(NodePos.X + 1, NodePos.Y, NodePos.Z);
}

bool UMazeBox::GetWest()
{
	return bWest;
}

void UMazeBox::SetWest_Implementation(bool newB)
{
	bWest = newB;
	ActiveWall(bWest, WestWall);
}

FIntVector UMazeBox::WestPoint()
{
	return FIntVector(NodePos.X - 1, NodePos.Y, NodePos.Z);
}

void UMazeBox::ActiveWall(bool Use, UStaticMeshComponent* Comp)
{
	Comp->SetVisibility(Use);
	if(Use)
		Comp->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	else
		Comp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

bool UMazeBox::GetClog()
{
	if((bNorth == false || bSouth == false) ^ (bEast == false || bWest == false) ^ (bUp == false || bDown == false))
		return true;
	else
		return false;
}

