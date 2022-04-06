// Shooter, All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Weapon/ShooterBaseWeapon.h"
#include "ShooterRifleWeapon.generated.h"

UCLASS()
class SHOOTER_API AShooterRifleWeapon : public AShooterBaseWeapon
{
    GENERATED_BODY()

public:
    virtual void StartFire() override;
    virtual void StopFire() override;

protected:
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Weapon")
    float FireRate = 0.1f;
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Weapon")
    float BulletSpread = 1.5f; //max cone's angle 3
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    float DamageAmount = 10.0f;

    virtual void DoShot() override;
    void DoDamage(const FHitResult& HitResult);
    virtual void SetTraceData() override;

private:
    FTimerHandle ShotTimerHandle;

    void SetHit();
};
