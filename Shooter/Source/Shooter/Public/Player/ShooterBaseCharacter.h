// Shooter, All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/SpringArmComponent.h"
#include "ShooterBaseCharacter.generated.h"

class UCameraComponent;
class USpringArmComponent;

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
    
        // Called when the game starts or when spawned
        virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
    
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

    //Movement vars;
    UFUNCTION(BlueprintCallable, Category = "Movements")
    bool FIsSprinting() const;
    
    UFUNCTION(BlueprintCallable, Category = "Movements")
    float GetMovementDirection() const;

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
