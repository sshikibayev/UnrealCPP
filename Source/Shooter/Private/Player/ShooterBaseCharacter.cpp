// Shooter, All Rights Reserved


#include "Player/ShooterBaseCharacter.h"
#include "PlayerHealthComponent.h"
#include "ShooterWeaponComponent.h"
#include "Components/CapsuleComponent.h"
#include "Tests/FTestUtils.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/ShooterCharacterMovementComp.h"
#include "Components/TextRenderComponent.h"
#include "GameFramework/PlayerController.h"

AShooterBaseCharacter::AShooterBaseCharacter(const FObjectInitializer& ObjInit)
    : Super(ObjInit.SetDefaultSubobjectClass<UShooterCharacterMovementComp>(ACharacter::CharacterMovementComponentName))
{
    PrimaryActorTick.bCanEverTick = true;

    HealthTextComponent = CreateDefaultSubobject<UTextRenderComponent>("HealthTextComponent");
    HealthTextComponent->SetupAttachment(GetRootComponent());
    HealthTextComponent->SetOwnerNoSee(true);

    PlayerHealthComponent = CreateDefaultSubobject<UPlayerHealthComponent>("PlayerHealthComponent");
    WeaponComponent = CreateDefaultSubobject<UShooterWeaponComponent>("WeaponComponent");
}

void AShooterBaseCharacter::BeginPlay()
{
    Super::BeginPlay();

    check(HealthTextComponent);
    check(PlayerHealthComponent);
    check(GetCharacterMovement());

    PlayerHealthComponent->OnDeath.AddUObject(this, &AShooterBaseCharacter::OnDeath);

    OnHealthChanged(PlayerHealthComponent->GetHealth());
    PlayerHealthComponent->OnHealthChanged.AddUObject(this, &AShooterBaseCharacter::OnHealthChanged);

    LandedDelegate.AddDynamic(this, &AShooterBaseCharacter::OnGroundLanded);
}

void AShooterBaseCharacter::Tick(const float DeltaTime)
{
    Super::Tick(DeltaTime);
}

float AShooterBaseCharacter::GetMovementDirection() const
{
    if (GetVelocity().IsZero())
    {
        return 0.0f;
    }
    const auto VelocityNormal = GetVelocity().GetSafeNormal();
    const auto AngleBetween = FMath::Acos(FVector::DotProduct(GetActorForwardVector(), VelocityNormal));
    const auto CrossProduct = FVector::CrossProduct(GetActorForwardVector(), VelocityNormal);
    const auto Degrees = FMath::RadiansToDegrees(AngleBetween);
    return CrossProduct.IsZero() ? Degrees : Degrees * FMath::Sign(CrossProduct.Z);
}

//Health text change, when Health is changing (delegate)
void AShooterBaseCharacter::OnHealthChanged(const float Health) const
{
    HealthTextComponent->SetText(FText::FromString(FString::Printf(TEXT("%.0f"), Health)));
}

void AShooterBaseCharacter::OnDeath()
{
    PlayAnimMontage(DeathAnimMontage);

    GetCharacterMovement()->DisableMovement();

    SetLifeSpan(LifeSpanOnDeath);

    if (Controller)
    {
        Controller->ChangeState(NAME_Spectating);
    }

    GetCapsuleComponent()->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
    WeaponComponent->StopFire();
}


void AShooterBaseCharacter::OnGroundLanded(const FHitResult& Hit)
{
    const float FallVelocityZ = -GetVelocity().Z;

    if (FallVelocityZ > LandedDamageVelocity.X)
    {
        const auto FinalDamage = FMath::GetMappedRangeValueClamped(LandedDamageVelocity, LandedDamage, FallVelocityZ);
        TakeDamage(FinalDamage, FDamageEvent{}, nullptr, nullptr);
    }
}
