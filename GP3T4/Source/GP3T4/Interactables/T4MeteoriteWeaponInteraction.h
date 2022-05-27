// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "T4Interactable.h"
#include "Camera/CameraComponent.h"
#include "T4MeteoriteWeaponInteraction.generated.h"

class AGP3T4Character;
class AGP3T4Projectile;

UCLASS()
class GP3T4_API AT4MeteoriteWeaponInteraction : public AT4Interactable
{
	GENERATED_BODY()
	
	virtual void InteractWithObject() override;
public:
	void Shoot();

public:
	UPROPERTY(EditAnywhere, Category = "Meteorite Weapon")
	float DistanceFromPlayerForward = 100.f;
	
	UPROPERTY(EditAnywhere, Category = "Meteorite Weapon")
	float DistanceFromPlayerUp = 25.f;

	UPROPERTY(EditDefaultsOnly, Category = "Meteorite Weapon")
	TSubclassOf<AGP3T4Projectile> ProjectileClass;

	UPROPERTY()
	UCameraComponent* CameraComp;

	UPROPERTY()
	AGP3T4Character* PlayerCharacter;
};
