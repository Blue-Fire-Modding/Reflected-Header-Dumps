#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Transform
#include "MagicLeapSharedWorldAlignmentTransforms.generated.h"

USTRUCT(BlueprintType)
struct MAGICLEAPSHAREDWORLD_API FMagicLeapSharedWorldAlignmentTransforms {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    TArray<FTransform> AlignmentTransforms;
    
    FMagicLeapSharedWorldAlignmentTransforms();
};

