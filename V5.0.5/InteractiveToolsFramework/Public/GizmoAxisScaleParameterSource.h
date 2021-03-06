#pragma once
#include "CoreMinimal.h"
#include "GizmoFloatParameterChange.h"
#include "GizmoBaseFloatParameterSource.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: CoreUObject Transform
#include "GizmoAxisScaleParameterSource.generated.h"

class UGizmoAxisSource;
class IGizmoAxisSource;
class UGizmoTransformSource;
class IGizmoTransformSource;

UCLASS()
class INTERACTIVETOOLSFRAMEWORK_API UGizmoAxisScaleParameterSource : public UGizmoBaseFloatParameterSource {
    GENERATED_BODY()
public:
    UPROPERTY()
    TScriptInterface<IGizmoAxisSource> AxisSource;
    
    UPROPERTY()
    TScriptInterface<IGizmoTransformSource> TransformSource;
    
    UPROPERTY()
    float ScaleMultiplier;
    
    UPROPERTY()
    float Parameter;
    
    UPROPERTY()
    FGizmoFloatParameterChange LastChange;
    
    UPROPERTY()
    FVector CurScaleAxis;
    
    UPROPERTY()
    FVector CurScaleOrigin;
    
    UPROPERTY()
    FTransform InitialTransform;
    
    UGizmoAxisScaleParameterSource();
};

