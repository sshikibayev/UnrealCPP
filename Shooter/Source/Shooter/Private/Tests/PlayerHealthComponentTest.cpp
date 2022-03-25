// Shooter, All Rights Reserved

#include "ShooterPlayerCharacter.h"
#include "Misc/AutomationTest.h"
#include "Tests/AutomationCommon.h"
#include "Tests/AutomationEditorCommon.h"
#include "Tests/FTestUtils.h"

BEGIN_DEFINE_SPEC(FPlayerHealthComponentTest, "AutoTest.Player.HealthComponent", FTestUtils::TestsFlags)
    UWorld* World;
    AShooterPlayerCharacter* Player;
    float Health;
    float MaxHealth;
END_DEFINE_SPEC(FPlayerHealthComponentTest)

void FPlayerHealthComponentTest::Define()
{
    BeforeEach([this]()
    {
        //open a game map.
        static FString MapLocation = "/Game/Levels/TestMap";
        AutomationOpenMap(MapLocation);

        //test the World is obtained and tested if is valid.
        World = FTestUtils::GetWorld();
        TestNotNull("Check if World is properly created", World);

        Player = World->SpawnActor<AShooterPlayerCharacter>();
        Health = Player->GetHealthComponent()->GetHealth();
        MaxHealth = Player->GetHealthComponent()->GetMaxHealth();
    });

    //Health test section
    It("Test created Player", [this]()
    {
        TestEqual("Check current Health to be the same as MaxHealth", Health, MaxHealth);
        TestFalse("Check that player is not spawned with negative or 0 Health", MaxHealth <= 0);
        
        Player->GetHealthComponent()->SetHealth(MaxHealth * 2.0f);
        TestFalse("Check that player current Health is not higher than MaxHealth", Health > MaxHealth);
        TestFalse("Check that player is not spawned as dead", Player->GetHealthComponent()->IsDead());
    });

    //Damage section
    It("Test damage to Player", [this]
    {
        float Damage = 10.0f;
        bool IsHealthChanged = false;
        
        const float ChangeableHealth = Player->GetHealthComponent()->GetHealth();
        Player->TakeDamage(Damage, FDamageEvent{}, nullptr, nullptr);
        if (Player->GetHealthComponent()->GetHealth() < ChangeableHealth)
        {
            IsHealthChanged = true;
        }
        TestTrue("Check that player received a damage", IsHealthChanged);
        
        Damage = MaxHealth;
        Player->TakeDamage(Damage, FDamageEvent{}, nullptr, nullptr);
        TestTrue("Check that player is dead after a damage", Player->GetHealthComponent()->IsDead());
    });
    
    AfterEach([this]()
    {
        // close game map.
        FTestUtils::Exit();
    });
}
