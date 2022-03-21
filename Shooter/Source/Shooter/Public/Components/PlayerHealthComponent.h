// Shooter, All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerHealthComponent.generated.h"

DECLARE_MULTICAST_DELEGATE(FOnDeath);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnHealthChanged, float);

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class SHOOTER_API UPlayerHealthComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    UPlayerHealthComponent();

    FOnDeath OnDeath;
    FOnHealthChanged OnHealthChanged;

    UFUNCTION(BlueprintCallable)
    bool isDead() const { return FMath::IsNearlyZero(Health); }

    float GetHealth() const { return Health; }

protected:
    // Called when the game starts
    virtual void BeginPlay() override;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Health", meta = (ClampMin = "1.0", ClampMax = "1000.0"))
    float MaxHealth = 100.0f;

    //Heal properties;
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Heal")
    bool AutoHeal = true;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Heal", meta = (ClampMin = "0.01", ClampMax = "1000.0"), meta = (EditCondition = "AutoHeal"))
    float HealUpdateTime = 0.3f;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Heal", meta = (ClampMin = "0.1", ClampMax = "1000.0"), meta = (EditCondition = "AutoHeal"))
    float HealDelay = 3.0f;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Heal", meta = (ClampMin = "0.1", ClampMax = "1000.0"), meta = (EditCondition = "AutoHeal"))
    float HealModifier = 1.0f;

private:
    float Health = 0.0f;

    //Heal prop
    FTimerHandle HealTimerHandle;


    UFUNCTION()
    void OnTakeAnyDamage(AActor* DamageActor, float Damage,
        const class UDamageType* UDamageType, class AController* InstigatedBy, AActor* DamageCauser);

    void HealUpdate();

    void SetHealth(float NewHealth);
};
