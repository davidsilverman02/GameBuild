// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShootyArenaGameMode.h"

#include <string>

#include "ArenaPlayerState.h"
#include "ShootyArenaCharacter.h"
#include "UObject/ConstructorHelpers.h"

AShootyArenaGameMode::AShootyArenaGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	PlayerStateClass = AArenaPlayerState::StaticClass();
	MatchTime = 60;
}

FString AShootyArenaGameMode::TimeInMinutes()
{
	FString FinVal = std::to_string(CurrentTime / 60).c_str();
	FinVal.Append(":");
	FinVal.Append(std::to_string(CurrentTime % 60).c_str());
	return FinVal;
}

void AShootyArenaGameMode::StartGame()
{
	GetWorldTimerManager().SetTimer(MatchStart, this, &AShootyArenaGameMode::TimeDown, 1.0, true);
	CurrentTime = MatchTime;
	InGame = true;
}

void AShootyArenaGameMode::TimeDown()
{
	CurrentTime--;
	TimeChanged.Broadcast(TimeInMinutes());
	if(CurrentTime <= 0)
	{
		GetWorldTimerManager().ClearTimer(MatchStart);
		CurrentTime = 0;
		GameEnded.Broadcast(false);
		TimeEnd();
	}
}

void AShootyArenaGameMode::TimeEnd()
{
	InGame = false;
}

void AShootyArenaGameMode::BeginPlay()
{
	Super::BeginPlay();
	
	StartGame();
}



