// Shooter, All Rights Reserved


#include "Tests/FTestUtils.h"

#include "GameFramework/InputSettings.h"
#include "GameFramework/PlayerInput.h"
#include "Kismet/GameplayStatics.h"


UWorld* FTestUtils::GetWorld()
{
    check(GEngine)

    if (const FWorldContext* WorldContext = GEngine->GetWorldContextFromPIEInstance(0))
    {
        return WorldContext->World();
    }

    return nullptr;
}

void FTestUtils::Exit()
{
    check(GetWorld());
    const UWorld* World = GetWorld();
    if (APlayerController* TargetPC = UGameplayStatics::GetPlayerController(World, 0))
    {
        TargetPC->ConsoleCommand(TEXT("Exit"), true);
    }
}

void FTestUtils::PressKey(const FKey Key, EInputEvent InputEvent)
{
    check(GEngine)
    const FViewport* Viewport = GEngine->GameViewport->Viewport;
    if (FViewportClient* ViewportClient = Viewport->GetClient())
    {
        ViewportClient->InputKey(GEngine->GameViewport->Viewport, 0, Key, InputEvent);
    }
}

bool FTestUtils::PressActionMap(FName AxisName)
{
    TArray<FInputAxisKeyMapping> AxisMapping;
    UInputSettings::GetInputSettings()->GetAxisMappingByName(AxisName, AxisMapping);
    for (const auto Axis : AxisMapping)
    {
        const float HoldingTime = UGameplayStatics::GetPlayerController(GetWorld(), 0)->GetInputKeyTimeDown(Axis.Key);

        if (HoldingTime > 0)
        {
            return true;
        }
    }
    return false;
}
