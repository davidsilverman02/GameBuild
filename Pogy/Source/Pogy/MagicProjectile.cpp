// Fill out your copyright notice in the Description page of Project Settings.


#include "MagicProjectile.h"

#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Kismet/GameplayStatics.h"

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
	Projectan->ProjectileGravityScale = 0;
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



void AMagicProjectile::Explode_Implementation()
{
	// Check to make sure we aren't already being 'destroyed'
	// Adding ensure to see if we encounter this situation at all
	if (ensure(IsValid(this)))
	{
		UGameplayStatics::SpawnEmitterAtLocation(this, ImpactVFX, GetActorLocation(), GetActorRotation());

		//UGameplayStatics::PlaySoundAtLocation(this, ImpactSound, GetActorLocation());

		//UGameplayStatics::PlayWorldCameraShake(this, ImpactShake, GetActorLocation(), ImpactShakeInnerRadius, ImpactShakeOuterRadius);

		Destroy();
	}
}

void AMagicProjectile::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	//SphereComp->IgnoreActorWhenMoving(GetInstigator(), true);
	
	// More consistent to bind here compared to Constructor which may fail to bind if Blueprint was created before adding this binding (or when using hotreload)
	// PostInitializeComponent is the preferred way of binding any events.
	Sphere->OnComponentHit.AddDynamic(this, &AMagicProjectile::OnActorHit);
}

void AMagicProjectile::OnActorHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	Explode();
}
