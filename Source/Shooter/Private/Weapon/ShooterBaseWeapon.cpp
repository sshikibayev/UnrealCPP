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
    
    CurrentAmmo = DefaultAmmo;
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


void AShooterBaseWeapon::DecreaseAmmo()
{
    CurrentAmmo.BulletsAmountInClip--;
    LogAmmo();

    if(IsClipEmpty() && !IsAmmoEmpty())
    {
        ChangeClip();
    }
}

bool AShooterBaseWeapon::IsAmmoEmpty() const
{
    return !CurrentAmmo.Infinite && CurrentAmmo.Clips == 0 && IsClipEmpty();
}

bool AShooterBaseWeapon::IsClipEmpty() const
{
    return CurrentAmmo.BulletsAmountInClip == 0;
}

void AShooterBaseWeapon::ChangeClip()
{
    CurrentAmmo.BulletsAmountInClip = DefaultAmmo.BulletsAmountInClip;
    if(!CurrentAmmo.Infinite)
    {
        CurrentAmmo.Clips--;
    }
    GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Orange, "Reloaded");
}

void AShooterBaseWeapon::LogAmmo() const
{
    FString AmmoInfo = "Ammo: " + FString::FromInt(CurrentAmmo.BulletsAmountInClip) + " / ";
    AmmoInfo += CurrentAmmo.Infinite ? "Infinite" : FString::FromInt(CurrentAmmo.Clips);
    GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Orange, AmmoInfo);
}
