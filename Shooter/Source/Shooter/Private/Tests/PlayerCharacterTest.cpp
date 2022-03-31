// Shooter, All Rights Reserved

#include "ShooterPlayerCharacter.h"
#include "Misc/AutomationTest.h"
#include "Tests/AutomationCommon.h"
#include "Tests/FTestUtils.h"

BEGIN_DEFINE_SPEC(FPlayerCharacterTest, "AutoTest.Player.Character", FTestUtils::TestsFlags)
    UWorld* World;
    AShooterPlayerCharacter* Player;
    FVector PlayerPosition;

END_DEFINE_SPEC(FPlayerCharacterTest)

void FPlayerCharacterTest::Define()
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
        
        Player->SetActorLocation(FVector::ForwardVector * 10.0f);
        TestNotNull("Check a Players creation", Player);
        //Save current position;
        PlayerPosition = Player->GetActorLocation();
    });

    LatentIt("Test Player moving", EAsyncExecution::ThreadPool, [this](const FDoneDelegate TestDone)
    {
        AsyncTask(ENamedThreads::GameThread, [this]()
        {
            FString Mess = TEXT("Pos is: ") + PlayerPosition.ToString();
            GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, Mess);
            Player->MoveForwardBackward(1.0f);
            Player->MoveForwardBackward(1.0f);
            Player->MoveForwardBackward(1.0f);
            Player->MoveForwardBackward(1.0f);
            Player->MoveForwardBackward(1.0f);
        });

        FPlatformProcess::Sleep(3.0f);

        AsyncTask(ENamedThreads::GameThread, [this]()
        {
            TestNotEqual("Compare current position of the Player and saved position", PlayerPosition, Player->GetActorLocation());
        });

        TestDone.Execute();
    });

    AfterEach([this]()
    {
        // close game map.
        //FTestUtils::Exit();
    });
}
