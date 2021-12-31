#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine SaveGame
//CROSS-MODULE INCLUDE: CoreUObject Guid
//CROSS-MODULE INCLUDE: CoreUObject Transform
#include "MagicLeapARPinSaveGame.generated.h"

UCLASS()
class MAGICLEAPARPIN_API UMagicLeapARPinSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FGuid PinnedID;
    
    UPROPERTY(VisibleAnywhere)
    FTransform ComponentWorldTransform;
    
    UPROPERTY(VisibleAnywhere)
    FTransform PinTransform;
    
    UMagicLeapARPinSaveGame();
};

