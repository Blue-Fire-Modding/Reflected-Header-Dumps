#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "AkTriangle.h"
#include "AkAcousticSurface.h"
#include "AkGeometryData.generated.h"

class UPhysicalMaterial;

USTRUCT(BlueprintType)
struct FAkGeometryData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FVector> Vertices;
    
    UPROPERTY()
    TArray<FAkAcousticSurface> Surfaces;
    
    UPROPERTY()
    TArray<FAkTriangle> Triangles;
    
    UPROPERTY()
    TArray<UPhysicalMaterial*> ToOverrideAcousticTexture;
    
    UPROPERTY()
    TArray<UPhysicalMaterial*> ToOverrideOcclusion;
    
    AKAUDIO_API FAkGeometryData();
};

