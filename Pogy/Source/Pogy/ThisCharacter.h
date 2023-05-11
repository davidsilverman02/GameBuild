// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ThisCharacter.generated.h"

class UCameraComponent;
class USpringArmComponent;

UCLASS()
class POGY_API AThisCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AThisCharacter();

protected:
	// Called when the game starts or when spawned
	UPROPERTY(EditAnywhere)
	float fJumpForce;
	UPROPERTY(EditAnywhere)
	FVector shotPos;
	UPROPERTY(EditAnywhere);
	TSubclassOf<AActor> Projectile;
	UPROPERTY(VisibleAnywhere)
	USpringArmComponent* Spring;
	UPROPERTY(VisibleAnywhere)
	UCameraComponent* Camera;
	
	virtual void BeginPlay() override;

	void MoveForward(float Value);

	void MoveRight(float Value);

	void PrimaryAttack();
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
