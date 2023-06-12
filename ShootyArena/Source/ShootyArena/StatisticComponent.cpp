// Fill out your copyright notice in the Description page of Project Settings.


#include "StatisticComponent.h"

// Sets default values for this component's properties
UStatisticComponent::UStatisticComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UStatisticComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

void UStatisticComponent::AddPoints(int Doints)
{
	
}


