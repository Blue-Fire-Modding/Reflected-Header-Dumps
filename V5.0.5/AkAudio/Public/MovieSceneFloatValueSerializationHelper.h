#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ERichCurveTangentMode
//CROSS-MODULE INCLUDE: Engine ERichCurveInterpMode
#include "MovieSceneTangentDataSerializationHelper.h"
#include "MovieSceneFloatValueSerializationHelper.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneFloatValueSerializationHelper {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Value;
    
    UPROPERTY()
    TEnumAsByte<ERichCurveInterpMode> InterpMode;
    
    UPROPERTY()
    TEnumAsByte<ERichCurveTangentMode> TangentMode;
    
    UPROPERTY()
    FMovieSceneTangentDataSerializationHelper Tangent;
    
    AKAUDIO_API FMovieSceneFloatValueSerializationHelper();
};

