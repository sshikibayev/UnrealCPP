// Shooter, All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "ShooterBaseWeapon.h"
#include "ShooterCoreTypes.h"
#include "Components/ActorComponent.h"
#include "ShooterWeaponComponent.generated.h"

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class SHOOTER_API UShooterWeaponComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    UShooterWeaponComponent();

    void StartFire();
    void StopFire();
    void SwitchWeapon();
    void WeaponReload();
    
    bool CanFire() const;
    bool CanEquip() const;
    bool CanReload() const;

protected:
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Weapon")
    TArray<FWeaponData> WeaponData;
    
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
    
    UPROPERTY()
    UAnimMontage* CurrentReloadAnimMontage = nullptr;

    int32 CurrentWeaponIndex = 0;
    
    bool EquipAnimInProgress = false;
    bool ReloadAnimInProgress = false;

    void CreateWeapon();
    void AttachWeaponSocket(AShooterBaseWeapon* Weapon, USceneComponent* SceneComponent, const FName& SocketName);
    void EquipWeapon(int32 WeaponIndex);
    void PlayAnimMontage(UAnimMontage* AnimMontage) const;
    void InitAnimations();
    void OnEquipFinished(USkeletalMeshComponent* MeshComponent);
    void OnReloadFinished(USkeletalMeshComponent* MeshComponent);
    void OnEmptyClip();
    void ChangeClip();
    void WeaponDestroying();
};
