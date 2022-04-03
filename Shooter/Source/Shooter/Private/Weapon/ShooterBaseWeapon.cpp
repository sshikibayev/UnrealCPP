// Shooter, All Rights Reserved

#include "Weapon/ShooterBaseWeapon.h"
#include "DrawDebugHelpers.h"
#include "ShooterPlayerController.h"
#include "GameFramework/Character.h"


AShooterBaseWeapon::AShooterBaseWeapon()
{
    PrimaryActorTick.bCanEverTick = false;

    WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>("WeaponMesh");
    SetRootComponent(WeaponMesh);
}

void AShooterBaseWeapon::BeginPlay()
{
    Super::BeginPlay();
    check(WeaponMesh);
}

void AShooterBaseWeapon::Fire()
{
    if (GetWorld())
    {
        MakeShot();
    }
}

void AShooterBaseWeapon::MakeShot()
{
    SetTraceData(TraceData.TraceStart, TraceData.TraceEnd);
    FHitResult HitResult;
    MakeHit(HitResult, TraceData.TraceStart, TraceData.TraceEnd);
    if (HitResult.bBlockingHit)
    {
        MakeDamage(HitResult);
        DrawDebugLine(GetWorld(), GetMuzzleWorldLocation(), HitResult.ImpactPoint, FColor::Red, false, 3.0f, 0, 3.0f);
        DrawDebugSphere(GetWorld(), HitResult.ImpactPoint, 10.0f, 24, FColor::Red, false, 5.0f);
    }
    DrawDebugLine(GetWorld(), GetMuzzleWorldLocation(), TraceData.TraceEnd, FColor::Red, false, 3.0f, 0, 3.0f);
}

void AShooterBaseWeapon::SetTraceData(FVector& TraceStart, FVector& TraceEnd)
{
    SetPlayerViewPoint(TraceData.ViewLocation, TraceData.ViewRotation);
    TraceStart = TraceData.ViewLocation;
    const FVector ShootDirection = TraceData.ViewRotation.Vector();
    TraceEnd = TraceStart + ShootDirection * TraceMaxDistance;
}

void AShooterBaseWeapon::SetPlayerViewPoint(FVector& ViewLocation, FRotator& ViewRotation) const
{
    const auto Controller = GetPlayerController();
    if (Controller)
    {
        Controller->GetPlayerViewPoint(ViewLocation, ViewRotation);
    }
}

APlayerController* AShooterBaseWeapon::GetPlayerController() const
{
    return Cast<ACharacter>(GetOwner())->GetController<APlayerController>();
}

void AShooterBaseWeapon::MakeHit(FHitResult& HitResult, const FVector& TraceStart, const FVector& TraceEnd) const
{
    if (GetWorld())
    {
        FCollisionQueryParams CollisionParams;
        CollisionParams.AddIgnoredActor(GetOwner());
        GetWorld()->LineTraceSingleByChannel(HitResult, TraceStart, TraceEnd, ECollisionChannel::ECC_Visibility);
    }
}

void AShooterBaseWeapon::MakeDamage(const FHitResult& HitResult)
{
    const auto HitTarget = HitResult.GetActor();
    if (HitTarget)
    {
        HitTarget->TakeDamage(DamageAmount, FDamageEvent(), GetPlayerController(), this);
    }
}

FVector AShooterBaseWeapon::GetMuzzleWorldLocation() const
{
    return WeaponMesh->GetSocketLocation(MuzzleSocketName);
}
