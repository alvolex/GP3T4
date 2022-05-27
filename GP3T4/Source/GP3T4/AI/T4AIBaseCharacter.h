// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTree.h"
#include "GameFramework/Character.h"
#include "T4AIBaseCharacter.generated.h"

class ATargetPoint;
UCLASS()
class GP3T4_API AT4AIBaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AT4AIBaseCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	UPROPERTY(EditAnywhere, Category = "AI Settings")
	float NewMovementSpeed;

public:
	
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, Category = "AI BT Behavior")
	UBehaviorTree* PawnBehaviorTree;
	
	UPROPERTY(EditInstanceOnly, Category = "AI BT Behavior")
	TArray<ATargetPoint*> FollowPoints;

	/*UPROPERTY(EditInstanceOnly, Category = "AI Perception Behavior") //Disabled until I can figure out a way to change these settings on runtime
	float SetSightDistance;

	UPROPERTY(EditInstanceOnly, Category = "AI Perception Behavior", meta=(UIMin = 0.0, ClampMin = 0.0, UIMax = 180.0, ClampMax = 180.0))
	float SetSightVisionAngle;*/

};
