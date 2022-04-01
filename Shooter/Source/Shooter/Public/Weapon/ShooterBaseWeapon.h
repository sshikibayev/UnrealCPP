// Shooter, All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ShooterBaseWeapon.generated.h"

class USkeletalMeshComponent;

UCLASS()
class SHOOTER_API AShooterBaseWeapon : public AActor
{
    GENERATED_BODY()

public:
    AShooterBaseWeapon();

protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
    USkeletalMeshComponent* WeaponMesh;
    
    virtual void BeginPlay() override;
};
