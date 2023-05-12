// Fill out your copyright notice in the Description page of Project Settings.


#include "ThisCharacter.h"

#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "CollisionQueryParams.h"
#include "Physics/ImmediatePhysics/ImmediatePhysicsShared/ImmediatePhysicsCore.h"

// Sets default values
AThisCharacter::AThisCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Spring = CreateDefaultSubobject<USpringArmComponent>("Spring");
	Spring->SetupAttachment(RootComponent);
	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");
	Camera->SetupAttachment(Spring);
	Camera->bUsePawnControlRotation = true;
}

// Called when the game starts or when spawned
void AThisCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AThisCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AThisCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("MoveForward", this, &AThisCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AThisCharacter::MoveRight);
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAction("PrimaryAttack", IE_Pressed, this, &AThisCharacter::PrimaryAttack);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AThisCharacter::Jump);
	PlayerInputComponent->BindAction("BlackHole", IE_Pressed, this, &AThisCharacter::SecondaryAttack);
	PlayerInputComponent->BindAction("Teleport", IE_Pressed, this, &AThisCharacter::Teleporting);
}

void AThisCharacter::MoveForward(float Value)
{
	FRotator ControlRot = GetControlRotation();
	ControlRot.Pitch = 0;
	ControlRot.Roll = 0;

	AddMovementInput(ControlRot.Vector(), Value);
}

void AThisCharacter::MoveRight(float Value)
{
	FRotator ControlRot = GetControlRotation();
	ControlRot.Pitch = 0;
	ControlRot.Roll = 0;

	AddMovementInput(FRotationMatrix(ControlRot).GetScaledAxis(EAxis::Y), Value);
}

void AThisCharacter::PrimaryAttack()
{
	UE_LOG(LogTemp, Warning, TEXT("Your message"));
	SpawnProjectile(Projectile);
}

void AThisCharacter::SecondaryAttack()
{
	SpawnProjectile(Hole);
}

void AThisCharacter::Teleporting()
{
	SpawnProjectile(Teleport);
}

void AThisCharacter::SpawnProjectile(TSubclassOf<AActor> ClassToSpawn)
{
	if(ensureAlways(ClassToSpawn))
	{
		FVector Muzzle = GetActorLocation();

		FActorSpawnParameters SpawnParams;
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		SpawnParams.Instigator = this;

		FCollisionShape Shape;
		Shape.SetSphere(20);

		FCollisionQueryParams Params;
		Params.AddIgnoredActor(this);
		
		FCollisionObjectQueryParams ObjParams;
		ObjParams.AddObjectTypesToQuery(ECC_WorldDynamic);
		ObjParams.AddObjectTypesToQuery(ECC_WorldStatic);
		ObjParams.AddObjectTypesToQuery(ECC_Pawn);

		FVector TraceStart = Camera->GetComponentLocation();

		FVector TraceEnd = Camera->GetComponentLocation() + (GetControlRotation().Vector() * 5000);

		FHitResult Hit;

		if(GetWorld()->SweepSingleByObjectType(Hit, TraceStart, TraceEnd, FQuat::Identity, ObjParams, Shape, Params))
		{
			TraceEnd = Hit.ImpactPoint;
		}

		FRotator ProjRotation = FRotationMatrix::MakeFromX(TraceEnd - Muzzle).Rotator();

		FTransform SpawnTM = FTransform(ProjRotation, Muzzle);
		GetWorld()->SpawnActor<AActor>(ClassToSpawn, SpawnTM, SpawnParams);
	}
}






