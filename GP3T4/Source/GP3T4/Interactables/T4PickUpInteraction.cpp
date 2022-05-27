#include "T4PickUpInteraction.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"

void AT4PickUpInteraction::InteractWithObject()
{
	//No base implementation
	
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(
			-1,
			5,
			FColor::Emerald,
			FString::Printf(TEXT("This can be picked up!!")));
	}

	if (bIsCarrying)
	{
		DropObject();
		bIsCarrying = false;
	}
	else
	{
		//Picks up the object and attach it to player
		AActor* Player = UGameplayStatics::GetPlayerCharacter(GetWorld(),0);
		SetActorLocation( Player->GetActorLocation() + FVector(DistanceFromPlayerForward, 0,DistanceFromPlayerUp ));
		FAttachmentTransformRules AttachmentRules(EAttachmentRule::KeepWorld, true);
		AttachToActor(Player, AttachmentRules, NAME_None);

		bIsCarrying = true;
	}
	
}

//If we should add a drop function? 
void AT4PickUpInteraction::DropObject()
{
	DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);

	//throw here?
}
