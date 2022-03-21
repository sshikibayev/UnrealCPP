// Shooter, All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Player/ShooterBaseCharacter.h"
#include "ShooterPlayerCharacter.generated.h"

class UCameraComponent;
class USpringArmComponent;

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

public:
    // Called to bind functionality to input
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

    //Movement vars;
    virtual bool FIsSprinting() const override;

private:
    //Movement controller
    void MoveForwardBackward(float Scale);
    bool IsMovingForward = false;
    void MoveRightLeft(float Scale);
    
    //Sprint Control
    bool IsSprinting = false;
    void OnStartRunning();
    void OnStopRunning();
};
