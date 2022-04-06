// Shooter, All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "ShooterLauncherProjectile.h"
#include "Weapon/ShooterBaseWeapon.h"
#include "ShooterLauncherWeapon.generated.h"

class AShooterLauncherProjectile;

UCLASS()
class SHOOTER_API AShooterLauncherWeapon : public AShooterBaseWeapon
{
    GENERATED_BODY()

protected:
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Weapon")
    TSubclassOf<AShooterLauncherProjectile> LauncherProjectile;

    virtual void StartFire() override;
    virtual void DoShot() override;
};
