// Shooter, All Rights Reserved

#include "Weapon/ShooterBaseWeapon.h"
#include "DrawDebugHelpers.h"
#include "ShooterPlayerController.h"
#include "GameFramework/Character.h"


AShooterBaseWeapon::AShooterBaseWeapon()
{
    PrimaryActorTick.bCanEverTick = false;

    WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>("WeaponMesh");
    SetRootComponent(WeaponMesh);
}

void AShooterBaseWeapon::BeginPlay()
{
    Super::BeginPlay();
    check(WeaponMesh);
}

void AShooterBaseWeapon::SetPlayerViewPoint()
{
    if (GetPlayerController())
    {
        GetPlayerController()->GetPlayerViewPoint(TraceData.ViewLocation, TraceData.ViewRotation);
    }
}

void AShooterBaseWeapon::SetTraceData()
{
    TraceData.TraceStart = TraceData.ViewLocation;
    const FVector ShootDirection = TraceData.ViewRotation.Vector();
    TraceData.TraceEnd = TraceData.TraceStart + ShootDirection * TraceMaxDistance;
}

APlayerController* AShooterBaseWeapon::GetPlayerController() const
{
    return Cast<ACharacter>(GetOwner())->GetController<APlayerController>();
}

void AShooterBaseWeapon::DrawTraceHit(FHitResult& HitResult) const
{
    check(GetWorld())
    FCollisionQueryParams CollisionParams;
    CollisionParams.AddIgnoredActor(GetOwner());
    GetWorld()->LineTraceSingleByChannel(HitResult, TraceData.TraceStart, TraceData.TraceEnd, ECollisionChannel::ECC_Visibility);
}

FVector AShooterBaseWeapon::GetMuzzleWorldLocation() const
{
    return WeaponMesh->GetSocketLocation(MuzzleSocketName);
}

void AShooterBaseWeapon::StartFire()
{
    check(GetWorld())
}

void AShooterBaseWeapon::StopFire()
{
    check(GetWorld())
}

void AShooterBaseWeapon::DoShot()
{
    SetPlayerViewPoint();
    SetTraceData();
}
