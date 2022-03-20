// Shooter, All Rights Reserved


#include "Components/PlayerHealthComponent.h"

#include "ShooterBaseCharacter.h"


// Sets default values for this component's properties
UPlayerHealthComponent::UPlayerHealthComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}


// Called when the game starts
void UPlayerHealthComponent::BeginPlay()
{
	Super::BeginPlay();
    
    //Damage subscription
    AActor* ComponentOwner = GetOwner();
    if(ComponentOwner)
    {
        ComponentOwner-> OnTakeAnyDamage.AddDynamic(this, &UPlayerHealthComponent::OnTakeAnyDamage);
    }

    SetHealth(MaxHealth);
}

void UPlayerHealthComponent::OnTakeAnyDamage(
    AActor* DamageActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy,  AActor* DamageCauser) 
{
    if(Damage <= 0.0f || isDead() || !GetWorld()) return;
    SetHealth(Health - Damage);
    
    GetWorld()->GetTimerManager().ClearTimer(HealTimerHandle);
    
    if(isDead())
    {
        OnDeath.Broadcast();
    }
    else if(AutoHeal)
    {
        GetWorld()->GetTimerManager().SetTimer(HealTimerHandle, this, &UPlayerHealthComponent::HealUpdate, HealUpdateTime, true, HealDelay);
    }
}

void UPlayerHealthComponent::HealUpdate()
{
    SetHealth(Health + HealModifier);

    if(FMath::IsNearlyEqual(Health, MaxHealth) && GetWorld())
    {
        GetWorld()->GetTimerManager().ClearTimer(HealTimerHandle);
    }
}

void UPlayerHealthComponent::SetHealth(float NewHealth)
{
    Health = FMath::Clamp(NewHealth, 0.0f, MaxHealth);
    OnHealthChanged.Broadcast(Health);
}



