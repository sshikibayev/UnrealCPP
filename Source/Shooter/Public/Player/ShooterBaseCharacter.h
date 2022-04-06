// Shooter, All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "PlayerHealthComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Character.h"
#include "ShooterWeaponComponent.h"
#include "Components/TextRenderComponent.h"
#include "ShooterBaseCharacter.generated.h"

UCLASS()
class SHOOTER_API AShooterBaseCharacter : public ACharacter
{
    GENERATED_BODY()

public:
    explicit AShooterBaseCharacter(const FObjectInitializer& ObjInit);

    UPlayerHealthComponent* GetHealthComponent() const { return PlayerHealthComponent; }

protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
    UTextRenderComponent* HealthTextComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
    UPlayerHealthComponent* PlayerHealthComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
    UShooterWeaponComponent* WeaponComponent;

    UPROPERTY(EditDefaultsOnly, Category = "Animation")
    UAnimMontage* DeathAnimMontage;

    UPROPERTY(EditDefaultsOnly, Category = "Damage")
    float LifeSpanOnDeath = 5.0f;

    UPROPERTY(EditDefaultsOnly, Category = "Damage")
    FVector2D LandedDamageVelocity = FVector2D(900.0f, 1200.0f);

    UPROPERTY(EditDefaultsOnly, Category = "Damage")
    FVector2D LandedDamage = FVector2D(10.0f, 100.0f);

    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    UFUNCTION(BlueprintCallable, Category = "Movements")
    float GetMovementDirection() const;

    UFUNCTION()
    void OnGroundLanded(const FHitResult& Hit);

private:
    void OnDeath();
    void OnHealthChanged(float Health) const;
};
