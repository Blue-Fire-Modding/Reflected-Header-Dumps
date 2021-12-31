#pragma once
#include "CoreMinimal.h"
#include "LandscapeSplineSegmentConnection.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
//CROSS-MODULE INCLUDE: CoreUObject InterpCurveVector
#include "LandscapeSplineInterpPoint.h"
//CROSS-MODULE INCLUDE: CoreUObject Box
#include "LandscapeSplineSegment.generated.h"

class USplineMeshComponent;

UCLASS(MinimalAPI, Within=LandscapeSplinesComponent)
class ULandscapeSplineSegment : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, EditFixedSize)
    FLandscapeSplineSegmentConnection Connections[2];
    
protected:
    UPROPERTY()
    FInterpCurveVector SplineInfo;
    
    UPROPERTY()
    TArray<FLandscapeSplineInterpPoint> Points;
    
    UPROPERTY()
    FBox Bounds;
    
    UPROPERTY(Export, TextExportTransient)
    TArray<USplineMeshComponent*> LocalMeshComponents;
    
public:
    ULandscapeSplineSegment();
};

