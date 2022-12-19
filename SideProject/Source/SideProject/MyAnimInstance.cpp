// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAnimInstance.h"
#include "MainCharacter.h"

UMyAnimInstance::UMyAnimInstance()
{
	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM(TEXT("AnimMontage'/Game/Animation/Base_Skeleton_Montage.Base_Skeleton_Montage'"));
	if (AM.Succeeded() == true)
	{
		aimMontage = AM.Object;
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
	}
}

void UMyAnimInstance::PlayAimMontage()
{
	Montage_Play(aimMontage, 1.f);
}

void UMyAnimInstance::StopPlayingAimMontage()
{
	Montage_Stop(0.2f, aimMontage);
}
