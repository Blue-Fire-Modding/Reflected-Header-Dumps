#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "ARTrackedGeometry.h"
#include "EAREye.h"
#include "EARFaceBlendShape.h"
//CROSS-MODULE INCLUDE: CoreUObject Transform
#include "ARFaceGeometry.generated.h"

UCLASS()
class AUGMENTEDREALITY_API UARFaceGeometry : public UARTrackedGeometry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FVector LookAtTarget;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsTracked;
    
private:
    UPROPERTY()
    TMap<EARFaceBlendShape, float> BlendShapes;
    
public:
    UFUNCTION(BlueprintPure)
    FTransform GetWorldSpaceEyeTransform(EAREye Eye) const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetLocalSpaceEyeTransform(EAREye Eye) const;
    
    UFUNCTION(BlueprintPure)
    float GetBlendShapeValue(EARFaceBlendShape BlendShape) const;
    
    UFUNCTION(BlueprintPure)
    TMap<EARFaceBlendShape, float> GetBlendShapes() const;
    
    UARFaceGeometry();
};

