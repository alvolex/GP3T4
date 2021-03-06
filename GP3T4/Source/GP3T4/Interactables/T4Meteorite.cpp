#include "T4Meteorite.h"
#include "Components/SphereComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "T4MeteoriteSpawner.h"
#include "Kismet/GameplayStatics.h"
#include "Camera/CameraComponent.h"
#include "GP3T4/GP3T4Character.h"
#include "GP3T4/Planet/T4Planet.h"

AT4Meteorite::AT4Meteorite()
{
	PrimaryActorTick.bCanEverTick = true;
	Collision = CreateDefaultSubobject<USphereComponent>(TEXT("Collision"));
	RootComponent = Collision;
	MeshCollision = CreateDefaultSubobject<USphereComponent>(TEXT("MeshCollision"));
	MeshCollision->SetupAttachment(Collision);
	MeshCollision->OnComponentBeginOverlap.AddDynamic(this, &AT4Meteorite::OnHit);
	
}

void AT4Meteorite::InteractWithObject()
{
	CurrentState = EMeteoriteState::PickedUpState;
	//StopFlocking();

	//Picks up the weapon and attach it to player
	PlayerCharacter = Cast<AGP3T4Character>(UGameplayStatics::GetPlayerCharacter(GetWorld(),0));
	if (PlayerCharacter == nullptr) { return;}
	CameraComp = PlayerCharacter->GetFirstPersonCameraComponent();

	//Collision->SetSphereRadius(53.f);
	SetActorLocation( CameraComp->GetComponentLocation() + (CameraComp->GetForwardVector() * DistanceFromPlayerForward) -CameraComp->GetUpVector() * DistanceFromPlayerUp);
	SetActorRotation(FRotator::ZeroRotator);
	const FAttachmentTransformRules AttachmentRules(EAttachmentRule::KeepWorld, true);
	AttachToComponent(CameraComp,AttachmentRules, NAME_None);
	
	PlayerCharacter->bHasWeapon = true;
	PlayerCharacter->MeteoriteWeapon = this;
}

void AT4Meteorite::Shoot()
{
	K2_DetachFromActor();
	SetActorLocation( CameraComp->GetComponentLocation() + (CameraComp->GetForwardVector() * DistanceFromPlayerForward) -CameraComp->GetUpVector() * DistanceFromPlayerUp);
	SetActorRotation(CameraComp->GetComponentRotation());
	PlayerCharacter->bHasWeapon = false;
	PlayerCharacter->MeteoriteWeapon = this; //nullptr??seems unsafe??
	ShootDirection = CameraComp->GetForwardVector();
	CurrentState = EMeteoriteState::ShootingState;
}

void AT4Meteorite::BeginPlay()
{
	Super::BeginPlay();
}

void AT4Meteorite::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!IsValid(OriginPosition))
	{
		Destroy();
		return;
	}
	
	switch (CurrentState)
	{
	case EMeteoriteState::FlockingState:
		DoFlockingMovement(DeltaTime);
		break;
		
	case EMeteoriteState::PickedUpState:
		break;

	case EMeteoriteState::ShootingState:
		LifeSpanShooting += DeltaTime;
		if (LifeSpanShooting >= TotalLifeSpanShooting)
		{
			ShootSpeed = StartSpeed;
			ResetAgent();
		}
		else
		{
			AddActorWorldOffset(ShootDirection * ShootSpeed * GetWorld()->DeltaTimeSeconds);
			ShootSpeed += Acceleration * DeltaTime;
		}
		break;

	default:
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1,10,FColor::Yellow,FString::Printf(TEXT("METEORITE HAS NO STATE")));
		}
		break;
	}
}

