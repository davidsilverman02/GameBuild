// Fill out your copyright notice in the Description page of Project Settings.


#include "Maze.h"

#include "MazeBox.h"
#include "MazeCube.h"
#include "SAdvancedRotationInputBox.h"
#include "Components/InstancedStaticMeshComponent.h"


// Sets default values
AMaze::AMaze()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	halfWidth = 1;
	halfDepth = 1;
	halfHeight = 1;
	RoomSizeInUnits = FVector3f(800, 800, 800);

	flatPart = 8.0f;
	thinPart = 0.2f;
	DistS = 390.0f;
	CubeMesh = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'")).Object;
	
	
	UpWalls = CreateDefaultSubobject<UInstancedStaticMeshComponent>("UpWalls");
	UpWalls->SetMobility(EComponentMobility::Stationary);
	UpWalls->SetStaticMesh(CubeMesh);
	UpWalls->SetWorldScale3D(FVector(flatPart, flatPart, thinPart));
	UpWalls->SetRelativeLocation(FVector(0, 0, 0));
	UpWalls->SetEnableGravity(false);
	UpWalls->GetBodyInstance()->bLockXTranslation = true;
	UpWalls->GetBodyInstance()->bLockYTranslation = true;
	UpWalls->GetBodyInstance()->bLockZTranslation = true;
	UpWalls->CastShadow = false;

	DownWalls = CreateDefaultSubobject<UInstancedStaticMeshComponent>("DownWalls");
	DownWalls->SetMobility(EComponentMobility::Stationary);
	DownWalls->SetStaticMesh(CubeMesh);
	DownWalls->SetRelativeScale3D(FVector(flatPart, flatPart, thinPart));
	DownWalls->SetRelativeLocation(FVector(0, 0, 0));
	DownWalls->SetEnableGravity(false);
	DownWalls->GetBodyInstance()->bLockXTranslation = true;
	DownWalls->GetBodyInstance()->bLockYTranslation = true;
	DownWalls->GetBodyInstance()->bLockZTranslation = true;
	DownWalls->CastShadow = false;

	NorthWalls = CreateDefaultSubobject<UInstancedStaticMeshComponent>("NorthWalls");
	NorthWalls->SetMobility(EComponentMobility::Stationary);
	NorthWalls->SetStaticMesh(CubeMesh);
	//NorthWalls->SetRelativeScale3D(FVector(flatPart, thinPart, flatPart));
	NorthWalls->SetRelativeLocation(FVector(0, 0, 0));
	NorthWalls->SetEnableGravity(false);
	NorthWalls->GetBodyInstance()->bLockXTranslation = true;
	NorthWalls->GetBodyInstance()->bLockYTranslation = true;
	NorthWalls->GetBodyInstance()->bLockZTranslation = true;
	NorthWalls->CastShadow = false;

	SouthWalls = CreateDefaultSubobject<UInstancedStaticMeshComponent>("SouthWalls");
	SouthWalls->SetMobility(EComponentMobility::Stationary);
	SouthWalls->SetStaticMesh(CubeMesh);
	//SouthWalls->SetRelativeScale3D(FVector(flatPart, thinPart, flatPart));
	SouthWalls->SetRelativeLocation(FVector(0, 0, 0));
	SouthWalls->SetEnableGravity(false);
	SouthWalls->GetBodyInstance()->bLockXTranslation = true;
	SouthWalls->GetBodyInstance()->bLockYTranslation = true;
	SouthWalls->GetBodyInstance()->bLockZTranslation = true;
	SouthWalls->CastShadow = false;

	EastWalls = CreateDefaultSubobject<UInstancedStaticMeshComponent>("EastWalls");
	EastWalls->SetMobility(EComponentMobility::Stationary);
	EastWalls->SetStaticMesh(CubeMesh);
	//EastWalls->SetRelativeScale3D(FVector(thinPart, flatPart, flatPart));
	EastWalls->SetRelativeLocation(FVector(0, 0, 0));
	EastWalls->SetEnableGravity(false);
	EastWalls->GetBodyInstance()->bLockXTranslation = true;
	EastWalls->GetBodyInstance()->bLockYTranslation = true;
	EastWalls->GetBodyInstance()->bLockZTranslation = true;
	EastWalls->CastShadow = false;

	WestWalls = CreateDefaultSubobject<UInstancedStaticMeshComponent>("WestWalls");
	WestWalls->SetMobility(EComponentMobility::Stationary);
	WestWalls->SetStaticMesh(CubeMesh);
	//WestWalls->SetRelativeScale3D(FVector(thinPart, flatPart, flatPart));
	WestWalls->SetRelativeLocation(FVector(0, 0, 0));
	WestWalls->SetEnableGravity(false);
	WestWalls->GetBodyInstance()->bLockXTranslation = true;
	WestWalls->GetBodyInstance()->bLockYTranslation = true;
	WestWalls->GetBodyInstance()->bLockZTranslation = true;
	WestWalls->CastShadow = false;

	PlaceNodes();
}

