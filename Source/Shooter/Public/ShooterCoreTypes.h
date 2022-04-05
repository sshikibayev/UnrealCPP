#pragma once
#include "ShooterCoreTypes.generated.h"

//Weapon
class AShooterBaseWeapon;

DECLARE_MULTICAST_DELEGATE(FOnClipEmptySignature);

USTRUCT(BlueprintType)
struct FAmmoData
{
    GENERATED_BODY()

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Weapon")
    int32 BulletsAmountInClip;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Weapon", meta = (EditCondition = "!Infinite"))
    int32 Clips;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Weapon")
    bool Infinite;
};

USTRUCT(BlueprintType)
struct FWeaponData
{
    GENERATED_BODY()

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Weapon")
    TSubclassOf<AShooterBaseWeapon> WeaponClass;
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Weapon")
    UAnimMontage* ReloadAnimMontage;
};

//Health
DECLARE_MULTICAST_DELEGATE(FOnDeath);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnHealthChanged, float);