// Shooter, All Rights Reserved

#include "Components/ShooterWeaponComponent.h"

#include "AnimUtils.h"
#include "ShooterEquipFinishedAnimNotify.h"
#include "ShooterReloadFinishedAnimNotify.h"
#include "Animation/AnimMontage.h"
#include "GameFramework/Character.h"

constexpr static int32 WeaponNum = 2;

UShooterWeaponComponent::UShooterWeaponComponent()
{
    PrimaryComponentTick.bCanEverTick = false;
}

void UShooterWeaponComponent::BeginPlay()
{
    Super::BeginPlay();

    checkf(WeaponData.Num() == WeaponNum, TEXT("Character can hold only %i weapons"), WeaponNum);

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
    const auto EquipFinishedNotify = AnimUtils::FindNotifyByClass<UShooterEquipFinishedAnimNotify>(EquipAnimMontage);
    if (EquipFinishedNotify)
    {
        EquipFinishedNotify->OnNotified.AddUObject(this, &UShooterWeaponComponent::OnEquipFinished);
    }

    for (auto OneWeaponData : WeaponData)
    {
        const auto ReloadFinishedNotify = AnimUtils::FindNotifyByClass<UShooterReloadFinishedAnimNotify>(OneWeaponData.ReloadAnimMontage);
        if (ReloadFinishedNotify)
        {
            ReloadFinishedNotify->OnNotified.AddUObject(this, &UShooterWeaponComponent::OnReloadFinished);
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

void UShooterWeaponComponent::OnReloadFinished(USkeletalMeshComponent* MeshComponent)
{
    if (WeaponOwner->GetMesh() == MeshComponent)
    {
        ReloadAnimInProgress = false;
    }
}

void UShooterWeaponComponent::CreateWeapon()
{
    if (WeaponOwner)
    {
        for (auto OneWeaponData : WeaponData)
        {
            auto Weapon = GetWorld()->SpawnActor<AShooterBaseWeapon>(OneWeaponData.WeaponClass);
            Weapon->OnClipEmpty.AddUObject(this, &UShooterWeaponComponent::OnEmptyClip);
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
    const auto CurrentWeaponData = WeaponData.FindByPredicate([&](const FWeaponData& Data)
    {
        return Data.WeaponClass == CurrentWeapon->GetClass();
    });

    CurrentReloadAnimMontage = CurrentWeaponData ? CurrentWeaponData->ReloadAnimMontage : nullptr;
    AttachWeaponSocket(CurrentWeapon, WeaponOwner->GetMesh(), WeaponEquipSocketName);
    EquipAnimInProgress = true;
    PlayAnimMontage(EquipAnimMontage);
}

void UShooterWeaponComponent::WeaponReload()
{
    ChangeClip();
}


void UShooterWeaponComponent::OnEmptyClip()
{
    ChangeClip();
}

void UShooterWeaponComponent::ChangeClip()
{
    if (CanReload())
    {
        CurrentWeapon->StopFire();
        CurrentWeapon->ChangeClip();
        ReloadAnimInProgress = true;
        PlayAnimMontage(CurrentReloadAnimMontage);
    }
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
    if (CanEquip())
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
    return CurrentWeapon && !EquipAnimInProgress && !ReloadAnimInProgress;
}

bool UShooterWeaponComponent::CanEquip() const
{
    return !EquipAnimInProgress && !ReloadAnimInProgress;
}

bool UShooterWeaponComponent::CanReload() const
{
    return CurrentWeapon
           && !EquipAnimInProgress
           && !ReloadAnimInProgress
           && CurrentWeapon->CanReload();
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
