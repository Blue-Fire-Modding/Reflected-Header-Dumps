#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "GizmoTransformSource.h"
//CROSS-MODULE INCLUDE: CoreUObject Transform
#include "GizmoBaseTransformSource.generated.h"

UCLASS()
class INTERACTIVETOOLSFRAMEWORK_API UGizmoBaseTransformSource : public UObject, public IGizmoTransformSource {
    GENERATED_BODY()
public:
    UGizmoBaseTransformSource();
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void SetTransform(const FTransform& NewTransform) override PURE_VIRTUAL(SetTransform,);
    
    UFUNCTION()
    FTransform GetTransform() const override PURE_VIRTUAL(GetTransform, return FTransform{};);
    
};

