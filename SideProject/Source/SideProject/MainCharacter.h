// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MainCharacter.generated.h"

UCLASS()
class SIDEPROJECT_API AMainCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMainCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void PostInitializeComponents() override;

	/** Called for forwards/backward input */
	void MoveForward(float Value);

	/** Called for side to side input */
	void MoveRight(float Value);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void SetHorizontalForAnimation(float value);
	void SetVerticalForAnimation(float value);

	float GetHorizontalForAnimation();
	float GetVerticalForAnimation();

	void Reload();

	void Aim();
	void StopAimming();

	void Fire();
	void StopFiring();
	
	void Run();
	void StopRunning();

	UFUNCTION()
	void OnReloadMonatageEnded(UAnimMontage* montage, bool bInterrupted);

	UPROPERTY(EditAnywhere, BluePrintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
	bool isFire;
	UPROPERTY(EditAnywhere, BluePrintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
	bool isOnAim;
	UPROPERTY(EditAnywhere, BluePrintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
	bool isRunning;
	UPROPERTY(EditAnywhere, BluePrintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
	bool isReloading;

private:
	UPROPERTY(VisibleAnywhere)
	class USpringArmComponent* springArm;

	UPROPERTY(VisibleAnywhere)
	class UCameraComponent* followCamera;

	UPROPERTY(VisibleAnywhere)
	float verticalValueForAnimation;

	UPROPERTY(VisibleAnywhere)
	float horizontalValueForAnimation;

	UPROPERTY(VisibleAnywhere)
	class UFireComponent* fireComponent;

	UPROPERTY(VisibleAnywhere)
	class UMyAnimInstance* myInstance;
};
