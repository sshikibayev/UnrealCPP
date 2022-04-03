// Shooter, All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "ShooterFireDamageType.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"
#include "ShooterDevDamageActor.generated.h"

UCLASS()
class SHOOTER_API AShooterDevDamageActor : public AActor
{
    GENERATED_BODY()

public:
    AShooterDevDamageActor();

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
    USceneComponent* SceneComponent;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Radius = 300.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Damage = 10.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool DoFullDamage = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FColor SphereColor = FColor::Red;

    //Damage types
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSubclassOf<UDamageType> DamageType;

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;
};
