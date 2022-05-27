#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "T4MeteoriteSpawner.generated.h"

class AT4Meteorite;
UCLASS()
class GP3T4_API AT4MeteoriteSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AT4MeteoriteSpawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditDefaultsOnly, Category = "Flocking")
	TSubclassOf<AT4Meteorite> ClassToSpawn;

	UPROPERTY(EditDefaultsOnly, Category = "Flocking")
	int NumberOfAgents = 10;

	UPROPERTY(EditDefaultsOnly, Category = "Flocking")
	float SpawnRangeMin = 200.f;

	UPROPERTY(EditDefaultsOnly, Category = "Flocking")
	float SpawnRangeMax = 500.f;

	UPROPERTY(EditDefaultsOnly, Category = "Flocking")
	TArray<AT4Meteorite*> Agents;
};