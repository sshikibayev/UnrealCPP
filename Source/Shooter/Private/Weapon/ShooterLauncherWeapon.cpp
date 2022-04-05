// Shooter, All Rights Reserved


#include "Weapon/ShooterLauncherWeapon.h"

void AShooterLauncherWeapon::StartFire()
{
    Super::StartFire();
    DoShot();
}

void AShooterLauncherWeapon::DoShot()
{
    if (!IsAmmoEmpty())
    {
        Super::DoShot();

        FHitResult HitResult;
        DrawTraceHit(HitResult);

        const FVector EndPoint = HitResult.bBlockingHit ? HitResult.ImpactPoint : TraceData.TraceEnd;
        const FVector Direction = (EndPoint - GetMuzzleWorldLocation()).GetSafeNormal();

        const FTransform SpawnTransform(FRotator::ZeroRotator, GetMuzzleWorldLocation());
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
