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
	UMyAnimInstance();

	virtual void NativeUpdateAnimation(float dt) override;

	void PlayReloadMontage();

private:
	UPROPERTY(EditAnywhere, BluePrintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
	float speed;

	UPROPERTY(EditAnywhere, BluePrintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
	float horizontal;

	UPROPERTY(EditAnywhere, BluePrintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
	float vertical;
	
	UPROPERTY(EditAnywhere, BluePrintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
	bool isOnAim;

	UPROPERTY(EditAnywhere, BluePrintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
	bool isOnFire;

	UPROPERTY(EditAnywhere, BluePrintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
	bool isReloading;

	UPROPERTY(EditAnywhere, BluePrintReadOnly, Category = Movement, Meta = (AllowPrivateAccess = true))
	float movementDir;

	UPROPERTY(EditAnywhere, BluePrintReadOnly, Category = Movement, Meta = (AllowPrivateAccess = true))
	bool isRunning;

	UPROPERTY(EditAnywhere, BluePrintReadOnly, Category = Movement, Meta = (AllowPrivateAccess = true))
	float velocity;

	UPROPERTY(EditAnywhere, BluePrintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
	UAnimMontage* reloadMontage;
};
