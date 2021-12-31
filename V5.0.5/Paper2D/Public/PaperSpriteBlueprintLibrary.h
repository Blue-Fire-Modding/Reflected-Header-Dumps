#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE: SlateCore SlateBrush
#include "PaperSpriteBlueprintLibrary.generated.h"

class UPaperSprite;

UCLASS(BlueprintType)
class UPaperSpriteBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure)
    static FSlateBrush MakeBrushFromSprite(UPaperSprite* Sprite, int32 Width, int32 Height);
    
    UPaperSpriteBlueprintLibrary();
};

