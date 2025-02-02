// Shooter, All Rights Reserved


#include "Weapon/ShooterLauncherWeapon.h"

void AShooterLauncherWeapon::StartFire()
{
    DoShot();
}

void AShooterLauncherWeapon::DoShot()
{
    if (!IsAmmoEmpty())
    {
        SetPlayerViewPoint();
        SetTraceData();
        FHitResult HitResult;
        DrawTraceHit(HitResult);

        const FVector EndPoint = HitResult.bBlockingHit ? HitResult.ImpactPoint : TraceData.TraceEnd;
        const FVector Direction = (EndPoint - GetMuzzleWorldTransform().GetLocation()).GetSafeNormal();
        const FTransform SpawnTransform(FRotator::ZeroRotator, GetMuzzleWorldTransform().GetLocation());
        
        AShooterLauncherProjectile* Projectile = GetWorld()->SpawnActorDeferred<AShooterLauncherProjectile>(LauncherProjectile, SpawnTransform);
        if (Projectile)
        {
            Projectile->SetShotDirection(Direction);
            Projectile->SetOwner(GetOwner());
            Projectile->FinishSpawning(SpawnTransform);
        }
        DecreaseAmmo();
    }
}
