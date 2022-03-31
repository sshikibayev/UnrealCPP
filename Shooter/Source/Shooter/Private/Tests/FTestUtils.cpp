// Shooter, All Rights Reserved


#include "Tests/FTestUtils.h"

#include "GameFramework/InputSettings.h"
#include "GameFramework/PlayerInput.h"
#include "Kismet/GameplayStatics.h"


UWorld* FTestUtils::GetWorld()
{
    if (GEngine)
    {
        if (const FWorldContext* WorldContext = GEngine->GetWorldContextFromPIEInstance(0))
        {
            return WorldContext->World();
        }
    }
    return nullptr;
}

void FTestUtils::Exit()
{
    if (const UWorld* World = GetWorld())
    {
        if (APlayerController* TargetPC = UGameplayStatics::GetPlayerController(World, 0))
        {
            TargetPC->ConsoleCommand(TEXT("Exit"), true);
        }
    }
}

void FTestUtils::PressKey(const FKey Key, EInputEvent InputEvent)
{
    if (GEngine)
    {
        if (GEngine->GameViewport)
        {
            if (FViewport* Viewport = GEngine->GameViewport->Viewport)
            {
                if (FViewportClient* ViewportClient = Viewport->GetClient())
                {
                    ViewportClient->InputKey(GEngine->GameViewport->Viewport, 0, Key, InputEvent);
                }
            }
        }
    }
}

bool FTestUtils::PressActionMap(FName AxisName)
{
    TArray<FInputAxisKeyMapping> AxisMapping;
    
    UInputSettings::GetInputSettings()->GetAxisMappingByName(AxisName, AxisMapping);
    for(const auto Axis : AxisMapping)
    {
        const float HoldingTime = UGameplayStatics::GetPlayerController(GetWorld(), 0)->GetInputKeyTimeDown(Axis.Key);
        
        if (HoldingTime > 0)
        {
            return true;
        }
    }
    return false;
}

AActor* FTestUtils::PlayerCreation()
{
    // if(PlayerToSpawn)
    // {
    //     if(GetWorld())
    //     {
    //         const FVector PlayerLocation = FVector::ZeroVector;
    //         const FRotator PlayerRotation = FRotator::ZeroRotator;
    //         AActor* Player = GetWorld()->SpawnActor<AActor>(PlayerLocation, PlayerRotation);
    //         return Player;
    //     }
    // }
    
    return nullptr;
}
