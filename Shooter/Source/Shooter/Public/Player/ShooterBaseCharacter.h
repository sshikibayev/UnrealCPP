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
	AShooterBaseCharacter();
        
protected:
        UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
        UCameraComponent* CameraComponent;

        UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
        USpringArmComponent* SpringArmComponent;

        //Movement vars;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movements")
        float SprintMultiplayer = 1.5f;

        float MaxWalkSpeed;
        
        // Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
private:
        //Movement controller
        void MoveForward(float Scale);
        void MoveBackward(float Scale);
        void MoveRight(float Scale);
        void MoveLeft(float Scale);
        void Run(float Scale);
};
