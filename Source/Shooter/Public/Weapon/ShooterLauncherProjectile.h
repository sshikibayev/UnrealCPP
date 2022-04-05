// Shooter, All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Actor.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "ShooterLauncherProjectile.generated.h"

class USphereComponent;
class UProjectileMovementComponent;

UCLASS()
class SHOOTER_API AShooterLauncherProjectile : public AActor
{
    GENERATED_BODY()

public:
    AShooterLauncherProjectile();
    void SetShotDirection(const FVector& Direction) { ShotDirection = Direction; }

protected:
    virtual void BeginPlay() override;

    UPROPERTY(VisibleAnywhere, Category = "Weapon")
    USphereComponent* CollisionComponent;
    UPROPERTY(VisibleAnywhere, Category = "Weapon")
    UProjectileMovementComponent* MovementComponent;
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Weapon")
    float DamageRadius = 200.0f;
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Weapon")
    float DamageAmount = 100.0f;
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Weapon")
    bool DoFullDamage = false;
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Weapon")
    float LifeSeconds = 5.0f;

private:
    FVector ShotDirection;

    UFUNCTION()
    void OnProjectileHit(UPrimitiveComponent* HitComponent,
        AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

    AController* GetController() const;
};
