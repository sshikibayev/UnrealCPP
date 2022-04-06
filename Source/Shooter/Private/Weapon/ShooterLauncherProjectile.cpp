// Shooter, All Rights Reserved


#include "Weapon/ShooterLauncherProjectile.h"
#include "DrawDebugHelpers.h"
#include "GameFramework/DamageType.h"
#include "Kismet/GameplayStatics.h"

AShooterLauncherProjectile::AShooterLauncherProjectile()
{
    PrimaryActorTick.bCanEverTick = false;

    CollisionComponent = CreateDefaultSubobject<USphereComponent>("SphereComponent");
    CollisionComponent->InitSphereRadius(5.0f);
    CollisionComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    CollisionComponent->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);
    SetRootComponent(CollisionComponent);

    MovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>("ProjectileMovementComponent");
    MovementComponent->InitialSpeed = 2000.0f;
    MovementComponent->ProjectileGravityScale = 0.1f;
}

void AShooterLauncherProjectile::BeginPlay()
{
    Super::BeginPlay();

    check(MovementComponent);
    check(CollisionComponent);

    MovementComponent->Velocity = ShotDirection * MovementComponent->InitialSpeed;
    CollisionComponent->IgnoreActorWhenMoving(GetOwner(), true);
    CollisionComponent->OnComponentHit.AddDynamic(this, &AShooterLauncherProjectile::OnProjectileHit);
    SetLifeSpan(LifeSeconds);
}

void AShooterLauncherProjectile::OnProjectileHit(UPrimitiveComponent* HitComponent,
    AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
    if(GetWorld())
    {
        MovementComponent->StopMovementImmediately();
        DoRadialDamage();
    }
    
}

void AShooterLauncherProjectile::DoRadialDamage()
{
    UGameplayStatics::ApplyRadialDamage(GetWorld(),
           DamageAmount,
           GetActorLocation(),
           DamageRadius,
           UDamageType::StaticClass(),
           {GetOwner()},
           this,
           GetController(),
           DoFullDamage);
    DrawDebugSphere(GetWorld(), GetActorLocation(), DamageRadius, 24, FColor::Red, false, 5.0f);
    Destroy();
}

AController* AShooterLauncherProjectile::GetController() const
{
    const APawn* Pawn = Cast<APawn>(GetOwner());
    return Pawn ? Pawn->GetController() : nullptr;
}