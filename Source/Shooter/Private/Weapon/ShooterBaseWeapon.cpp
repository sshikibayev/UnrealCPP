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
    check(GetWorld())
    MakeShot();
}

void AShooterBaseWeapon::MakeShot()
{
    SetPlayerViewPoint();
    SetTraceData();
    FHitResult HitResult;
    MakeHit(HitResult);
    if (HitResult.bBlockingHit)
    {
        MakeDamage(HitResult);
        DrawDebugLine(GetWorld(), GetMuzzleWorldLocation(), HitResult.ImpactPoint, FColor::Red, false, 3.0f, 0, 3.0f);
        DrawDebugSphere(GetWorld(), HitResult.ImpactPoint, 10.0f, 24, FColor::Red, false, 5.0f);
    }
    DrawDebugLine(GetWorld(), GetMuzzleWorldLocation(), TraceData.TraceEnd, FColor::Red, false, 3.0f, 0, 3.0f);
}

void AShooterBaseWeapon::SetPlayerViewPoint()
{
    if (GetPlayerController())
    {
        GetPlayerController()->GetPlayerViewPoint(TraceData.ViewLocation, TraceData.ViewRotation);
    }
}

void AShooterBaseWeapon::SetTraceData()
{
    TraceData.TraceStart = TraceData.ViewLocation;
    const FVector ShootDirection = TraceData.ViewRotation.Vector();
    TraceData.TraceEnd = TraceData.TraceStart + ShootDirection * TraceMaxDistance;
}

APlayerController* AShooterBaseWeapon::GetPlayerController() const
{
    return Cast<ACharacter>(GetOwner())->GetController<APlayerController>();
}

void AShooterBaseWeapon::MakeHit(FHitResult& HitResult) const
{
    check(GetWorld())
    FCollisionQueryParams CollisionParams;
    CollisionParams.AddIgnoredActor(GetOwner());
    GetWorld()->LineTraceSingleByChannel(HitResult, TraceData.TraceStart, TraceData.TraceEnd, ECollisionChannel::ECC_Visibility);
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
