// Shooter, All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "PlayerHealthComponent.h"
#include "ShooterPlayerController.h"
#include "Camera/CameraComponent.h"
#include "Components/TextRenderComponent.h"
#include "GameFramework/Character.h"
#include "ShooterBaseCharacter.generated.h"


class UShooterHealthComponent;
class UTextRenderComponent;
class UPlayerHealthComponent;

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

    //Movement vars;
    UFUNCTION(BlueprintCallable, Category = "Movements")
    float GetMovementDirection() const;

    //Using for landed damage
    UFUNCTION()
    void OnGroundLanded(const FHitResult& Hit);

private:
    void OnDeath();

    void OnHealthChanged(float Health) const;
};
