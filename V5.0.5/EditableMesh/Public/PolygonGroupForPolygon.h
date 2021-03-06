#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MeshDescription PolygonID
//CROSS-MODULE INCLUDE: MeshDescription PolygonGroupID
#include "PolygonGroupForPolygon.generated.h"

USTRUCT(BlueprintType)
struct FPolygonGroupForPolygon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FPolygonID PolygonID;
    
    UPROPERTY(BlueprintReadWrite)
    FPolygonGroupID PolygonGroupID;
    
    EDITABLEMESH_API FPolygonGroupForPolygon();
};

