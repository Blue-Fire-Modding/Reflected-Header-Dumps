#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MeshDescription PolygonID
#include "VertexAttributesForPolygonHole.h"
#include "MeshElementAttributeList.h"
#include "VertexAttributesForPolygon.generated.h"

USTRUCT(BlueprintType)
struct FVertexAttributesForPolygon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FPolygonID PolygonID;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FMeshElementAttributeList> PerimeterVertexAttributeLists;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FVertexAttributesForPolygonHole> VertexAttributeListsForEachHole;
    
    EDITABLEMESH_API FVertexAttributesForPolygon();
};

