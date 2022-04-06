// Shooter, All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "ShooterCharacterMovementComp.generated.h"

UCLASS()
class SHOOTER_API UShooterCharacterMovementComp : public UCharacterMovementComponent
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement", meta = (ClampMin = "1.2", ClampMax = "5.0"))
    float SprintModifier = 1.7f;

    virtual float GetMaxSpeed() const override;
};
