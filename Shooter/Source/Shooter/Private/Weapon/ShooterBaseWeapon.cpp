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
    GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Red, "Fire!!");

    MakeShot();
}

void AShooterBaseWeapon::MakeShot()
{
    if (GetWorld())
    {
        FVector TraceStart, TraceEnd;
        if (GetTraceData(TraceStart, TraceEnd))
        {
            FHitResult HitResult;
            MakeHit(HitResult, TraceStart, TraceEnd);
            if (HitResult.bBlockingHit)
            {
                MakeDamage(HitResult);
                DrawDebugLine(GetWorld(), GetMuzzleWorldLocation(), HitResult.ImpactPoint, FColor::Red, false, 3.0f, 0, 3.0f);
                DrawDebugSphere(GetWorld(), HitResult.ImpactPoint, 10.0f, 24, FColor::Red, false, 5.0f);
            }
            else
            {
                DrawDebugLine(GetWorld(), GetMuzzleWorldLocation(), TraceEnd, FColor::Red, false, 3.0f, 0, 3.0f);
            }
        }
    }
}

APlayerController* AShooterBaseWeapon::GetPlayerController() const
{
    const auto Player = Cast<ACharacter>(GetOwner());
    if (Player)
    {
        return Player->GetController<APlayerController>();
    }
    else
    {
        return nullptr;
    }
}

bool AShooterBaseWeapon::GetPlayerViewPoint(FVector& ViewLocation, FRotator& ViewRotation) const
{
    const auto Controller = GetPlayerController();
    if (Controller)
    {
        Controller->GetPlayerViewPoint(ViewLocation, ViewRotation);
        return true;
    }
    else
    {
        return false;
    }
}

FVector AShooterBaseWeapon::GetMuzzleWorldLocation() const
{
    return WeaponMesh->GetSocketLocation(MuzzleSocketName);
}

bool AShooterBaseWeapon::GetTraceData(FVector& TraceStart, FVector& TraceEnd) const
{
    FVector ViewLocation;
    FRotator ViewRotation;
    if (GetPlayerViewPoint(ViewLocation, ViewRotation))
    {
        TraceStart = ViewLocation;
        const FVector ShootDirection = ViewRotation.Vector();
        TraceEnd = TraceStart + ShootDirection * TraceMaxDistance;
        return true;
    }
    else
    {
        return false;
    }
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
    if(HitTarget)
    {
       HitTarget->TakeDamage(DamageAmount, FDamageEvent(), GetPlayerController(), this);
    }
}