// Shooter, All Rights Reserved


#include "Weapon/ShooterRifleWeapon.h"
#include "DrawDebugHelpers.h"
#include "GameFramework/Character.h"
#include "GameFramework/PlayerController.h"

void AShooterRifleWeapon::StartFire()
{
    Super::StartFire();
    DoShot();
    GetWorldTimerManager().SetTimer(ShotTimerHandle, this, &AShooterRifleWeapon::DoShot, FireRate, true);
}

void AShooterRifleWeapon::StopFire()
{
    Super::StopFire();
    GetWorldTimerManager().ClearTimer(ShotTimerHandle);
}

void AShooterRifleWeapon::DoShot()
{
    Super::DoShot();
    
    FHitResult HitResult;
    DrawTraceHit(HitResult);
    if (HitResult.bBlockingHit)
    {
        DoDamage(HitResult);
        DrawDebugLine(GetWorld(), GetMuzzleWorldLocation(), HitResult.ImpactPoint, FColor::Red, false, 3.0f, 0, 3.0f);
        DrawDebugSphere(GetWorld(), HitResult.ImpactPoint, 10.0f, 24, FColor::Red, false, 5.0f);
    }
    DrawDebugLine(GetWorld(), GetMuzzleWorldLocation(), TraceData.TraceEnd, FColor::Red, false, 3.0f, 0, 3.0f);
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
