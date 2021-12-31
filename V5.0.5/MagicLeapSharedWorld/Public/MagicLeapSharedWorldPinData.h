#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Guid
//CROSS-MODULE INCLUDE: MagicLeapARPin MagicLeapARPinState
#include "MagicLeapSharedWorldPinData.generated.h"

USTRUCT(BlueprintType)
struct MAGICLEAPSHAREDWORLD_API FMagicLeapSharedWorldPinData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FGuid PinID;
    
    UPROPERTY(BlueprintReadWrite)
    FMagicLeapARPinState PinState;
    
    FMagicLeapSharedWorldPinData();
};

