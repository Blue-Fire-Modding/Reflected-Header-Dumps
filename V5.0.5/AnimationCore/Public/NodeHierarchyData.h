#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Transform
#include "NodeObject.h"
#include "NodeHierarchyData.generated.h"

USTRUCT(BlueprintType)
struct FNodeHierarchyData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FNodeObject> Nodes;
    
    UPROPERTY()
    TArray<FTransform> Transforms;
    
    UPROPERTY()
    TMap<FName, int32> NodeNameToIndexMapping;
    
    ANIMATIONCORE_API FNodeHierarchyData();
};

