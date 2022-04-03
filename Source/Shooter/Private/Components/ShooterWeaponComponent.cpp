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

    SpawnWeapon();
}

void UShooterWeaponComponent::SpawnWeapon()
{
    if (GetWorld())
    {
        CreateWeapon();
    }
}

void UShooterWeaponComponent::CreateWeapon()
{
    ACharacter* Character = Cast<ACharacter>(GetOwner());
    if (Character)
    {
        CurrentWeapon = GetWorld()->SpawnActor<AShooterBaseWeapon>(WeaponClass);
        if (CurrentWeapon)
        {
            const FAttachmentTransformRules AttachmentRules(EAttachmentRule::SnapToTarget, false);
            CurrentWeapon->AttachToComponent(Character->GetMesh(), AttachmentRules, WeaponAttachPointName);
            CurrentWeapon->SetOwner(Character);
        }
    }
}

void UShooterWeaponComponent::Fire()
{
    CurrentWeapon->Fire();
}
