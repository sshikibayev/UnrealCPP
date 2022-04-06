// Shooter, All Rights Reserved


#include "Weapon/ShooterRifleWeapon.h"
#include "DrawDebugHelpers.h"
#include "ShooterWeaponComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/PlayerController.h"

void AShooterRifleWeapon::StartFire()
{
    GetWorldTimerManager().SetTimer(ShotTimerHandle, this, &AShooterRifleWeapon::DoShot, FireRate, true);
    DoShot();
}

void AShooterRifleWeapon::StopFire()
{
    GetWorldTimerManager().ClearTimer(ShotTimerHandle);
}

void AShooterRifleWeapon::DoShot()
{
    if (!IsAmmoEmpty())
    {
        SetPlayerViewPoint();
        SetTraceData();
        SetHit();

        DrawDebugLine(GetWorld(), GetMuzzleWorldLocation(), TraceData.TraceEnd, FColor::Red, false, 3.0f, 0, 3.0f);
        DecreaseAmmo();
    }
}

void AShooterRifleWeapon::DoDamage(const FHitResult& HitResult)
{
    AActor* HitTarget = HitResult.GetActor();
    if (HitTarget)
    {
        HitTarget->TakeDamage(DamageAmount, FDamageEvent(), GetPlayerController(), this);
    }
}

void AShooterRifleWeapon::SetTraceData()
{
    TraceData.TraceStart = TraceData.ViewLocation;
    const FVector ShootDirection = FMath::VRandCone(TraceData.ViewRotation.Vector(), FMath::DegreesToRadians(BulletSpread));
    TraceData.TraceEnd = TraceData.TraceStart + ShootDirection * TraceMaxDistance;
}

void AShooterRifleWeapon::SetHit()
{
    FHitResult HitResult;
    DrawTraceHit(HitResult);
    if (HitResult.bBlockingHit)
    {
        DoDamage(HitResult);
        DrawDebugSphere(GetWorld(), HitResult.ImpactPoint, 10.0f, 24, FColor::Red, false, 5.0f);
    }
}
