// Shooter, All Rights Reserved


#include "Components/ShooterCharacterMovementComp.h"
#include "ShooterPlayerCharacter.h"

float UShooterCharacterMovementComp::GetMaxSpeed() const
{
    const float MaxSpeed = Super::GetMaxSpeed();
    const AShooterPlayerCharacter* Player = Cast<AShooterPlayerCharacter>(GetPawnOwner());
    return Player && Player->FIsSprinting() ? MaxSpeed * SprintModifier : MaxSpeed;
}
