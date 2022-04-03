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
    
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;
    
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

    //Movement vars;
    UFUNCTION(BlueprintCallable, Category = "Movements")
    virtual bool FIsSprinting() const;
    
    //Movement controller
    void MoveForwardBackward(float Scale);
    bool IsMovingForward = false;
    void MoveRightLeft(float Scale);
    
    //Sprint Control
    bool IsSprinting = false;
    void OnStartRunning();
    void OnStopRunning();
};
