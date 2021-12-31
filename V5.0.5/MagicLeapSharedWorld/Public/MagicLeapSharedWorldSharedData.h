#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "MagicLeapSharedWorldSharedData.generated.h"

USTRUCT(BlueprintType)
struct MAGICLEAPSHAREDWORLD_API FMagicLeapSharedWorldSharedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    TArray<FGuid> PinIDs;
    
    FMagicLeapSharedWorldSharedData();
};

