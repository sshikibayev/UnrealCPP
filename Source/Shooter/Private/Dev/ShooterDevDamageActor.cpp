// Shooter, All Rights Reserved

#include "Dev/ShooterDevDamageActor.h"
#include "DrawDebugHelpers.h"

AShooterDevDamageActor::AShooterDevDamageActor()
{
    PrimaryActorTick.bCanEverTick = true;

    SceneComponent = CreateDefaultSubobject<USceneComponent>("SceneComponent");
    SetRootComponent(SceneComponent);
}

void AShooterDevDamageActor::BeginPlay()
{
    Super::BeginPlay();
}

void AShooterDevDamageActor::Tick(const float DeltaTime)
{
    Super::Tick(DeltaTime);

    DrawDebugSphere(GetWorld(), GetActorLocation(), Radius, 24, SphereColor);

    UGameplayStatics::ApplyRadialDamage(GetWorld(), Damage, GetActorLocation(), Radius, DamageType, {}, this, nullptr, DoFullDamage);
}
