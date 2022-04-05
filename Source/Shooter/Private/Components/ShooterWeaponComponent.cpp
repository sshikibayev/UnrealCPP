// Shooter, All Rights Reserved

#include "Components/ShooterWeaponComponent.h"
#include "GameFramework/Character.h"

UShooterWeaponComponent::UShooterWeaponComponent()
{
    PrimaryComponentTick.bCanEverTick = false;
}

void UShooterWeaponComponent::BeginPlay()
{
    Super::BeginPlay();

    WeaponOwner = Cast<ACharacter>(GetOwner());
    check(WeaponOwner);
    CreateWeapon();
    EquipWeapon(CurrentWeaponIndex);
}

void UShooterWeaponComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    WeaponDestroying();
    Super::EndPlay(EndPlayReason);
}

void UShooterWeaponComponent::CreateWeapon()
{
    if (WeaponOwner)
    {
        for (auto WeaponClass : WeaponClasses)
        {
            auto Weapon = GetWorld()->SpawnActor<AShooterBaseWeapon>(WeaponClass);
            Weapon->SetOwner(WeaponOwner);
            Weapons.Add(Weapon);
            AttachWeaponSocket(Weapon, WeaponOwner->GetMesh(), WeaponArmorySocketName);
        }
    }
}

void UShooterWeaponComponent::EquipWeapon(int32 WeaponIndex)
{
    if (CurrentWeapon)
    {
        CurrentWeapon->StopFire();
        AttachWeaponSocket(CurrentWeapon, WeaponOwner->GetMesh(), WeaponArmorySocketName);
    }

    CurrentWeapon = Weapons[WeaponIndex];
    AttachWeaponSocket(CurrentWeapon, WeaponOwner->GetMesh(), WeaponEquipSocketName);
}

void UShooterWeaponComponent::AttachWeaponSocket(AShooterBaseWeapon* Weapon, USceneComponent* SceneComponent, const FName& SocketName)
{
    if (Weapon && SceneComponent)
    {
        const FAttachmentTransformRules AttachmentRules(EAttachmentRule::SnapToTarget, false);
        Weapon->AttachToComponent(SceneComponent, AttachmentRules, SocketName);
    }
}

void UShooterWeaponComponent::SwitchWeapon()
{
    CurrentWeaponIndex = (CurrentWeaponIndex + 1) % Weapons.Num();
    EquipWeapon(CurrentWeaponIndex);
}

void UShooterWeaponComponent::StartFire()
{
    if (CurrentWeapon)
    {
        CurrentWeapon->StartFire();
    }
}

void UShooterWeaponComponent::StopFire()
{
    if (CurrentWeapon)
    {
        CurrentWeapon->StopFire();
    }
}

void UShooterWeaponComponent::WeaponDestroying()
{
    CurrentWeapon = nullptr;
    for (const auto Weapon : Weapons)
    {
        Weapon->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
        Weapon->Destroy();
    }
    Weapons.Empty();
}
