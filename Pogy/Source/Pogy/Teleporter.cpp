// Fill out your copyright notice in the Description page of Project Settings.


#include "Teleporter.h"

#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Sound/SoundCue.h"






ATeleporter::ATeleporter()
{
	TeleportDelay = 0.2f;
	DetonateDelay = 0.2f;

	Projectan->InitialSpeed = speed;
}


void ATeleporter::BeginPlay()
{
	Super::BeginPlay();

	GetWorldTimerManager().SetTimer(TimerHandle_DelayedDetonate, this, &ATeleporter::Explode, DetonateDelay);
}


void ATeleporter::Explode_Implementation()
{
	// Clear timer if the Explode was already called through another source like OnActorHit
	GetWorldTimerManager().ClearTimer(TimerHandle_DelayedDetonate);

	UGameplayStatics::SpawnEmitterAtLocation(this, ImpactVFX, GetActorLocation(), GetActorRotation());

	//UGameplayStatics::PlaySoundAtLocation(this, ImpactSound, GetActorLocation());

	//EffectComp->DeactivateSystem();

	Projectan->StopMovementImmediately();
	SetActorEnableCollision(false);

	FTimerHandle TimerHandle_DelayedTeleport;
	GetWorldTimerManager().SetTimer(TimerHandle_DelayedTeleport, this, &ATeleporter::TeleportInstigator, TeleportDelay);

	// Skip base implementation as it will destroy actor (we need to stay alive a bit longer to finish the 2nd timer)
	//Super::Explode_Implementation();
}


void ATeleporter::TeleportInstigator()
{
	AActor* ActorToTeleport = GetInstigator();
	if (ensure(ActorToTeleport))
	{
		// Keep instigator rotation or it may end up jarring
		ActorToTeleport->TeleportTo(GetActorLocation(), ActorToTeleport->GetActorRotation(), false, false);

		// Play shake on the player we teleported
		APawn* InstigatorPawn = Cast<APawn>(ActorToTeleport);
		APlayerController* PC = Cast<APlayerController>(InstigatorPawn->GetController());
		if (PC && PC->IsLocalController())
		{
			//PC->ClientStartCameraShake(ImpactShake);
		}

	}

	// Now we're ready to destroy self
	Destroy();
}