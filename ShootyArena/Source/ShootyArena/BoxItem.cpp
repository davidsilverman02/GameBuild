// Fill out your copyright notice in the Description page of Project Settings.


#include "BoxItem.h"

UBoxItem::UBoxItem()
{
	
}

void UBoxItem::SetNode_Implementation(FIntVector vec)
{
	
}

FIntVector UBoxItem::GetNode()
{
	return NodePos;
}

bool UBoxItem::GetUp()
{
	return bUp;
}

void UBoxItem::SetUp_Implementation(bool newB)
{
	bUp = newB;
}

FIntVector UBoxItem::UpPoint()
{
	return FIntVector(NodePos.X, NodePos.Y, NodePos.Z + 1);
}

bool UBoxItem::GetDown()
{
	return bDown;
}

void UBoxItem::SetDown_Implementation(bool newB)
{
	bDown = newB;
}

FIntVector UBoxItem::DownPoint()
{
	return FIntVector(NodePos.X, NodePos.Y, NodePos.Z - 1);
}

bool UBoxItem::GetNorth()
{
	return bNorth;
}

void UBoxItem::SetNorth_Implementation(bool newB)
{
	bNorth = newB;
}

FIntVector UBoxItem::NorthPoint()
{
	return FIntVector(NodePos.X, NodePos.Y + 1, NodePos.Z);
}

bool UBoxItem::GetSouth()
{
	return bSouth;
}

void UBoxItem::SetSouth_Implementation(bool newB)
{
	bSouth = newB;
}

FIntVector UBoxItem::SouthPoint()
{
	return FIntVector(NodePos.X, NodePos.Y - 1, NodePos.Z);
}

bool UBoxItem::GetEast()
{
	return bEast;
}

void UBoxItem::SetEast_Implementation(bool newB)
{
	bEast = newB;
}

FIntVector UBoxItem::EastPoint()
{
	return FIntVector(NodePos.X + 1, NodePos.Y, NodePos.Z);
}

bool UBoxItem::GetWest()
{
	return bWest;
}

void UBoxItem::SetWest_Implementation(bool newB)
{
	bWest = newB;
}

FIntVector UBoxItem::WestPoint()
{
	return FIntVector(NodePos.X - 1, NodePos.Y, NodePos.Z);
}

bool UBoxItem::GetClog()
{
	if((bNorth == false || bSouth == false) ^ (bEast == false || bWest == false) ^ (bUp == false || bDown == false))
		return true;
	else
		return false;
}