void AT4Meteorite::DoFlockingMovement(float DeltaTime)
{
	TArray<AActor*> OverlappingActors;
	GetOverlappingActors(OverlappingActors);
	
	FVector Alignment = CalculateAlignment(OverlappingActors) * Speed;
	FVector Cohesion = CalculateCohesion(OverlappingActors) * Speed;
	FVector Separation = CalculateSeparation(OverlappingActors) * Speed;
	FVector WithinRadius = CalculateToStayInRadius() * Speed;
	FVector TotalMove = Alignment + Cohesion + Separation + WithinRadius;
	
	if (TotalMove.Length() > MaxSpeed)
	{
		TotalMove.Normalize();
		TotalMove *= MaxSpeed;
	}
	
	FRotator Rotation = TotalMove.Rotation();
	SetActorRotation(FMath::RInterpTo(GetActorRotation(),Rotation, DeltaTime,RotationLerp));
	FVector MoveDelta = FMath::VInterpTo(GetActorForwardVector(), TotalMove, DeltaTime, MoveLerp);
	AddActorWorldOffset(MoveDelta);
}

FVector AT4Meteorite::CalculateAlignment(TArray<AActor*> OverlappingActors)
{
	FVector Alignment = FVector::Zero();
	if (OverlappingActors.Num() <= 0) { return GetActorForwardVector();	}
	
	for (AActor* OverlappingActor : OverlappingActors)
	{
		//Todo add condition in which the meteorite needs to be in like state must be flocking
		if (Cast<AT4Meteorite>(OverlappingActor))
		{
			Alignment += OverlappingActor->GetActorForwardVector();
		}
	}
	Alignment /= OverlappingActors.Num();
	return Alignment;
}

FVector AT4Meteorite::CalculateCohesion(TArray<AActor*> OverlappingActors)
{
	FVector Cohesion = FVector::Zero();
	if (OverlappingActors.Num() <= 0) {	return Cohesion;}
	
	for (AActor* OverlappingActor : OverlappingActors)
	{
		if (Cast<AT4Meteorite>(OverlappingActor))
		{
			Cohesion += OverlappingActor->GetActorLocation();
		}
	}
	Cohesion /= OverlappingActors.Num();
	Cohesion = Cohesion - GetActorLocation();
	Cohesion = FMath::VInterpTo(GetActorForwardVector(),Cohesion, GetWorld()->DeltaTimeSeconds,CohesionLerp);
	return Cohesion;
}

FVector AT4Meteorite::CalculateSeparation(TArray<AActor*> OverlappingActors)
{
	FVector Separation = FVector::Zero();
	if (OverlappingActors.Num() <= 0) { return Separation; }
	
	for (AActor* OverlappingActor : OverlappingActors)
	{
		FVector Distance = GetActorLocation() - OverlappingActor->GetActorLocation();
		if (Cast<AT4Meteorite>(OverlappingActor))
		{
			if (Distance.Length() < DistanceToNeighbour)
			{
				Separation += Distance;
			}
		}
		else
		{
			if (Distance.Length() < DistanceToObstacles)
			{
				Separation += Distance;
			}
		}
	}
	Separation /= OverlappingActors.Num();
	return Separation;
}

FVector AT4Meteorite::CalculateToStayInRadius()
{
	FVector DistAgentToCenter = OriginPosition->GetActorLocation() - GetActorLocation();
	float DistLength = DistAgentToCenter.Length();
	
	if (DistLength < MaxDistToOrigin) { return FVector::Zero(); }
	return DistAgentToCenter * DistLength * DistLength;
}

void AT4Meteorite::OnHit(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (CurrentState != EMeteoriteState::ShootingState) { return; }
	
	if (OtherActor->Implements<UT4CanBeHit>())
	{
		IT4CanBeHit* HitActor = Cast<IT4CanBeHit>(OtherActor);
		HitActor->GotHit(this);
	}
	ReciveOnDestroy();
	ResetAgent();
}

void AT4Meteorite::ResetAgent()
{
	//Get a new pos near spawner and random rotation
	CurrentState = EMeteoriteState::FlockingState;
	FVector NewLocation = FMath::VRand();
	NewLocation *= FMath::RandRange(OriginPosition->SpawnRangeMin,OriginPosition->SpawnRangeMax);
	NewLocation = OriginPosition->GetActorLocation() + NewLocation;
	SetActorLocation(NewLocation);
	SetActorRotation(UKismetMathLibrary::RandomRotator());
	LifeSpanShooting = 0;
	//Collision->SetSphereRadius(200.f);
}
