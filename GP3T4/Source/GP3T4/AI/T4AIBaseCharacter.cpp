// Fill out your copyright notice in the Description page of Project Settings.


#include "T4AIBaseCharacter.h"

#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
AT4AIBaseCharacter::AT4AIBaseCharacter()
{
}

// Called when the game starts or when spawned
void AT4AIBaseCharacter::BeginPlay()
{
	Super::BeginPlay();

	if(NewMovementSpeed > 0)
	{
		GetCharacterMovement()->MaxWalkSpeed = NewMovementSpeed;
	}
}

// Called to bind functionality to input
void AT4AIBaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

