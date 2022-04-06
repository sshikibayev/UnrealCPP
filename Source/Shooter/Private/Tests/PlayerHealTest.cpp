#include "PlayerHealthComponent.h"
#include "Misc/AutomationTest.h"
#include "ShooterPlayerCharacter.h"
#include "Tests/AutomationCommon.h"
#include "Tests/FTestUtils.h"

BEGIN_DEFINE_SPEC(FPlayerHealTest, "AutoTest.Player.HealthComponent.Heal", FTestUtils::TestsFlags)
    UWorld* World;
    AShooterPlayerCharacter* Player;
    float Health;
    float ChangeableHealth;
    float MaxHealth;
    float SleepDelay;
END_DEFINE_SPEC(FPlayerHealTest)

void FPlayerHealTest::Define()
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
        ChangeableHealth = Health;
        SleepDelay = Player->GetHealthComponent()->GetHealDelay() + 1.0f;
    });

    LatentIt("Test that player is healing", EAsyncExecution::ThreadPool, [this](const FDoneDelegate TestDone)
    {
        AsyncTask(ENamedThreads::GameThread, [this]()
        {
            //Do damage
            constexpr float Damage = 10.0f;
            bool IsHealthChanged = false;

            Player->TakeDamage(Damage, FDamageEvent{}, nullptr, nullptr);
            ChangeableHealth = Player->GetHealthComponent()->GetHealth();
            TestFalse("Check that player is still alive after damage", Player->GetHealthComponent()->IsDead());
            if (Player->GetHealthComponent()->GetHealth() < Health)
            {
                IsHealthChanged = true;
            }
            TestTrue("Check that player received a damage", IsHealthChanged);
        });

        FPlatformProcess::Sleep(SleepDelay);

        AsyncTask(ENamedThreads::GameThread, [this]()
        {
            //Check that Auto heal is enabled;
            TestTrue("Check that player toggled on an auto-heal", Player->GetHealthComponent()->GetAutoHeal());

            bool IsHealthChanged = false;
            if (Player->GetHealthComponent()->GetHealth() > ChangeableHealth || Player->GetHealthComponent()->GetHealth() == MaxHealth)
            {
                IsHealthChanged = true;
            }
            TestTrue("Check that Health become bigger after a delay", IsHealthChanged);
        });

        TestDone.Execute();
    });

    AfterEach([this]()
    {
        FTestUtils::Exit();
    });
}
