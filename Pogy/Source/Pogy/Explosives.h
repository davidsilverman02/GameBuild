// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Explosives.generated.h"

class URadialForceComponent;

UCLASS()
class POGY_API AExplosives : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AExplosives();

protected:
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Mesh;
	UPROPERTY(VisibleAnywhere)
	URadialForceComponent* Force;

	virtual void PostInitializeComponents() override;

	UFUNCTION()
	void OnActorHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	
	
	// Called when the game starts or when spawned
	//virtual void BeginPlay() override;

public:	
	// Called every frame
	//virtual void Tick(float DeltaTime) override;

};
