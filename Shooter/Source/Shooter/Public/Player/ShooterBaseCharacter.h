// Shooter, All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "PlayerHealthComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/TextRenderComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/SpringArmComponent.h"
#include "ShooterBaseCharacter.generated.h"

class UCameraComponent;
class USpringArmComponent;
class UShooterHealthComponent;
class UTextRenderComponent;
class UPlayerHealthComponent;

UCLASS()
class SHOOTER_API AShooterBaseCharacter : public ACharacter
{
    GENERATED_BODY()

public:
    // Sets default values for this character's properties
    AShooterBaseCharacter(const FObjectInitializer& ObjInit);

protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
    UCameraComponent* CameraComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
    USpringArmComponent* SpringArmComponent;

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
    // Called every frame
    virtual void Tick(float DeltaTime) override;

    // Called to bind functionality to input
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

    //Movement vars;
    UFUNCTION(BlueprintCallable, Category = "Movements")
    bool FIsSprinting() const;

    //Using in Blueprints
    UFUNCTION(BlueprintCallable, Category = "Movements")
    float GetMovementDirection() const;

    //Using for landed damage
    UFUNCTION()
    void OnGroundLanded(const FHitResult& Hit);

private:
    //Movement controller
    void MoveForwardBackward(float Scale);
    bool IsMovingForward = false;
    void MoveRightLeft(float Scale);

    //Sprint Control
    bool IsSprinting = false;
    void OnStartRunning();
    void OnStopRunning();

    void OnDeath();

    void OnHealthChanged(float Health);
};
