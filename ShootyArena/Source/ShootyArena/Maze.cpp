// Fill out your copyright notice in the Description page of Project Settings.


#include "Maze.h"

#include "MazeCube.h"

// Sets default values
AMaze::AMaze()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	halfWidth = 4;
	halfDepth = 4;
	halfHeight = 4;
	RoomSizeInUnits = FVector3f(800, 800, 800);
	//SpawnParams.Instigator = this;
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
	if(ensureAlways(RoomMake))
	{
		for (int i = -halfWidth; i <= halfWidth; i++)
		{
			RoomPos.X = i * RoomSizeInUnits.X;
			for(int j = -halfDepth; j <= halfDepth; j++)
			{
				RoomPos.Y = j * RoomSizeInUnits.Y;
				for (int k = -halfHeight; k <= halfHeight; k++)
				{
					RoomPos.Z = k * RoomSizeInUnits.Z;
					SpawnTM = FTransform(BaseRot, RoomPos);
					GetWorld()->SpawnActor<AActor>(RoomMake, RoomPos, BaseRot, SpawnParams);
					//Adjacent.Add(GetWorld()->SpawnActor<UObject>(RoomMake, SpawnTM, SpawnParams));
					Visit.Add(false);
				}
			}
		}
	}
}

void AMaze::BuildMaze_Implementation()
{
	NumPos = NodeItems[rand() % NodeItems.Num()]->GetNode();

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

	for (auto Element : NodeItems)
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
	for(int i = 0; i < NodeItems.Num(); i++)
	{
		GetHunt(NodeItems[i]->GetNode());
		if(abs(NodeItems[i]->GetNode().X) <= halfDepth && abs(NodeItems[i]->GetNode().Y) && abs(NodeItems[i]->GetNode().Z) && Visit[i] == false && abs(HuntPosit.X) <= halfDepth)
		{
			ClearToFrom(NodeItems[i]->GetNode(), HuntPosit);
			bStartedHunt = false;
			bBud = true;
			UsdPos = NodeItems[i]->GetNode();
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
		NodeItems[PointIndex(to)]->SetEast(false);
		NodeItems[PointIndex(from)]->SetWest(false);
	}
	if(to.X > from.X)
	{
		NodeItems[PointIndex(to)]->SetWest(false);
		NodeItems[PointIndex(from)]->SetEast(false);
	}
	if(to.Y < from.Y)
	{
		NodeItems[PointIndex(to)]->SetNorth(false);
		NodeItems[PointIndex(from)]->SetSouth(false);
	}
	if(to.Y > from.Y)
	{
		NodeItems[PointIndex(to)]->SetSouth(false);
		NodeItems[PointIndex(from)]->SetNorth(false);
	}
	if(to.Z < from.Z)
	{
		NodeItems[PointIndex(to)]->SetUp(false);
		NodeItems[PointIndex(from)]->SetDown(false);
	}
	if(to.Z > from.Z)
	{
		NodeItems[PointIndex(to)]->SetDown(false);
		NodeItems[PointIndex(from)]->SetUp(false);
	}
}

void AMaze::SetAdj_Implementation(FIntVector pont)
{
	if(Adjacent.Num() != 0)
		Adjacent.Reset();

	Calc = NodeItems[PointIndex(pont)]->EastPoint();
	if(abs(Calc.X) <= halfWidth && Visit[PointIndex(Calc)] == false)
	{
		Adjacent.Add(Calc);
	}

	Calc = NodeItems[PointIndex(pont)]->WestPoint();
	if(abs(Calc.X) <= halfWidth && Visit[PointIndex(Calc)] == false)
	{
		Adjacent.Add(Calc);
	}

	Calc = NodeItems[PointIndex(pont)]->NorthPoint();
	if(abs(Calc.Y) <= halfDepth && Visit[PointIndex(Calc)] == false)
	{
		Adjacent.Add(Calc);
	}

	Calc = NodeItems[PointIndex(pont)]->SouthPoint();
	if(abs(Calc.Y) <= halfDepth && Visit[PointIndex(Calc)] == false)
	{
		Adjacent.Add(Calc);
	}

	Calc = NodeItems[PointIndex(pont)]->UpPoint();
	if(abs(Calc.Z) <= halfHeight && Visit[PointIndex(Calc)] == false)
	{
		Adjacent.Add(Calc);
	}

	Calc = NodeItems[PointIndex(pont)]->DownPoint();
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








