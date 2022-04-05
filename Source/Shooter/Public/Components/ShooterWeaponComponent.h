// Shooter, All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "ShooterBaseWeapon.h"
#include "Components/ActorComponent.h"
#include "ShooterWeaponComponent.generated.h"

class UPlayerHealthComponent;
class AShooterBaseWeapon;
class UAnimMontage;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class SHOOTER_API UShooterWeaponComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    UShooterWeaponComponent();

    void StartFire();
    void StopFire();
    void SwitchWeapon();

protected:
    UPROPERTY(EditDefaultsOnly, Category = "Weapon")
    TArray<TSubclassOf<AShooterBaseWeapon>> WeaponClasses;
    UPROPERTY(EditDefaultsOnly, Category = "Weapon")
    FName WeaponEquipSocketName = "WeaponSocket";
    UPROPERTY(EditDefaultsOnly, Category = "Weapon")
    FName WeaponArmorySocketName = "ArmorySocket";
    UPROPERTY(EditDefaultsOnly, Category = "Animation")
    UAnimMontage* EquipAnimMontage;

    virtual void BeginPlay() override;
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

private:
    UPROPERTY()
    AShooterBaseWeapon* CurrentWeapon = nullptr;
    UPROPERTY()
    TArray<AShooterBaseWeapon*> Weapons;
    UPROPERTY()
    ACharacter* WeaponOwner = nullptr;

    int32 CurrentWeaponIndex = 0;
    bool EquipAnimInProgress = false;

    void CreateWeapon();
    void AttachWeaponSocket(AShooterBaseWeapon* Weapon, USceneComponent* SceneComponent, const FName& SocketName);
    void EquipWeapon(int32 WeaponIndex);
    void PlayAnimMontage(UAnimMontage* AnimMontage);
    void InitAnimations();
    void OnEquipFinished(USkeletalMeshComponent* MeshComponent);
    bool CanFire() const;
    bool CanEquip() const;
    
    void WeaponDestroying();
};
