// Shooter, All Rights Reserved

#include "Tests/AutomationCommon.h"
#include "PlayerHealthComponent.h"
#include "ShooterBaseCharacter.h"

BEGIN_DEFINE_SPEC(HealthValueTest, "Shooter.TestGroup.HealthGroup", EAutomationTestFlags::ProductFilter | EAutomationTestFlags::ApplicationContextMask)
    //TSharedPtr<UPlayerHealthComponent> PlayerHealthComponent;
    //TSharedPtr<AShooterBaseCharacter> ShooterBaseCharacter;

    AShooterBaseCharacter* ShooterBaseCharacter;
    UPlayerHealthComponent* PlayerHealthComponent;

    FString Name;
END_DEFINE_SPEC(HealthValueTest)

void HealthValueTest::Define()
{
    Describe("Execute()", [this]()
    {
        BeforeEach([this]()
        {
            Name = TEXT("Sunkar");
        });
        
        It("Should name check", [this]
        {
            TestEqual("Name is equal: ", TEXT("Sunkar"), Name);
        });
    });

    Describe("A spec which is testing Health component 2", [this]()
    {
        BeforeEach([this]()
        {
            ShooterBaseCharacter = NewObject<AShooterBaseCharacter>();
            PlayerHealthComponent = NewObject<UPlayerHealthComponent>();
        });
        
        It("Player is dead check 2", [this]
        {
            TestFalse("Player is dead false: ", PlayerHealthComponent->isDead());
        });
    });
}
