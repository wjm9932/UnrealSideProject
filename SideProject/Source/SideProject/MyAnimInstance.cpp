// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAnimInstance.h"
#include "MainCharacter.h"
#include "FireComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
UMyAnimInstance::UMyAnimInstance()
{
	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM(TEXT("AnimMontage'/Game/Animation_2/SK_Mannequin_Montage.SK_Mannequin_Montage'"));

	if (AM.Succeeded() == true)
	{
		reloadMontage = AM.Object;
	}
}

void UMyAnimInstance::NativeUpdateAnimation(float dt)
{
	Super::NativeUpdateAnimation(dt);

	auto pawn = TryGetPawnOwner();
	if (IsValid(pawn) == true)
	{
		speed = pawn->GetVelocity().Size();
	}

	AMainCharacter* character = Cast<AMainCharacter>(pawn);
	if (character != nullptr)
	{
		vertical = character->GetVerticalForAnimation();
		horizontal = character->GetHorizontalForAnimation();

		velocity = character->GetCharacterMovement()->Velocity.Size();
		movementDir = CalculateDirection(character->GetVelocity(), character->GetActorRotation());

		isRunning = character->isRunning;
		isReloading = character->isReloading;
		isOnAim = character->isOnAim;
		isOnFire = character->isFire;
		
		//isOnAim = character->GetComponentByClass(UFireComponent::StaticClass());
	}
}

void UMyAnimInstance::PlayReloadMontage()
{
	Montage_Play(reloadMontage);
}
