// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAnimInstance.h"
#include "MainCharacter.h"
#include "FireComponent.h"
UMyAnimInstance::UMyAnimInstance()
{

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

		isOnAim = character->temp;
		isOnFire = character->isFire;
		//UFireComponent* temp = character->GetComponentByClass(UFireComponent::StaticClass());
	}
}