// Called when the game starts or when spawned
void AMaze::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMaze::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

int AMaze::depth()
{
	return (halfDepth * 2) + 1;
}

int AMaze::height()
{
	return (halfHeight * 2) + 1;
}

int AMaze::width()
{
	return (halfWidth * 2) + 1;
}

void AMaze::PlaceNodes_Implementation()
{
	NodeData.Empty();
	UpWalls->ClearInstances();
	DownWalls->ClearInstances();
	NorthWalls->ClearInstances();
	SouthWalls->ClearInstances();
	EastWalls->ClearInstances();
	WestWalls->ClearInstances();
	
	for (double i = -halfWidth; i <= halfWidth; i++)
	{
		//RoomPos.X = i * RoomSizeInUnits.X;
		RoomPos.X = i * 100;
		for(double j = -halfDepth; j <= halfDepth; j++)
		{
			//RoomPos.Y = j * RoomSizeInUnits.Y;
			RoomPos.Y = j * 100;
			for (double k = -halfHeight; k <= halfHeight; k++)
			{
				//RoomPos.Z = k * RoomSizeInUnits.Z;
				RoomPos.Z = k * 100;
				
				VecNum = FVector(i, j, k);
				NodeData.Emplace();
				NodeData[NodeData.Num() - 1].NodePos = FIntVector(VecNum);
				BuildRoom(VecNum);
				
				//auto Bing = NewObject<UMazeBox>(this,GetNae(VecNum), RF_NoFlags, Maza.GetDefaultObject());
				//Bing->RegisterComponent();
				//Bing->SetRelativeLocation(RoomPos);
				//Bing->SetNode(VecNum);
				//Boxes.Add(Bing);
			}
		}
	}

	ExpandRooms();
}

void AMaze::BuildMaze_Implementation()
{
	NumPos = NodeData[rand() % NodeData.Num()].NodePos;

	bHasStarted = false;
	bRunning = false;
	bStartedHunt = false;
	bCantHunt = false;

	while (bRunning == false)
	{
		if(bStartedHunt == false)
		{
			Walk(NumPos);
			NumPos = UsdPos;
		}
		else
		{
			Hunt();
			NumPos = UsdPos;
			if(bCantHunt)
			{
				Walk(NumPos);
				NumPos = UsdPos;
			}
		}

		if(bHasStarted == false)
			bHasStarted = true;

		if(bStartedHunt && bCantHunt)
			bRunning = true;
	}

	for (auto Element : NodeData)
	{
		
	}
}

void AMaze::Walk_Implementation(FIntVector nuPos)
{
	bStartedHunt = false;

	UsdPos = nuPos;
	
	if(bBud == false)
	{
		if(bHasStarted == true)
		{
			ClearToFrom(UsdPos, Stack);
		}
	}
	else
		bBud = false;

	Visit[PointIndex(nuPos)] = true;

	SetAdj(UsdPos);

	if(Adjacent.Num() != 0)
	{
		Stack = UsdPos;
		UsdPos = Adjacent[rand() % Adjacent.Num()];
	}
	else
	{
		bStartedHunt = true;
	}
}

void AMaze::Hunt_Implementation()
{
	for(int i = 0; i < NodeData.Num(); i++)
	{
		GetHunt(NodeData[i].NodePos);
		if(abs(NodeData[i].NodePos.X) <= halfDepth && abs(NodeData[i].NodePos.Y) && abs(NodeData[i].NodePos.Z) && Visit[i] == false && abs(HuntPosit.X) <= halfDepth)
		{
			ClearToFrom(NodeData[i].NodePos, HuntPosit);
			bStartedHunt = false;
			bBud = true;
			UsdPos = NodeData[i].NodePos;
			return;
		}
	}

	bCantHunt = true;
}

int AMaze::PointIndex(FIntVector pos)
{
	return pos.Z + halfHeight + ((pos.Y + halfDepth) * height()) + ((pos.X + halfWidth) * height() * depth());
}

