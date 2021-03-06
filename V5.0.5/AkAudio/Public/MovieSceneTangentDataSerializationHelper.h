#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ERichCurveTangentWeightMode
#include "MovieSceneTangentDataSerializationHelper.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneTangentDataSerializationHelper {
    GENERATED_BODY()
public:
    UPROPERTY()
    float ArriveTangent;
    
    UPROPERTY()
    float LeaveTangent;
    
    UPROPERTY()
    TEnumAsByte<ERichCurveTangentWeightMode> TangentWeightMode;
    
    UPROPERTY()
    float ArriveTangentWeight;
    
    UPROPERTY()
    float LeaveTangentWeight;
    
    AKAUDIO_API FMovieSceneTangentDataSerializationHelper();
};

