// Shooter, All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ShooterBaseWeapon.generated.h"

class USkeletalMeshComponent;

USTRUCT()
struct FTraceData
{
    GENERATED_BODY()
    UPROPERTY()
    FVector TraceStart;
    UPROPERTY()
    FVector TraceEnd;
    UPROPERTY()
    FVector ViewLocation;
    UPROPERTY()
    FRotator ViewRotation;
};

UCLASS()
class SHOOTER_API AShooterBaseWeapon : public AActor
{
    GENERATED_BODY()

public:
    AShooterBaseWeapon();

    virtual void StartFire();
    virtual void StopFire();

protected:
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
    USkeletalMeshComponent* WeaponMesh;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    FName MuzzleSocketName = "MuzzleSocket";

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    float TraceMaxDistance = 1500.0f;
    
    virtual void BeginPlay() override;
    virtual void DoShot();
    virtual void SetTraceData();

    FTraceData TraceData;
    void SetPlayerViewPoint();
    APlayerController* GetPlayerController() const;
    void DrawTraceHit(FHitResult& HitResult) const;
    FVector GetMuzzleWorldLocation() const;
};
