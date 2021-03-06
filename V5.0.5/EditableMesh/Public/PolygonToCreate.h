#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MeshDescription PolygonGroupID
#include "VertexAndAttributes.h"
#include "EPolygonEdgeHardness.h"
//CROSS-MODULE INCLUDE: MeshDescription PolygonID
#include "PolygonToCreate.generated.h"

USTRUCT(BlueprintType)
struct FPolygonToCreate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FPolygonGroupID PolygonGroupID;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FVertexAndAttributes> PerimeterVertices;
    
    UPROPERTY(BlueprintReadWrite)
    FPolygonID OriginalPolygonID;
    
    UPROPERTY(BlueprintReadWrite)
    EPolygonEdgeHardness PolygonEdgeHardness;
    
    EDITABLEMESH_API FPolygonToCreate();
};

