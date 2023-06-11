// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectileActionBase.h"

#include "ActionComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundBase.h"
#include "GameFramework/Character.h"
#include "ShootyArenaProjectile.h"

UProjectileActionBase::UProjectileActionBase()
{
	HandSocketName = "Muzzle_01";
	AttackAnimDelay = 0.2f;

	SweepRadius = 20.0f;
	SweepDistanceFallback = 5000;
}

void UProjectileActionBase::StartAction_Implementation(AActor* Instigator)
{
	Super::StartAction_Implementation(Instigator);

	ACharacter* Character = Cast<ACharacter>(Instigator);
	if (Character)
	{
		//Character->PlayAnimMontage(AttackAnim);

		//UGameplayStatics::SpawnEmitterAttached(CastingEffect, Character->GetMesh(), HandSocketName, FVector::ZeroVector, FRotator::ZeroRotator, EAttachLocation::SnapToTarget);

		//UGameplayStatics::SpawnSoundAttached(CastingSound, Character->GetMesh());

		if (Character->HasAuthority())
		{
			FTimerHandle TimerHandle_AttackDelay;
			FTimerDelegate Delegate;
			Delegate.BindUFunction(this, "AttackDelay_Elapsed", Character);

			GetWorld()->GetTimerManager().SetTimer(TimerHandle_AttackDelay, Delegate, AttackAnimDelay, false);
		}
	}

	if (CastingSound != nullptr)
	{
		UGameplayStatics::PlaySoundAtLocation(this, CastingSound, Character->GetActorLocation());
	}
}

void UProjectileActionBase::AttackDelay_Elapsed(ACharacter* InstigatorCharacter)
{
	if (ProjectileClass != nullptr)
	{
		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			APlayerController* PlayerController = Cast<APlayerController>(InstigatorCharacter->GetController());
			const FRotator SpawnRotation = PlayerController->PlayerCameraManager->GetCameraRotation();
			// MuzzleOffset is in camera space, so transform it to world space before offsetting from the character location to find the final muzzle position
			const FVector SpawnLocation = InstigatorCharacter->GetMesh()->GetSocketLocation(HandSocketName);
	
			//Set Spawn Collision Handling Override
			FActorSpawnParameters ActorSpawnParams;
			ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;
			
			if(GetOwningComponent()->IgnoredItem != nullptr)
				ActorSpawnParams.Instigator = GetOwningComponent()->IgnoredItem();
	
			// Spawn the projectile at the muzzle
			World->SpawnActor<AShootyArenaProjectile>(ProjectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);
		}
	}
}


