// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ActionBase.h"
#include "ProjectileActionBase.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTYARENA_API UProjectileActionBase : public UActionBase
{
	GENERATED_BODY()

protected:
	/* Sphere radius of the sweep to find desired target under crosshair. Adjusts final projectile direction */
	UPROPERTY(EditAnywhere, Category="Targeting")
	float SweepRadius;

	/* Fallback distance when sweep finds no collision under crosshair. Adjusts final projectile direction */
	UPROPERTY(EditAnywhere, Category="Targeting")
	float SweepDistanceFallback;

	UPROPERTY(EditAnywhere, Category = "Attack")
	TSubclassOf<AActor> ProjectileClass;

	UPROPERTY(EditAnywhere, Category = "Effects")
	FName HandSocketName;

	UPROPERTY(EditDefaultsOnly, Category = "Attack")
	float AttackAnimDelay;

	UPROPERTY(EditAnywhere, Category = "Attack")
	TObjectPtr<UAnimMontage> AttackAnim;

	/* Particle System played during attack animation */
	UPROPERTY(EditAnywhere, Category = "Attack")
	TObjectPtr<UParticleSystem> CastingEffect;

	/* Sound Effect to play (Can be Wave or Cue) */
	UPROPERTY(EditAnywhere, Category = "Attack")
	TObjectPtr<USoundBase> CastingSound;

	UFUNCTION()
	void AttackDelay_Elapsed(ACharacter* InstigatorCharacter);

public:
	virtual void StartAction_Implementation(AActor* Instigator) override;

	UFUNCTION(BlueprintCallable)
	FRotator GetRot();

	UFUNCTION(BlueprintCallable)
	FVector Muzzle();

	UProjectileActionBase();
};
