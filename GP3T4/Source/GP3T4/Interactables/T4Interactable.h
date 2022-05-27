#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GP3T4/Interfaces/IsInteractable.h"
#include "T4Interactable.generated.h"

UCLASS(Abstract)
class GP3T4_API AT4Interactable : public AActor, public IIsInteractable
{
	GENERATED_BODY()

public:	
	AT4Interactable();	

protected:
	virtual void BeginPlay() override;
	UFUNCTION()
	void SetOutline(UPrimitiveComponent* PrimitiveComponent, AActor* Actor, UPrimitiveComponent* PrimitiveComponent1, int I, bool bArg, const FHitResult& HitResult);
	UFUNCTION()
	void RemoveOutline(UPrimitiveComponent* PrimitiveComponent, AActor* Actor, UPrimitiveComponent* PrimitiveComponent1, int I);

public:
	virtual void Tick(float DeltaTime) override;
	virtual void InteractWithObject() override;

	UFUNCTION(BlueprintImplementableEvent, meta=(DisplayName = "InteractWithObject"))
	void ReceiveInteractWithObject();

	void EnableOutline(bool bShouldGetOutlined);

protected:
	//UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	//class USphereComponent* OutlineArea;
	UPROPERTY(EditAnywhere)
	bool bShouldGetOutlined = true;
};
