// Shooter, All Rights Reserved


#include "Animations/ShooterEquipFinishedAnimNotify.h"

void UShooterEquipFinishedAnimNotify::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
    OnNotified.Broadcast(MeshComp);
    Super::Notify(MeshComp, Animation);
}
