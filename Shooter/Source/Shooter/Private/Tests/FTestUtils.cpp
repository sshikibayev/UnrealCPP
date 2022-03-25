// Shooter, All Rights Reserved


#include "Tests/FTestUtils.h"

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

bool FTestUtils::PressKey(const FName& KeyName, EInputEvent InputEvent)
{
    if (GEngine)
    {
        if (GEngine->GameViewport)
        {
            if (FViewport* Viewport = GEngine->GameViewport->Viewport)
            {
                if (FViewportClient* ViewportClient = Viewport->GetClient())
                {
                    return ViewportClient->InputKey(FInputKeyEventArgs(Viewport, 0, KeyName, InputEvent));
                }
            }
        }
    }
    return false;
}

FTestUtils::FTestUtils()
{
}

FTestUtils::~FTestUtils()
{
}
