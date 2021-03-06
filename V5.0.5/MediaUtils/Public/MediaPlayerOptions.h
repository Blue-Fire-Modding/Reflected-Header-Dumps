#pragma once
#include "CoreMinimal.h"
#include "MediaPlayerTrackOptions.h"
#include "EMediaPlayerOptionBooleanOverride.h"
//CROSS-MODULE INCLUDE: CoreUObject Timespan
#include "MediaPlayerOptions.generated.h"

USTRUCT(BlueprintType)
struct FMediaPlayerOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FMediaPlayerTrackOptions Tracks;
    
    UPROPERTY(BlueprintReadWrite)
    FTimespan SeekTime;
    
    UPROPERTY(BlueprintReadWrite)
    EMediaPlayerOptionBooleanOverride PlayOnOpen;
    
    UPROPERTY(BlueprintReadWrite)
    EMediaPlayerOptionBooleanOverride Loop;
    
    MEDIAUTILS_API FMediaPlayerOptions();
};

