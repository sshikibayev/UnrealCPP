// Shooter, All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Misc/AutomationTest.h"

class SHOOTER_API FTestUtils
{
public:
    static const int32 TestsFlags =
        EAutomationTestFlags::EditorContext |
        EAutomationTestFlags::ClientContext |
        EAutomationTestFlags::ProductFilter;

    static UWorld* GetWorld();

    static void Exit();
    static void PressKey(const FKey Key, EInputEvent InputEvent);

    static bool PressActionMap(FName AxisName);
};
