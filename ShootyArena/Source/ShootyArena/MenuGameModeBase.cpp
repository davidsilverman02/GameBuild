// Fill out your copyright notice in the Description page of Project Settings.


#include "MenuGameModeBase.h"

#include "Blueprint/UserWidget.h"
#include "UObject/ConstructorHelpers.h"



AMenuGameModeBase::AMenuGameModeBase() : Super()
{
	DefaultPawnClass = nullptr;

	//static ConstructorHelpers::FObjectFinder<UUserWidget> PlayerPawnClassFinder(TEXT("/Game/MyContent/Widgets/LobbyScreen"));
	//Wight = PlayerPawnClassFinder.Object;
}

void AMenuGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	MyController = GetWorld()->GetFirstPlayerController();

	MyController->bShowMouseCursor = true;
	MyController->bEnableClickEvents = true;
	MyController->bEnableMouseOverEvents = true;
}

