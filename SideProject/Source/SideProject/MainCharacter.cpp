// Fill out your copyright notice in the Description page of Project Settings.


#include "MainCharacter.h"
#include "FireComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "MyAnimInstance.h"

// Sets default values
AMainCharacter::AMainCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	springArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SPRINGARM"));
	springArm->SetupAttachment(GetRootComponent());
	springArm->bUsePawnControlRotation = true;

	followCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FOLLOWCAMERA"));
	followCamera->SetupAttachment(springArm); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	followCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	fireComponent = CreateDefaultSubobject<UFireComponent>(TEXT("FIRE"));
}

// Called when the game starts or when spawned
void AMainCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void AMainCharacter::MoveForward(float Value)
{
	AddMovementInput(GetActorForwardVector(), Value);
	verticalValueForAnimation = Value;
}

void AMainCharacter::MoveRight(float Value)
{
	AddMovementInput(GetActorRightVector(), Value);
	horizontalValueForAnimation = Value;
}

// Called every frame
void AMainCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMainCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAction("Aim", IE_Pressed, this, &AMainCharacter::Aim);
	PlayerInputComponent->BindAction("Aim", IE_Released, this, &AMainCharacter::StopAimming);

	PlayerInputComponent->BindAxis("Move Forward / Backward", this, &AMainCharacter::MoveForward);
	PlayerInputComponent->BindAxis("Move Right / Left", this, &AMainCharacter::MoveRight);

	PlayerInputComponent->BindAxis("Turn Right / Left Mouse", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("Look Up / Down Mouse", this, &APawn::AddControllerPitchInput);
}

void AMainCharacter::SetHorizontalForAnimation(float value)
{
	horizontalValueForAnimation = value;
}

void AMainCharacter::SetVerticalForAnimation(float value)
{
	verticalValueForAnimation = value;
}

float AMainCharacter::GetHorizontalForAnimation()
{
	return horizontalValueForAnimation;
}

float AMainCharacter::GetVerticalForAnimation()
{
	return verticalValueForAnimation;
}

void AMainCharacter::Aim()
{
	fireComponent->SetAim(true);
	auto myAnim = Cast<UMyAnimInstance>(GetMesh()->GetAnimInstance());
	if (myAnim != nullptr)
	{
		myAnim->PlayAimMontage();
	}
}

void AMainCharacter::StopAimming()
{
	fireComponent->SetAim(false);
	auto myAnim = Cast<UMyAnimInstance>(GetMesh()->GetAnimInstance());
	if (myAnim != nullptr)
	{
		myAnim->StopPlayingAimMontage();
	}
}

