#include "T4MeteoriteWeaponInteraction.h"

#include "Camera/CameraComponent.h"
#include "GameFramework/Character.h"
#include "GP3T4/GP3T4Character.h"
#include "GP3T4/GP3T4Projectile.h"
#include "Kismet/GameplayStatics.h"

void AT4MeteoriteWeaponInteraction::InteractWithObject()
{
	//No base implementation

	//Picks up the weapon and attach it to player
	PlayerCharacter = Cast<AGP3T4Character>(UGameplayStatics::GetPlayerCharacter(GetWorld(),0));
	if (PlayerCharacter == nullptr) { return;}
	CameraComp = PlayerCharacter->GetFirstPersonCameraComponent();

	SetActorLocation( CameraComp->GetComponentLocation() + (CameraComp->GetForwardVector() * DistanceFromPlayerForward) -CameraComp->GetUpVector() * DistanceFromPlayerUp);
	SetActorRotation(FRotator::ZeroRotator);
	const FAttachmentTransformRules AttachmentRules(EAttachmentRule::KeepWorld, true);
	AttachToComponent(CameraComp,AttachmentRules, NAME_None);
	
	PlayerCharacter->bHasWeapon = true;
}

void AT4MeteoriteWeaponInteraction::Shoot()
{
	if (ProjectileClass == nullptr) { return;}
	GetWorld()->SpawnActor<AGP3T4Projectile>(ProjectileClass, GetActorLocation() + (CameraComp->GetForwardVector() * 100.f), CameraComp->GetComponentRotation());
}



