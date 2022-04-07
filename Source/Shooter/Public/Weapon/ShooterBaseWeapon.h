// Shooter, All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "ShooterCoreTypes.h"
#include "GameFramework/Actor.h"
#include "ShooterBaseWeapon.generated.h"

UCLASS()
class SHOOTER_API AShooterBaseWeapon : public AActor
{
    GENERATED_BODY()

public:
    AShooterBaseWeapon();

    FOnClipEmptySignature OnClipEmpty;

    virtual void StartFire(){};
    virtual void StopFire(){};

    void ChangeClip();
    bool CanReload() const;

protected:
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
    USkeletalMeshComponent* WeaponMesh;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    FName MuzzleSocketName = "MuzzleSocket";

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    float TraceMaxDistance = 1500.0f;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    FAmmoData DefaultAmmo{15, 10, false};

    virtual void BeginPlay() override;
    virtual void DoShot(){};
    virtual void SetTraceData();

    FTraceData TraceData;
    void SetPlayerViewPoint();
    APlayerController* GetPlayerController() const;
    void DrawTraceHit(FHitResult& HitResult) const;
    FTransform GetMuzzleWorldTransform() const;

    //Ammo section
    void DecreaseAmmo();
    bool IsAmmoEmpty() const;
    bool IsClipEmpty() const;
    void LogAmmo() const;

private:
    FAmmoData CurrentAmmo;
};
