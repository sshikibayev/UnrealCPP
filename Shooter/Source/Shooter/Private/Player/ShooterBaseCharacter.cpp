// Shooter, All Rights Reserved


#include "Player/ShooterBaseCharacter.h"

#include "ChaosInterfaceWrapperCore.h"
#include "GameFramework/CharacterMovementComponent.h"

#include <string>

DEFINE_LOG_CATEGORY_STATIC(LogShooterBaseCharacter, All, All)

// Sets default values
AShooterBaseCharacter::AShooterBaseCharacter()
{
    // Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    //Spring arm component creation
    SpringArmComponent =
        CreateDefaultSubobject
        <USpringArmComponent>(
            "SpringArmComponent");
    SpringArmComponent->SetupAttachment(
        GetRootComponent());
    SpringArmComponent->
        bUsePawnControlRotation
        = true;

    //Camera component creation
    CameraComponent = CreateDefaultSubobject
        <UCameraComponent>(
            "CameraComponent");
    CameraComponent->SetupAttachment(
        SpringArmComponent);

    //Sprint setup
    MaxWalkSpeed =
        AShooterBaseCharacter::GetCharacterMovement()
        ->
        MaxWalkSpeed;
}

// Called when the game starts or when spawned
void AShooterBaseCharacter::BeginPlay()
{
    Super::BeginPlay();
}

// Called every frame
void AShooterBaseCharacter::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AShooterBaseCharacter::SetupPlayerInputComponent(
    UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(
        PlayerInputComponent);

    //Player movement mapping
    PlayerInputComponent->BindAxis(
        "MoveForward",
        this,
        &AShooterBaseCharacter::MoveForward);
    PlayerInputComponent->BindAxis(
        "MoveBackward",
        this,
        &AShooterBaseCharacter::MoveBackward);
    PlayerInputComponent->BindAxis(
        "MoveRight",
        this,
        &AShooterBaseCharacter::MoveRight);
    PlayerInputComponent->BindAxis(
        "MoveLeft",
        this,
        &AShooterBaseCharacter::MoveLeft);

    //Camera movement mapping
    PlayerInputComponent->BindAxis(
        "LookUpDown",
        this,
        &AShooterBaseCharacter::AddControllerPitchInput);
    PlayerInputComponent->BindAxis(
        "TurnAround",
        this,
        &AShooterBaseCharacter::AddControllerYawInput);

    //Jump binding
    PlayerInputComponent->BindAction("Jump", IE_Pressed,this, &AShooterBaseCharacter::Jump);

    //Sprint mapping
    PlayerInputComponent->BindAxis( "Sprint",this, &AShooterBaseCharacter::Run);
}

void AShooterBaseCharacter::MoveForward(float Scale)
{
    AddMovementInput(
        GetActorForwardVector(), Scale);
}

void AShooterBaseCharacter::MoveBackward(float Scale)
{
    AddMovementInput(GetActorForwardVector(), Scale);
}

void AShooterBaseCharacter::MoveRight(float Scale)
{
    AddMovementInput(GetActorRightVector(), Scale);
}

void AShooterBaseCharacter::MoveLeft(float Scale)
{
    AddMovementInput(GetActorRightVector(), Scale);
}

void AShooterBaseCharacter::Run(float Scale)
{
    float Velocity = 1.0f;
    FVector VectorChar = FVector::ZeroVector;
    AShooterBaseCharacter::GetVelocity().ToDirectionAndLength(VectorChar,  Velocity);
    
    if (Scale > 0)
    {
        AShooterBaseCharacter::GetCharacterMovement() -> MaxWalkSpeed = MaxWalkSpeed * SprintMultiplayer;
        GEngine ->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, FString::SanitizeFloat(Velocity));
    }
    else
    {
        AShooterBaseCharacter::GetCharacterMovement()->MaxWalkSpeed = MaxWalkSpeed;
    }
}
