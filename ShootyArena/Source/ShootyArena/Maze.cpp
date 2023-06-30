// Fill out your copyright notice in the Description page of Project Settings.


#include "Maze.h"
#include "MazeCube.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Components/MeshComponent.h"
#include "Net/UnrealNetwork.h"
#include "UObject/ObjectMacros.h"
#include "HAL/Platform.h"


// Sets default values
AMaze::AMaze()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	halfWidth = 2;
	halfDepth = 2;
	halfHeight = 2;
	RoomSizeInUnits = FVector3f(800, 800, 800);

	flatPart = 8.0f;
	thinPart = 0.2f;
	DistS = 390.0f;
	CubeMesh = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'")).Object;

	bReplicates = true;
	
	Center = CreateDefaultSubobject<USceneComponent>("Center");
	Center->SetupAttachment(RootComponent);
	
	UpWalls = CreateDefaultSubobject<UInstancedStaticMeshComponent>("UpWalls");
	UpWalls->SetupAttachment(Center);
	UpWalls->SetMobility(EComponentMobility::Stationary);
	UpWalls->SetStaticMesh(CubeMesh);
	UpWalls->SetWorldScale3D(FVector(flatPart, flatPart, thinPart));
	UpWalls->SetEnableGravity(false);
	UpWalls->GetBodyInstance()->bLockXTranslation = true;
	UpWalls->GetBodyInstance()->bLockYTranslation = true;
	UpWalls->GetBodyInstance()->bLockZTranslation = true;
	UpWalls->CastShadow = false;

	DownWalls = CreateDefaultSubobject<UInstancedStaticMeshComponent>("DownWalls");
	DownWalls->SetupAttachment(Center);
	DownWalls->SetMobility(EComponentMobility::Stationary);
	DownWalls->SetStaticMesh(CubeMesh);
	DownWalls->SetWorldScale3D(FVector(flatPart, flatPart, thinPart));
	DownWalls->SetEnableGravity(false);
	DownWalls->GetBodyInstance()->bLockXTranslation = true;
	DownWalls->GetBodyInstance()->bLockYTranslation = true;
	DownWalls->GetBodyInstance()->bLockZTranslation = true;
	DownWalls->CastShadow = false;

	NorthWalls = CreateDefaultSubobject<UInstancedStaticMeshComponent>("NorthWalls");
	NorthWalls->SetupAttachment(Center);
	NorthWalls->SetMobility(EComponentMobility::Stationary);
	NorthWalls->SetStaticMesh(CubeMesh);
	NorthWalls->SetWorldScale3D(FVector(flatPart, thinPart, flatPart));
	NorthWalls->SetEnableGravity(false);
	NorthWalls->GetBodyInstance()->bLockXTranslation = true;
	NorthWalls->GetBodyInstance()->bLockYTranslation = true;
	NorthWalls->GetBodyInstance()->bLockZTranslation = true;
	NorthWalls->CastShadow = false;

	SouthWalls = CreateDefaultSubobject<UInstancedStaticMeshComponent>("SouthWalls");
	SouthWalls->SetupAttachment(Center);
	SouthWalls->SetMobility(EComponentMobility::Stationary);
	SouthWalls->SetStaticMesh(CubeMesh);
	SouthWalls->SetWorldScale3D(FVector(flatPart, thinPart, flatPart));
	SouthWalls->SetEnableGravity(false);
	SouthWalls->GetBodyInstance()->bLockXTranslation = true;
	SouthWalls->GetBodyInstance()->bLockYTranslation = true;
	SouthWalls->GetBodyInstance()->bLockZTranslation = true;
	SouthWalls->CastShadow = false;

	EastWalls = CreateDefaultSubobject<UInstancedStaticMeshComponent>("EastWalls");
	EastWalls->SetupAttachment(Center);
	EastWalls->SetMobility(EComponentMobility::Stationary);
	EastWalls->SetStaticMesh(CubeMesh);
	EastWalls->SetWorldScale3D(FVector(thinPart, flatPart, flatPart));
	EastWalls->SetEnableGravity(false);
	EastWalls->GetBodyInstance()->bLockXTranslation = true;
	EastWalls->GetBodyInstance()->bLockYTranslation = true;
	EastWalls->GetBodyInstance()->bLockZTranslation = true;
	EastWalls->CastShadow = false;

	WestWalls = CreateDefaultSubobject<UInstancedStaticMeshComponent>("WestWalls");
	WestWalls->SetupAttachment(Center);
	WestWalls->SetMobility(EComponentMobility::Stationary);
	WestWalls->SetStaticMesh(CubeMesh);
	WestWalls->SetWorldScale3D(FVector(thinPart, flatPart, flatPart));
	WestWalls->SetEnableGravity(false);
	WestWalls->GetBodyInstance()->bLockXTranslation = true;
	WestWalls->GetBodyInstance()->bLockYTranslation = true;
	WestWalls->GetBodyInstance()->bLockZTranslation = true;
	WestWalls->CastShadow = false;
}

