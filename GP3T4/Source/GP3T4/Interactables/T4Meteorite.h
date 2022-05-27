#pragma once

#include "CoreMinimal.h"
#include "T4Interactable.h"
#include "T4Meteorite.generated.h"

class AT4MeteoriteSpawner;
class AGP3T4Character;
class UCameraComponent;
class UProjectileMovementComponent;
class USphereComponent;


UENUM(BlueprintType)
enum class EMeteoriteState : uint8
{
	FlockingState = 0 UMETA(DisplayName = "FlockingState"),
	PickedUpState = 1 UMETA(DisplayName = "PickedUpState"),
	ShootingState = 2 UMETA(DisplayName = "ShootingState"),
};

UCLASS()
class GP3T4_API AT4Meteorite : public AT4Interactable
{
	GENERATED_BODY()
public:	
	// Sets default values for this actor's properties
	AT4Meteorite();

	virtual void InteractWithObject() override;

	void Shoot();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintImplementableEvent, meta=(DisplayName = "OnDestroy"))
	void ReciveOnDestroy();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void DoFlockingMovement(float DeltaTime);
	
	UFUNCTION()
	FVector CalculateAlignment(TArray<AActor*> OverlappingActors);
	
	UFUNCTION()
	FVector CalculateCohesion(TArray<AActor*> OverlappingActors);
	
	UFUNCTION()
	FVector CalculateSeparation(TArray<AActor*> OverlappingActors);
	
	UFUNCTION()
	FVector CalculateToStayInRadius();

	UFUNCTION()
	void OnHit(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void ResetAgent();
	
	/**/
	//State
	UPROPERTY(BlueprintReadOnly)
	float LifeSpanShooting;

	UPROPERTY(EditAnywhere, Category = "Shooting")
	float TotalLifeSpanShooting = 3.f;
	
	UPROPERTY(BlueprintReadOnly)
	EMeteoriteState CurrentState = EMeteoriteState::FlockingState;
	
	UPROPERTY(EditDefaultsOnly, Category ="Flocking")
	USphereComponent* Collision;

	UPROPERTY(EditDefaultsOnly, Category ="Shooting")
	USphereComponent* MeshCollision;
	
	//Shoot
	UPROPERTY()
	FVector ShootDirection;
	//Interaction
	
	UPROPERTY()
	UCameraComponent* CameraComp;

	UPROPERTY()
	AGP3T4Character* PlayerCharacter;

	UPROPERTY(EditAnywhere, Category = "Meteorite Weapon")
	float DistanceFromPlayerForward = 100.f;
	
	UPROPERTY(EditAnywhere, Category = "Meteorite Weapon")
	float DistanceFromPlayerUp = 25.f;

	UPROPERTY(EditAnywhere, Category = "Meteorite Weapon")
	float StartSpeed = 3000.f;

	UPROPERTY(EditAnywhere, Category = "Meteorite Weapon")
	float Acceleration = 3000.f;
	
	//Agent
	UPROPERTY(EditDefaultsOnly, Category ="Flocking")
	float DistanceToNeighbour = 100.f;
	
	UPROPERTY(EditDefaultsOnly, Category = "Flocking")
	float DistanceToObstacles = 200.f;

	UPROPERTY(EditDefaultsOnly, Category ="Flocking")
	float Speed = 200.f;
	
	UPROPERTY(EditDefaultsOnly, Category ="Flocking")
	float MaxSpeed = 500.f;

	//Lerping
	UPROPERTY(EditDefaultsOnly, Category ="Flocking")
	float RotationLerp = 0.7f;

	UPROPERTY(EditDefaultsOnly, Category ="Flocking")
	float MoveLerp = 0.1f;
	
	UPROPERTY(EditDefaultsOnly, Category ="Flocking")
	float CohesionLerp = 0.5f;

	//Stay within radius
	UPROPERTY(VisibleAnywhere,Category ="Flocking")
	AT4MeteoriteSpawner* OriginPosition;

	UPROPERTY(EditDefaultsOnly, Category = "Flocking")
	float MaxDistToOrigin = 800.f;

private:
	float ShootSpeed;
};
