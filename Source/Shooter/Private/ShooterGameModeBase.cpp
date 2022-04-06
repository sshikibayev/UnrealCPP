// Shooter, All Rights Reserved


#include "ShooterGameModeBase.h"
#include "ShooterHUD.h"
#include "Player/ShooterPlayerController.h"

AShooterGameModeBase::AShooterGameModeBase()
{
    DefaultPawnClass = AShooterGameModeBase::StaticClass();
    PlayerControllerClass = AShooterPlayerController::StaticClass();
    HUDClass = AShooterHUD::StaticClass();
}
