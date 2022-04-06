// Shooter, All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Player/ShooterBaseCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "ShooterPlayerCharacter.generated.h"

UCLASS()
class SHOOTER_API AShooterPlayerCharacter : public AShooterBaseCharacter
{
    GENERATED_BODY()

public:
    explicit AShooterPlayerCharacter(const FObjectInitializer& ObjInit);

protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
    UCameraComponent* CameraComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
    USpringArmComponent* SpringArmComponent;

    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

    UFUNCTION(BlueprintCallable, Category = "Movements")
    virtual bool FIsSprinting() const;

    void MoveForwardBackward(float Scale);
    void MoveRightLeft(float Scale);
    bool IsMovingForward = false;

    void OnStartRunning();
    void OnStopRunning();
    bool IsSprinting = false;

private:
    void KeyBinding(UInputComponent* PlayerInputComponent);
};
