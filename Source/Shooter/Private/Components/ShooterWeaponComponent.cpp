// Shooter, All Rights Reserved

#include "Components/ShooterWeaponComponent.h"

#include "ShooterEquipFinishedAnimNotify.h"
#include "Animation/AnimMontage.h"
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
    InitAnimations();
    CreateWeapon();
    EquipWeapon(CurrentWeaponIndex);
}

void UShooterWeaponComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    WeaponDestroying();
    Super::EndPlay(EndPlayReason);
}

void UShooterWeaponComponent::InitAnimations()
{
    check(EquipAnimMontage)
    const auto NotifyEvents = EquipAnimMontage->Notifies;
    for (const auto NotifyEvent : NotifyEvents)
    {
        const auto EquipFinishedNotify = Cast<UShooterEquipFinishedAnimNotify>(NotifyEvent.Notify);
        if (EquipFinishedNotify)
        {
            EquipFinishedNotify->OnNotified.AddUObject(this, &UShooterWeaponComponent::OnEquipFinished);
            break;
        }
    }
}

void UShooterWeaponComponent::OnEquipFinished(USkeletalMeshComponent* MeshComponent)
{
    if (WeaponOwner->GetMesh() == MeshComponent)
    {
        EquipAnimInProgress = false;
    }
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
    EquipAnimInProgress = true;
    PlayAnimMontage(EquipAnimMontage);
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
    if(CanEquip())
    {
        CurrentWeaponIndex = (CurrentWeaponIndex + 1) % Weapons.Num();
        EquipWeapon(CurrentWeaponIndex);
    }
}

void UShooterWeaponComponent::StartFire()
{
    if (CanFire())
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

void UShooterWeaponComponent::PlayAnimMontage(UAnimMontage* AnimMontage)
{
    WeaponOwner->PlayAnimMontage(AnimMontage);
}

bool UShooterWeaponComponent::CanFire() const
{
    return CurrentWeapon && !EquipAnimInProgress;
}

bool UShooterWeaponComponent::CanEquip() const
{
    return !EquipAnimInProgress; 
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
