// Fill out your copyright notice in the Description page of Project Settings.


#include "MagicProjectile.h"

#include "MagicProjectile.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Particles/ParticleSystemComponent.h"

// Sets default values
AMagicProjectile::AMagicProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Sphere = CreateDefaultSubobject<USphereComponent>("Sphere");
	RootComponent = Sphere;

	Parts = CreateDefaultSubobject<UParticleSystemComponent>("Parts");
	Parts->SetupAttachment(Sphere);

	Projectan = CreateDefaultSubobject<UProjectileMovementComponent>("Proj");
	Projectan->InitialSpeed = speed;
	Projectan->bRotationFollowsVelocity = true;
	Projectan->bInitialVelocityInLocalSpace = true;
}

// Called when the game starts or when spawned
void AMagicProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMagicProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

