#pragma once
#include "CoreMinimal.h"
#include "GrassInput.h"
//CROSS-MODULE INCLUDE: Engine MaterialExpressionCustomOutput
#include "MaterialExpressionLandscapeGrassOutput.generated.h"

UCLASS(CollapseCategories)
class LANDSCAPE_API UMaterialExpressionLandscapeGrassOutput : public UMaterialExpressionCustomOutput {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FGrassInput> GrassTypes;
    
    UMaterialExpressionLandscapeGrassOutput();
};

