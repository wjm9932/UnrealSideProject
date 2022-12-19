// Fill out your copyright notice in the Description page of Project Settings.


#include "FireComponent.h"

// Sets default values for this component's properties
UFireComponent::UFireComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	isOnAim = false;
}

// Called when the game starts
void UFireComponent::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void UFireComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UFireComponent::SetAim(bool flag)
{
	isOnAim = flag;
}

