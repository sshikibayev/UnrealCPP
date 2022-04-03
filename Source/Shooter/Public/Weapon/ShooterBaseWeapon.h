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
    virtual void Fire();

protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
    USkeletalMeshComponent* WeaponMesh;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
    FName MuzzleSocketName = "MuzzleSocket";

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
    float TraceMaxDistance = 1500.0f;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
    float DamageAmount = 10.0f;

    virtual void BeginPlay() override;

    void MakeShot();
    FTraceData TraceData;
    void SetTraceData();
    void SetPlayerViewPoint();
    APlayerController* GetPlayerController() const;
    void MakeHit(FHitResult& HitResult) const;
    void MakeDamage(const FHitResult& HitResult);
    FVector GetMuzzleWorldLocation() const;
};
