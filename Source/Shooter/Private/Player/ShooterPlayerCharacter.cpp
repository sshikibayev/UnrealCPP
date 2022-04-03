// Shooter, All Rights Reserved


#include "Player/ShooterPlayerCharacter.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"

AShooterPlayerCharacter::AShooterPlayerCharacter(const FObjectInitializer& ObjInit)
    : Super(ObjInit)
{
    PrimaryActorTick.bCanEverTick = true;

    //Spring arm component creation
    SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>("SpringArmComponent");
    SpringArmComponent->SetupAttachment(GetRootComponent());
    SpringArmComponent->bUsePawnControlRotation = true;
    SpringArmComponent->SocketOffset = FVector(0.0f, 100.0f, 20.0f);

    //Camera component creation
    CameraComponent = CreateDefaultSubobject<UCameraComponent>("CameraComponent");
    CameraComponent->SetupAttachment(SpringArmComponent);
}

void AShooterPlayerCharacter::BeginPlay()
{
    Super::BeginPlay();
}

void AShooterPlayerCharacter::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}


void AShooterPlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);
    check(PlayerInputComponent);
    check(WeaponComponent);

    PlayerInputComponent->BindAxis("MoveForwardBackWard", this, &AShooterPlayerCharacter::MoveForwardBackward);
    PlayerInputComponent->BindAxis("MoveRightLeft", this, &AShooterPlayerCharacter::MoveRightLeft);
    PlayerInputComponent->BindAxis("LookUpDown", this, &AShooterPlayerCharacter::AddControllerPitchInput);
    PlayerInputComponent->BindAxis("TurnAround", this, &AShooterPlayerCharacter::AddControllerYawInput);
    PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AShooterPlayerCharacter::Jump);
    PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &AShooterPlayerCharacter::OnStartRunning);
    PlayerInputComponent->BindAction("Sprint", IE_Released, this, &AShooterPlayerCharacter::OnStopRunning);
    PlayerInputComponent->BindAction("Fire", IE_Pressed, WeaponComponent, &UShooterWeaponComponent::Fire);
}

void AShooterPlayerCharacter::MoveForwardBackward(const float Scale)
{
    IsMovingForward = Scale > 0.0f;
    if (Scale != 0.0f)
    {
        AddMovementInput(GetActorForwardVector(), Scale);
    }
}

void AShooterPlayerCharacter::MoveRightLeft(const float Scale)
{
    if (Scale != 0.0f)
    {
        AddMovementInput(GetActorRightVector(), Scale);
    }
}

void AShooterPlayerCharacter::OnStartRunning()
{
    IsSprinting = true;
}

void AShooterPlayerCharacter::OnStopRunning()
{
    IsSprinting = false;
}

bool AShooterPlayerCharacter::FIsSprinting() const
{
    return IsSprinting && IsMovingForward && !GetVelocity().IsZero();
}
