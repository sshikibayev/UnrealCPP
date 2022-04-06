#pragma once

#include "ShooterCoreTypes.generated.h"

//Weapon
class UPlayerHealthComponent;
class AShooterBaseWeapon;
class UAnimMontage;
class USkeletalMeshComponent;

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

//Health
DECLARE_MULTICAST_DELEGATE(FOnDeath);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnHealthChanged, float);

//Character
class UShooterHealthComponent;
class UTextRenderComponent;
class UPlayerHealthComponent;
class UShooterWeaponComponent;
class UCameraComponent;
class USpringArmComponent;
class UInputComponent;
