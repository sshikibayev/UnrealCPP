// Shooter, All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Misc/AutomationTest.h"

/**
 * 
 */
class SHOOTER_API FTestUtils
{
public:
    static const int32 TestsFlags =  
    EAutomationTestFlags::EditorContext |
    EAutomationTestFlags::ClientContext |
    EAutomationTestFlags::ProductFilter;

    static UWorld* GetWorld();
    static void Exit();
    static bool PressKey(const FName& KeyName, EInputEvent InputEvent);

	FTestUtils();
	~FTestUtils();
};
