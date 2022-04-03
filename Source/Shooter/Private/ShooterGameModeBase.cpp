// Shooter, All Rights Reserved


#include "ShooterGameModeBase.h"

#include "ShooterHUD.h"
#include "GameFramework/HUD.h"
#include "Player/ShooterPlayerController.h"

AShooterGameModeBase::AShooterGameModeBase()
{
    DefaultPawnClass = AShooterGameModeBase::StaticClass();
    PlayerControllerClass = AShooterPlayerController::StaticClass();
    HUDClass = AShooterHUD::StaticClass();
}
