// Shooter, All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "ShooterCoreTypes.h"
#include "Components/ActorComponent.h"
#include "PlayerHealthComponent.generated.h"

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class SHOOTER_API UPlayerHealthComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    UPlayerHealthComponent();

    FOnDeath OnDeath;
    FOnHealthChanged OnHealthChanged;

    UFUNCTION(BlueprintCallable)
    bool IsDead() const { return FMath::IsNearlyZero(Health); }
    
    bool GetAutoHeal() const { return AutoHeal; }

    float GetHealth() const { return Health; }
    float GetMaxHealth() const { return MaxHealth; }
    float GetHealDelay() const { return HealDelay; }

    void SetHealth(float NewHealth);

protected:
    virtual void BeginPlay() override;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Health", meta = (ClampMin = "1.0", ClampMax = "1000.0"))
    float MaxHealth = 100.0f;

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
    FTimerHandle HealTimerHandle;

    UFUNCTION()
    void OnTakeAnyDamage(AActor* DamageActor, float Damage,
        const class UDamageType* UDamageType, class AController* InstigatedBy, AActor* DamageCauser);

    void HealUpdate();
};
