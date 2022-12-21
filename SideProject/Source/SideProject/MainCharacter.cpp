// Fill out your copyright notice in the Description page of Project Settings.


#include "MainCharacter.h"
#include "FireComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
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

	horizontalValueForAnimation = 0.f;
	verticalValueForAnimation = 0.f;

	isOnAim = false;
	isFire = false;
	isRunning = false;
	isReloading = false;
}

// Called when the game starts or when spawned
void AMainCharacter::BeginPlay()
{
	Super::BeginPlay();
	GetCharacterMovement()->MaxWalkSpeed = 200.f;

	myInstance = Cast<UMyAnimInstance>(GetMesh()->GetAnimInstance());
	if (myInstance != nullptr)
	{
		myInstance->OnMontageEnded.AddDynamic(this, &AMainCharacter::OnReloadMonatageEnded);
	}
}

void AMainCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();


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

	PlayerInputComponent->BindAction("Run", IE_Pressed, this, &AMainCharacter::Run);
	PlayerInputComponent->BindAction("Run", IE_Released, this, &AMainCharacter::StopRunning);

	PlayerInputComponent->BindAction("Aim", IE_Pressed, this, &AMainCharacter::Aim);
	PlayerInputComponent->BindAction("Aim", IE_Released, this, &AMainCharacter::StopAimming);

	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AMainCharacter::Fire);
	PlayerInputComponent->BindAction("Fire", IE_Released, this, &AMainCharacter::StopFiring);

<<<<<<< Updated upstream
=======
	PlayerInputComponent->BindAction("Reload", IE_Pressed, this, &AMainCharacter::Reload);

>>>>>>> Stashed changes
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

void AMainCharacter::Reload()
{
	if (isReloading == false)
	{
		isReloading = true;
		myInstance->PlayReloadMontage();
	}
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

void AMainCharacter::Aim()
{
<<<<<<< Updated upstream
	fireComponent->SetAim(true);
	temp = true;
=======
	if (isReloading == false)
	{
		fireComponent->SetAim(true);
		isOnAim = true;
	}
	else
	{
		isOnAim = false;
	}
>>>>>>> Stashed changes
}

void AMainCharacter::Fire()
{
<<<<<<< Updated upstream
	isFire = true;
=======
	if (isReloading == false)
	{
		isFire = true;
	}
	else
	{
		isFire = false;
	}
>>>>>>> Stashed changes
}

void AMainCharacter::StopAimming()
{
	fireComponent->SetAim(false);
<<<<<<< Updated upstream
	temp = false;
=======
	isOnAim = false;
>>>>>>> Stashed changes
}

void AMainCharacter::StopFiring()
{
	isFire = false;
<<<<<<< Updated upstream
=======
}

void AMainCharacter::Run()
{
	if (GetWorld()->GetFirstPlayerController()->IsInputKeyDown(EKeys::W) || GetWorld()->GetFirstPlayerController()->IsInputKeyDown(EKeys::S))
	{
		GetCharacterMovement()->MaxWalkSpeed = 600.f;
		isRunning = true;
	}
	else
	{
		isRunning = false;
	}
>>>>>>> Stashed changes
}

void AMainCharacter::StopRunning()
{
	GetCharacterMovement()->MaxWalkSpeed = 200.f;
	isRunning = false;
}

void AMainCharacter::OnReloadMonatageEnded(UAnimMontage* montage, bool bInterrupted)
{
	isReloading = false;
}

