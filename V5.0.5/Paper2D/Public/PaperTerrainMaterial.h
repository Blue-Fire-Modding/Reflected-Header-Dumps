#pragma once
#include "CoreMinimal.h"
#include "PaperTerrainMaterialRule.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "PaperTerrainMaterial.generated.h"

class UPaperSprite;

UCLASS()
class PAPER2D_API UPaperTerrainMaterial : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FPaperTerrainMaterialRule> Rules;
    
    UPROPERTY(EditAnywhere)
    UPaperSprite* InteriorFill;
    
    UPaperTerrainMaterial();
};

