// Fill out your copyright notice in the Description page of Project Settings.


#include "ArenaPlayerState.h"
#include "Net/UnrealNetwork.h"

void AArenaPlayerState::AddPoints_Implementation(int32 Delta)
{
	if (!ensure(Delta >= 0.0f))
	{
		return;
	}

	Points += Delta;

	OnPointsChanged.Broadcast(this, Points, Delta);
}

bool AArenaPlayerState::RemovePoints(int32 Delta)
{
	if (!ensure(Delta >= 0.0f))
	{
		return false;
	}

	if (Points < Delta)
	{
		// Not enough credits available
		return false;
	}

	Points -= Delta;

	OnPointsChanged.Broadcast(this, Points, -Delta);

	return true;
}

void AArenaPlayerState::OnRep_Points(int32 OldPoints)
{
	OnPointsChanged.Broadcast(this, Points, Points - OldPoints);
}

int32 AArenaPlayerState::GetPoints() const
{
	return Points;
}

void AArenaPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AArenaPlayerState, Points);
}




