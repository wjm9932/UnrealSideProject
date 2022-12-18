// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAnimInstance.h"
#include "MainCharacter.h"

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
	}
}
