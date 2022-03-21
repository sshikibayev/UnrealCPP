// Shooter, All Rights Reserved


#include "ShooterGameModeBase.h"
#include "Player/ShooterPlayerController.h"

AShooterGameModeBase::AShooterGameModeBase()
{
    DefaultPawnClass = AShooterGameModeBase::StaticClass();
    PlayerControllerClass = AShooterPlayerController::StaticClass();
}
