#include "T4Interactable.h"

#include "Components/SphereComponent.h"
#include "GP3T4/Interfaces/IsPlayerCharacter.h"

AT4Interactable::AT4Interactable()
{
	PrimaryActorTick.bCanEverTick = true;

	//OutlineArea = CreateDefaultSubobject<USphereComponent>(TEXT("OutlineArea"));
	
}

void AT4Interactable::BeginPlay()
{
	Super::BeginPlay();

	//OutlineArea->OnComponentBeginOverlap.AddDynamic(this, &AT4Interactable::SetOutline);
	//OutlineArea->OnComponentEndOverlap.AddDynamic(this, &AT4Interactable::RemoveOutline);
}

void AT4Interactable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AT4Interactable::InteractWithObject()
{
	//super should not be called for this method in child classes
	ReceiveInteractWithObject();
}

/*
 * Outline Stuff
 */
void AT4Interactable::SetOutline(UPrimitiveComponent* PrimitiveComponent, AActor* OtherActor, UPrimitiveComponent* PrimitiveComponent1,
	int I, bool bArg, const FHitResult& HitResult)
{
	if (bShouldGetOutlined && OtherActor->Implements<UIsPlayerCharacter>())
	{
		EnableOutline(true);
	}	
}

void AT4Interactable::RemoveOutline(UPrimitiveComponent* PrimitiveComponent, AActor* OtherActor,
	UPrimitiveComponent* PrimitiveComponent1, int I)
{
	if (bShouldGetOutlined && OtherActor->Implements<UIsPlayerCharacter>())
	{
		EnableOutline(false);
	}	
}

void AT4Interactable::EnableOutline(bool bShowOutline)
{	
	TArray<UStaticMeshComponent*> Components;
	GetComponents<UStaticMeshComponent>(Components);
	for (auto Component : Components)
	{
		Component->SetCustomDepthStencilValue(252);
		Component->MarkRenderStateDirty();
		Component->SetRenderCustomDepth(bShowOutline);
	}
}