// Called when the game starts or when spawned
void AMaze::BeginPlay()
{
	Super::BeginPlay();

	if(HasAuthority())
		Seed = rand();

	Rand = FRandomStream(Seed);
	
	Rand.Initialize(Seed);
	
	PlaceNodes();
	
	Illuminate();

	BuildMaze();
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

void AMaze::PlaceNodes()
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
			}
		}
	}

	ExpandRooms();
}

void AMaze::BuildMaze()
{
	//UE_LOG(LogTemp, Warning, TEXT("%d"), NodeData.Num())
	//UE_LOG(LogTemp, Warning, TEXT("%d"), FMath::RandRange(0, NodeData.Num()))
	//FMath::RandRange(0, NodeData.Num()).std::to_string()
	NumPos = NodeData[Rand.RandRange(0, NumPos.Size() - 1)].NodePos;

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

void AMaze::Walk(FIntVector NuPos)
{
	//UE_LOG(LogTemp, Warning, TEXT("Yes"))
	
	bStartedHunt = false;

	UsdPos = NuPos;
	
	if(bBud == false)
	{
		UE_LOG(LogTemp, Warning, TEXT("Yes"))
		if(bHasStarted == true)
		{
			//UE_LOG(LogTemp, Warning, TEXT("%s"), *UsdPos.ToString())
			//UE_LOG(LogTemp, Warning, TEXT("%s"), *Stack.ToString())
			ToPos = UsdPos;
			ClearToFrom(UsdPos, Stack, UsdPos.Y);
		}
	}
	else
		bBud = false;
	
	NodeData[PointIndex(NuPos)].bVisited = true;

	SetAdj(UsdPos);

	if(Adjacent.Num() != 0)
	{
		Stack = UsdPos;
		UsdPos = Adjacent[Rand.RandRange(0, Adjacent.Num() - 1)];
	}
	else
	{
		bStartedHunt = true;
	}
}

void AMaze::Hunt()
{
	for(int i = 0; i < NodeData.Num(); i++)
	{
		GetHunt(NodeData[i].NodePos);
		if(abs(NodeData[i].NodePos.X) <= halfWidth && abs(NodeData[i].NodePos.Y) <= halfDepth && abs(NodeData[i].NodePos.Z) <= halfHeight && NodeData[i].bVisited == false && abs(HuntPosit.X) <= halfWidth && abs(HuntPosit.Y) <= halfDepth && abs(HuntPosit.Z) <= halfHeight)
		{
			UE_LOG(LogTemp, Warning, TEXT("Ninlil"))
			ClearToFrom(NodeData[i].NodePos, HuntPosit, NodeData[i].NodePos.Z);
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

void AMaze::ClearToFrom(FIntVector To, FIntVector From, int TestX)
{
	UE_LOG(LogTemp, Warning, TEXT("%s"), *To.ToString())
	UE_LOG(LogTemp, Warning, TEXT("%d"), To.X)
	UE_LOG(LogTemp, Warning, TEXT("%d"), To.Y)
	UE_LOG(LogTemp, Warning, TEXT("%d"), To.Z)
	UE_LOG(LogTemp, Warning, TEXT("%s"), *From.ToString())
	UE_LOG(LogTemp, Warning, TEXT("%d"), From.X)
	UE_LOG(LogTemp, Warning, TEXT("%d"), From.Y)
	UE_LOG(LogTemp, Warning, TEXT("%d"), From.Z)

	FIntVector Tst = ToPos;
	if(To.X < From.X)
	{
		NodeData[PointIndex(To)].bEast = false;
		EastWalls[PointIndex(To)].SetVisibility(false);
		EastWalls[PointIndex(To)].SetCollisionEnabled(ECollisionEnabled::NoCollision);
		NodeData[PointIndex(From)].bWest = false;
		WestWalls[PointIndex(From)].SetVisibility(false);
		WestWalls[PointIndex(From)].SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
	if(To.X > From.X)
	{
		NodeData[PointIndex(To)].bWest = false;
		WestWalls[PointIndex(To)].SetVisibility(false);
		WestWalls[PointIndex(To)].SetCollisionEnabled(ECollisionEnabled::NoCollision);
		NodeData[PointIndex(From)].bEast = false;
		EastWalls[PointIndex(From)].SetVisibility(false);
		EastWalls[PointIndex(From)].SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
	if(To.Y < From.Y)
	{
		NodeData[PointIndex(To)].bNorth = false;
		NorthWalls[PointIndex(To)].SetVisibility(false);
		NorthWalls[PointIndex(To)].SetCollisionEnabled(ECollisionEnabled::NoCollision);
		NodeData[PointIndex(From)].bSouth = false;
		SouthWalls[PointIndex(From)].SetVisibility(false);
		SouthWalls[PointIndex(From)].SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
	if(To.Y > From.Y)
	{
		NodeData[PointIndex(To)].bSouth = false;
		SouthWalls[PointIndex(To)].SetVisibility(false);
		SouthWalls[PointIndex(To)].SetCollisionEnabled(ECollisionEnabled::NoCollision);
		NodeData[PointIndex(From)].bNorth = false;
		NorthWalls[PointIndex(From)].SetVisibility(false);
		NorthWalls[PointIndex(From)].SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
	if(To.Z < From.Z)
	{
		NodeData[PointIndex(To)].bUp = false;
		UpWalls[PointIndex(To)].SetVisibility(false);
		UpWalls[PointIndex(To)].SetCollisionEnabled(ECollisionEnabled::NoCollision);
		NodeData[PointIndex(From)].bDown = false;
		DownWalls[PointIndex(From)].SetVisibility(false);
		DownWalls[PointIndex(From)].SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
	if(To.Z > From.Z)
	{
		NodeData[PointIndex(To)].bDown = false;
		DownWalls[PointIndex(To)].SetVisibility(false);
		DownWalls[PointIndex(To)].SetCollisionEnabled(ECollisionEnabled::NoCollision);
		NodeData[PointIndex(From)].bUp = false;
		UpWalls[PointIndex(From)].SetVisibility(false);
		UpWalls[PointIndex(From)].SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
}

void AMaze::SetAdj(FIntVector pont)
{
	if(Adjacent.Num() != 0)
		Adjacent.Reset();

	Calc = NodeData[PointIndex(pont)].EastPoint();
	if(abs(Calc.X) <= halfWidth && NodeData[PointIndex(Calc)].bVisited == false)
	{
		Adjacent.Add(Calc);
	}

	Calc = NodeData[PointIndex(pont)].WestPoint();
	if(abs(Calc.X) <= halfWidth && NodeData[PointIndex(Calc)].bVisited == false)
	{
		Adjacent.Add(Calc);
	}

	Calc = NodeData[PointIndex(pont)].NorthPoint();
	if(abs(Calc.Y) <= halfDepth && NodeData[PointIndex(Calc)].bVisited == false)
	{
		Adjacent.Add(Calc);
	}

	Calc = NodeData[PointIndex(pont)].SouthPoint();
	if(abs(Calc.Y) <= halfDepth && NodeData[PointIndex(Calc)].bVisited == false)
	{
		Adjacent.Add(Calc);
	}

	Calc = NodeData[PointIndex(pont)].UpPoint();
	if(abs(Calc.Z) <= halfHeight && NodeData[PointIndex(Calc)].bVisited == false)
	{
		Adjacent.Add(Calc);
	}

	Calc = NodeData[PointIndex(pont)].DownPoint();
	if(abs(Calc.Z) <= halfHeight && NodeData[PointIndex(Calc)].bVisited == false)
	{
		Adjacent.Add(Calc);
	}
}

void AMaze::GetHunt(FIntVector pont)
{
	SetAdj(pont);

	if(Adjacent.Num() != 0)
	{
		HuntPosit = Adjacent[Rand.RandRange(0, Adjacent.Num() - 1)];
	}
	else
	{
		HuntPosit = FIntVector(halfWidth + 1, halfDepth + 1, halfHeight + 1);
	}
}

void AMaze::MakeClean(FNoden Cube)
{
	if(Cube.bNorth == false && Cube.bSouth && Cube.bEast && Cube.bWest && Cube.bUp && Cube.bDown && abs(Cube.SouthPoint().Y) <= halfDepth)
	{
		ClearToFrom(Cube.NodePos, Cube.SouthPoint(), Cube.NodePos.Z);
	}

	if(Cube.bNorth && Cube.bSouth == false && Cube.bEast && Cube.bWest && Cube.bUp && Cube.bDown && abs(Cube.NorthPoint().Y) <= halfDepth)
	{
		ClearToFrom(Cube.NodePos, Cube.NorthPoint(), Cube.NodePos.Z);
	}

	if(Cube.bNorth && Cube.bSouth && Cube.bEast == false && Cube.bEast && Cube.bUp && Cube.bDown && abs(Cube.WestPoint().X) <= halfWidth)
	{
		ClearToFrom(Cube.NodePos, Cube.WestPoint(), Cube.NodePos.Z);
	}

	if(Cube.bNorth && Cube.bSouth && Cube.bEast && Cube.bWest == false && Cube.bUp && Cube.bDown && abs(Cube.EastPoint().X) <= halfWidth)
	{
		ClearToFrom(Cube.NodePos, Cube.EastPoint(), Cube.NodePos.Z);
	}

	if(Cube.bNorth && Cube.bSouth && Cube.bEast && Cube.bWest && Cube.bUp == false && Cube.bDown && abs(Cube.DownPoint().Z) <= halfHeight)
	{
		ClearToFrom(Cube.NodePos, Cube.DownPoint(), Cube.NodePos.Z);
	}

	if(Cube.bNorth && Cube.bSouth && Cube.bEast && Cube.bWest && Cube.bUp && Cube.bUp == false && abs(Cube.UpPoint().Z) <= halfHeight)
	{
		ClearToFrom(Cube.NodePos, Cube.UpPoint(), Cube.NodePos.Z);
	}
}

FName AMaze::GetNae(FIntVector conve)
{
	return "Cube:" + conve.X + ':' + conve.Y + ':' + conve.Z;
}

void AMaze::BuildRoom(FVector vec)
{
	Trils.SetLocation(FVector(vec.X * 100, vec.Y * 100, flatPart * ((vec.Z * 100) + 50) / thinPart));
	UpWalls->AddInstance(Trils); 
	Trils.SetLocation(FVector(vec.X * 100, vec.Y * 100, flatPart * ((vec.Z * 100) - 50) / thinPart));
	DownWalls->AddInstance(Trils);
	Trils.SetLocation(FVector(vec.X * 100, flatPart * ((vec.Y * 100) + 50) / thinPart, vec.Z * 100));
	NorthWalls->AddInstance(Trils);
	Trils.SetLocation(FVector(vec.X * 100, flatPart * ((vec.Y * 100) - 50) / thinPart, vec.Z * 100));
	SouthWalls->AddInstance(Trils);
	Trils.SetLocation(FVector(flatPart * ((vec.X * 100) + 50) / thinPart, vec.Y * 100, vec.Z * 100));
	EastWalls->AddInstance(Trils);
	Trils.SetLocation(FVector(flatPart * ((vec.X * 100) - 50) / thinPart, vec.Y * 100, vec.Z * 100));
	WestWalls->AddInstance(Trils);
}

void AMaze::ExpandRooms()
{
	//UpWalls.I
	for (auto Element : UpWalls->InstanceBodies)
	{
		
		//Trils.SetScale3D(FVector(flatPart, flatPart, thinPart));
		//Trils.SetLocation(FVector(Element.Transform.GetColumn(3).X, Element.Transform.GetColumn(3).Y, Element.Transform.GetColumn(3).Z));
		//Element.Transform = Trils.ToMatrixNoScale();
	}
}

void AMaze::Illuminate()
{
	FActorSpawnParameters ActorSpawnParams;
	FRotator SpawnBa;
	
	for (double i = -halfWidth; i <= halfWidth; i++)
	{
		RoomPos.X = i * RoomSizeInUnits.X;
		//RoomPos.X = i * 100;
		for(double j = -halfDepth; j <= halfDepth; j++)
		{
			RoomPos.Y = j * RoomSizeInUnits.Y;
			//RoomPos.Y = j * 100;
			for (double k = -halfHeight; k <= halfHeight; k++)
			{
				RoomPos.Z = k * RoomSizeInUnits.Z;
				//RoomPos.Z = k * 100;
				
				VecNum = FVector(i, j, k);

				Lights.Add(Light);
				GetWorld()->SpawnActor<APointLight>(Lights[Lights.Num() - 1], GetActorLocation() + RoomPos, SpawnBa, ActorSpawnParams);
				//NodeData.Emplace();
				//NodeData[NodeData.Num() - 1].NodePos = FIntVector(VecNum);
				//BuildRoom(VecNum);
			}
		}
	}
}

void AMaze::OnRep_Seed()
{
	SeedRepl.Broadcast(this);
}

void AMaze::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	
	DOREPLIFETIME(AMaze, Seed);
}












