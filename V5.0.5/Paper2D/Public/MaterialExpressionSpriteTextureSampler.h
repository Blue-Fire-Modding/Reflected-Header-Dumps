#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine MaterialExpressionTextureSampleParameter2D
#include "MaterialExpressionSpriteTextureSampler.generated.h"

UCLASS(CollapseCategories)
class PAPER2D_API UMaterialExpressionSpriteTextureSampler : public UMaterialExpressionTextureSampleParameter2D {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bSampleAdditionalTextures;
    
    UPROPERTY(EditAnywhere)
    int32 AdditionalSlotIndex;
    
    UPROPERTY(EditAnywhere)
    FText SlotDisplayName;
    
    UMaterialExpressionSpriteTextureSampler();
};

