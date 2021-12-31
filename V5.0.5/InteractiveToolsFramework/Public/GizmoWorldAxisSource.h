#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "GizmoAxisSource.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "GizmoWorldAxisSource.generated.h"

UCLASS()
class INTERACTIVETOOLSFRAMEWORK_API UGizmoWorldAxisSource : public UObject, public IGizmoAxisSource {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Origin;
    
    UPROPERTY()
    int32 AxisIndex;
    
    UGizmoWorldAxisSource();
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    bool HasTangentVectors() const override PURE_VIRTUAL(HasTangentVectors, return false;);
    
    UFUNCTION()
    void GetTangentVectors(FVector& TangentXOut, FVector& TangentYOut) const override PURE_VIRTUAL(GetTangentVectors,);
    
    UFUNCTION()
    FVector GetOrigin() const override PURE_VIRTUAL(GetOrigin, return FVector{};);
    
    UFUNCTION()
    FVector GetDirection() const override PURE_VIRTUAL(GetDirection, return FVector{};);
    
};

