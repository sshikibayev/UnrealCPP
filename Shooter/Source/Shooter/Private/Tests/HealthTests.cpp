// Shooter, All Rights Reserved

#include "ShooterBaseCharacter.h"
#include "ShooterPlayerCharacter.h"
#include "Tests/AutomationEditorCommon.h"
#include "CoreMinimal.h"
#include "Misc/AutomationTest.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(UPlayerHealth, "Character.Player.Health2", EAutomationTestFlags::EditorContext | EAutomationTestFlags::ProductFilter)

bool UPlayerHealth::RunTest(const FString& Parameters)
{
    UWorld* World = FAutomationEditorCommonUtils::CreateNewMap();

    {
        //AShooterBaseCharacter* BaseCharacter = World->SpawnActor<AShooterBaseCharacter>();
        float test = 20.0f;
        if(test == 10.0f)
        {
            AddWarning(TEXT("New spawned character should spawn with Max health and equal to 40"));
        }
        else
        {
            AddError(TEXT("New spawned character should spawn with Max health and equal to not 100"));
        }
       
        //BaseCharacter->Destroy();
    }

    return true;
}
