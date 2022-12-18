// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "MyAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class SIDEPROJECT_API UMyAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
public:
	virtual void NativeUpdateAnimation(float dt) override;

private:
	UPROPERTY(EditAnywhere, BluePrintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
	float speed;

	UPROPERTY(EditAnywhere, BluePrintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
	float horizontal;

	UPROPERTY(EditAnywhere, BluePrintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
	float vertical;
};
