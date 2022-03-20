// Shooter, All Rights Reserved


#include "Player/ShooterBaseCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/ShooterCharacterMovementComp.h"

// Sets default values
AShooterBaseCharacter::AShooterBaseCharacter(const FObjectInitializer& ObjInit)
    : Super(ObjInit.SetDefaultSubobjectClass<UShooterCharacterMovementComp>(ACharacter::CharacterMovementComponentName))
{
    // Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    //Spring arm component creation
    SpringArmComponent = CreateDefaultSubobject <USpringArmComponent>("SpringArmComponent");
    SpringArmComponent -> SetupAttachment(GetRootComponent());
    SpringArmComponent -> bUsePawnControlRotation = true;

    //Camera component creation
    CameraComponent = CreateDefaultSubobject<UCameraComponent>("CameraComponent");
    CameraComponent->SetupAttachment(SpringArmComponent);

    //Health component creation
    HealthTextComponent = CreateDefaultSubobject<UTextRenderComponent>("HealthTextComponent");
    HealthTextComponent->SetupAttachment(GetRootComponent());

    PlayerHealthComponent = CreateDefaultSubobject<UPlayerHealthComponent>("PlayerHealthComponent");
}

// Called when the game starts or when spawned
void AShooterBaseCharacter::BeginPlay()
{
    Super::BeginPlay();

    //Ignoring in shipping build
    check(HealthTextComponent);
    check(PlayerHealthComponent);
    check(GetCharacterMovement());

    PlayerHealthComponent->OnDeath.AddUObject(this, &AShooterBaseCharacter::OnDeath);

    OnHealthChanged(PlayerHealthComponent->GetHealth());
    PlayerHealthComponent->OnHealthChanged.AddUObject(this, &AShooterBaseCharacter::OnHealthChanged);

    LandedDelegate.AddDynamic(this, &AShooterBaseCharacter::OnGroundLanded);
}

void AShooterBaseCharacter::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void AShooterBaseCharacter::SetupPlayerInputComponent(
    UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(
        PlayerInputComponent);
    check(PlayerInputComponent);

    //Player movement mapping
    PlayerInputComponent->BindAxis("MoveForwardBackWard", this, &AShooterBaseCharacter::MoveForwardBackward);
    PlayerInputComponent->BindAxis("MoveRightLeft", this, &AShooterBaseCharacter::MoveRightLeft);
    
    //Camera movement mapping
    PlayerInputComponent->BindAxis("LookUpDown", this, &AShooterBaseCharacter::AddControllerPitchInput);
    PlayerInputComponent->BindAxis("TurnAround", this, &AShooterBaseCharacter::AddControllerYawInput);

    //Jump binding
    PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AShooterBaseCharacter::Jump);

    //Sprint Binding
    PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &AShooterBaseCharacter::OnStartRunning);
    PlayerInputComponent->BindAction("Sprint", IE_Released, this, &AShooterBaseCharacter::OnStopRunning);
}

void AShooterBaseCharacter::MoveForwardBackward(float Scale)
{
    IsMovingForward = Scale > 0.0f;
    if(Scale == 0.0f) return;
    AddMovementInput(GetActorForwardVector(), Scale);
}

void AShooterBaseCharacter::MoveRightLeft(float Scale)
{
    if(Scale == 0.0f) return;
    AddMovementInput(GetActorRightVector(), Scale);
}

void AShooterBaseCharacter::OnStartRunning()
{
    IsSprinting = true;
    GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Black, "Running");
}

void AShooterBaseCharacter::OnStopRunning()
{
    IsSprinting = false;
    GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, "STOP Running");
}

bool AShooterBaseCharacter::FIsSprinting() const
{
    return IsSprinting  && IsMovingForward && !GetVelocity().IsZero();
}

float AShooterBaseCharacter::GetMovementDirection() const
{
    if(GetVelocity().IsZero()) return 0.0f;
    const auto VelocityNormal = GetVelocity().GetSafeNormal();
    const auto AngleBetween = FMath::Acos(FVector::DotProduct(GetActorForwardVector(), VelocityNormal));
    const auto CrossProduct = FVector::CrossProduct(GetActorForwardVector(), VelocityNormal);
    const auto Degrees = FMath::RadiansToDegrees(AngleBetween);
    return CrossProduct.IsZero() ? Degrees : Degrees * FMath::Sign(CrossProduct.Z);
}

//Health text change, when Health is changing (delegate)
void AShooterBaseCharacter::OnHealthChanged(float Health)
{
    HealthTextComponent->SetText(FText::FromString(FString::Printf(TEXT("%.0f"), Health)));
}


void AShooterBaseCharacter::OnDeath()
{
    PlayAnimMontage(DeathAnimMontage);

    GetCharacterMovement()->DisableMovement();

    SetLifeSpan(LifeSpanOnDeath);

    if(Controller)
    {
        Controller->ChangeState(NAME_Spectating);
    }
}

void AShooterBaseCharacter::OnGroundLanded(const FHitResult& Hit)
{
    const auto FallVelocityZ = -GetVelocity().Z;

    if(FallVelocityZ < LandedDamageVelocity.X) return;

    const auto FinalDamage = FMath::GetMappedRangeValueClamped(LandedDamageVelocity, LandedDamage, FallVelocityZ);
    TakeDamage(FinalDamage, FDamageEvent{}, nullptr, nullptr);
}




