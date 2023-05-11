// Fill out your copyright notice in the Description page of Project Settings.


#include "Explosives.h"

#include "PhysicsEngine/RadialForceComponent.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AExplosives::AExplosives()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("MeshComp");
	Mesh->SetSimulatePhysics(true);
	Mesh->SetCollisionProfileName(UCollisionProfile::PhysicsActor_ProfileName); 
	RootComponent = Mesh;

	Force = CreateDefaultSubobject<URadialForceComponent>("ForceComp");
	Force->SetupAttachment(Mesh);
	Force->SetAutoActivate(false);
	Force->Radius = 750.0f;
	Force->ImpulseStrength = 2500.0f;
	Force->bImpulseVelChange = true;

	Force->AddCollisionChannelToAffect(ECC_WorldDynamic);
}

void AExplosives::PostInitializeComponents()
{
	// Don't forget to call parent function
	Super::PostInitializeComponents();

	Mesh->OnComponentHit.AddDynamic(this, &AExplosives::OnActorHit);
}

void AExplosives::OnActorHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
 	Force->FireImpulse();
}