void AMaze::ClearToFrom_Implementation(FIntVector to, FIntVector from)
{
	if(to.X < from.X)
	{
		NodeData[PointIndex(to)].bEast = false;
		EastWalls[PointIndex(to)].SetVisibility(false);
		EastWalls[PointIndex(to)].SetCollisionEnabled(ECollisionEnabled::NoCollision);
		NodeData[PointIndex(from)].bWest = false;
		WestWalls[PointIndex(from)].SetVisibility(false);
		WestWalls[PointIndex(from)].SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
	if(to.X > from.X)
	{
		NodeData[PointIndex(to)].bWest = false;
		WestWalls[PointIndex(to)].SetVisibility(false);
		WestWalls[PointIndex(to)].SetCollisionEnabled(ECollisionEnabled::NoCollision);
		NodeData[PointIndex(from)].bEast = false;
		EastWalls[PointIndex(from)].SetVisibility(false);
		EastWalls[PointIndex(from)].SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
	if(to.Y < from.Y)
	{
		NodeData[PointIndex(to)].bNorth = false;
		NorthWalls[PointIndex(to)].SetVisibility(false);
		NorthWalls[PointIndex(to)].SetCollisionEnabled(ECollisionEnabled::NoCollision);
		NodeData[PointIndex(from)].bSouth = false;
		SouthWalls[PointIndex(from)].SetVisibility(false);
		SouthWalls[PointIndex(from)].SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
	if(to.Y > from.Y)
	{
		NodeData[PointIndex(to)].bSouth = false;
		SouthWalls[PointIndex(to)].SetVisibility(false);
		SouthWalls[PointIndex(to)].SetCollisionEnabled(ECollisionEnabled::NoCollision);
		NodeData[PointIndex(from)].bNorth = false;
		NorthWalls[PointIndex(from)].SetVisibility(false);
		NorthWalls[PointIndex(from)].SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
	if(to.Z < from.Z)
	{
		NodeData[PointIndex(to)].bUp = false;
		UpWalls[PointIndex(to)].SetVisibility(false);
		UpWalls[PointIndex(to)].SetCollisionEnabled(ECollisionEnabled::NoCollision);
		NodeData[PointIndex(from)].bDown = false;
		DownWalls[PointIndex(from)].SetVisibility(false);
		DownWalls[PointIndex(from)].SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
	if(to.Z > from.Z)
	{
		NodeData[PointIndex(to)].bDown = false;
		DownWalls[PointIndex(to)].SetVisibility(false);
		DownWalls[PointIndex(to)].SetCollisionEnabled(ECollisionEnabled::NoCollision);
		NodeData[PointIndex(from)].bUp = false;
		UpWalls[PointIndex(from)].SetVisibility(false);
		UpWalls[PointIndex(from)].SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
}

void AMaze::SetAdj_Implementation(FIntVector pont)
{
	if(Adjacent.Num() != 0)
		Adjacent.Reset();

	Calc = NodeData[PointIndex(pont)].EastPoint();
	if(abs(Calc.X) <= halfWidth && Visit[PointIndex(Calc)] == false)
	{
		Adjacent.Add(Calc);
	}

	Calc = NodeData[PointIndex(pont)].WestPoint();
	if(abs(Calc.X) <= halfWidth && Visit[PointIndex(Calc)] == false)
	{
		Adjacent.Add(Calc);
	}

	Calc = NodeData[PointIndex(pont)].NorthPoint();
	if(abs(Calc.Y) <= halfDepth && Visit[PointIndex(Calc)] == false)
	{
		Adjacent.Add(Calc);
	}

	Calc = NodeData[PointIndex(pont)].SouthPoint();
	if(abs(Calc.Y) <= halfDepth && Visit[PointIndex(Calc)] == false)
	{
		Adjacent.Add(Calc);
	}

	Calc = NodeData[PointIndex(pont)].UpPoint();
	if(abs(Calc.Z) <= halfHeight && Visit[PointIndex(Calc)] == false)
	{
		Adjacent.Add(Calc);
	}

	Calc = NodeData[PointIndex(pont)].DownPoint();
	if(abs(Calc.Z) <= halfHeight && Visit[PointIndex(Calc)] == false)
	{
		Adjacent.Add(Calc);
	}
}

void AMaze::GetHunt_Implementation(FIntVector pont)
{
	SetAdj(pont);

	if(Adjacent.Num() != 0)
	{
		HuntPosit = Adjacent[rand() % Adjacent.Num()];
	}
	else
	{
		HuntPosit = FIntVector(halfWidth + 1, halfDepth + 1, halfHeight + 1);
	}
}

void AMaze::MakeClean_Implementation(AMazeCube* Cube)
{
	if(Cube->GetNorth() == false && Cube->GetSouth() && Cube->GetEast() && Cube->GetWest() && Cube->GetUp() && Cube->GetDown() && abs(Cube->SouthPoint().Y) <= halfDepth)
	{
		ClearToFrom(Cube->GetNode(), Cube->SouthPoint());
	}

	if(Cube->GetNorth() && Cube->GetSouth() == false && Cube->GetEast() && Cube->GetWest() && Cube->GetUp() && Cube->GetDown() && abs(Cube->NorthPoint().Y) <= halfDepth)
	{
		ClearToFrom(Cube->GetNode(), Cube->NorthPoint());
	}

	if(Cube->GetNorth() && Cube->GetSouth() && Cube->GetEast() == false && Cube->GetWest() && Cube->GetUp() && Cube->GetDown() && abs(Cube->WestPoint().X) <= halfWidth)
	{
		ClearToFrom(Cube->GetNode(), Cube->WestPoint());
	}

	if(Cube->GetNorth() && Cube->GetSouth() && Cube->GetEast() && Cube->GetWest() == false && Cube->GetUp() && Cube->GetDown() && abs(Cube->EastPoint().X) <= halfWidth)
	{
		ClearToFrom(Cube->GetNode(), Cube->EastPoint());
	}

	if(Cube->GetNorth() && Cube->GetSouth() && Cube->GetEast() && Cube->GetWest() && Cube->GetUp() == false && Cube->GetDown() && abs(Cube->DownPoint().Z) <= halfHeight)
	{
		ClearToFrom(Cube->GetNode(), Cube->DownPoint());
	}

	if(Cube->GetNorth() && Cube->GetSouth() && Cube->GetEast() && Cube->GetWest() && Cube->GetUp() && Cube->GetDown() == false && abs(Cube->UpPoint().Z) <= halfHeight)
	{
		ClearToFrom(Cube->GetNode(), Cube->UpPoint());
	}
}

FName AMaze::GetNae(FIntVector conve)
{
	return "Cube:" + conve.X + ':' + conve.Y + ':' + conve.Z;
}

void AMaze::BuildRoom_Implementation(FVector vec)
{
	//vec.X * RoomSizeInUnits.X) / flatPart
	//Trils.SetScale3D(FVector(flatPart, flatPart, thinPart));
	Trils.SetLocation(FVector(vec.X * 100, vec.Y * 100, flatPart * ((vec.Z * 100) + 50) / thinPart));
	UpWalls->AddInstance(Trils); 
	//UpWalls[0].SetRelativeScale3D(FVector(flatPart, flatPart, thinPart));
	//Trils.SetScale3D(FVector(flatPart, flatPart, thinPart));
	Trils.SetLocation(FVector(vec.X * 100, vec.Y * 100, flatPart * ((vec.Z * 100) - 50) / thinPart));
	DownWalls->AddInstance(Trils);
	//Trils.SetScale3D(FVector(flatPart, flatPart, thinPart));
	Trils.SetLocation(FVector((vec.X * RoomSizeInUnits.X), (vec.Y * RoomSizeInUnits.Y) + DistS, (vec.Z * RoomSizeInUnits.Z)));
	NorthWalls->AddInstance(Trils);
	//Trils.SetScale3D(FVector(flatPart, flatPart, thinPart));
	Trils.SetLocation(FVector((vec.X * RoomSizeInUnits.X), (vec.Y * RoomSizeInUnits.Y) - DistS, (vec.Z * RoomSizeInUnits.Z)));
	SouthWalls->AddInstance(Trils);
	//Trils.SetScale3D(FVector(flatPart, flatPart, thinPart));
	Trils.SetLocation(FVector((vec.X * RoomSizeInUnits.X) + DistS, (vec.Y * RoomSizeInUnits.Y), (vec.Z * RoomSizeInUnits.Z)));
	EastWalls->AddInstance(Trils);
	//Trils.SetScale3D(FVector(flatPart, flatPart, thinPart));
	Trils.SetLocation(FVector((vec.X * RoomSizeInUnits.X) - DistS, (vec.Y * RoomSizeInUnits.Y), (vec.Z * RoomSizeInUnits.Z)));
	EastWalls->AddInstance(Trils);
}

void AMaze::ExpandRooms_Implementation()
{
	//UpWalls.I
	for (auto Element : UpWalls->InstanceBodies)
	{
		
		//Trils.SetScale3D(FVector(flatPart, flatPart, thinPart));
		//Trils.SetLocation(FVector(Element.Transform.GetColumn(3).X, Element.Transform.GetColumn(3).Y, Element.Transform.GetColumn(3).Z));
		//Element.Transform = Trils.ToMatrixNoScale();
	}
}











