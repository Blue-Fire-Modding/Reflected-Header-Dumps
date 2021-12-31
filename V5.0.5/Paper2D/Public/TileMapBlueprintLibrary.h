#pragma once
#include "CoreMinimal.h"
#include "PaperTileInfo.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE: CoreUObject Transform
#include "TileMapBlueprintLibrary.generated.h"

class UPaperTileSet;

UCLASS(BlueprintType)
class UTileMapBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure)
    static FPaperTileInfo MakeTile(int32 TileIndex, UPaperTileSet* TileSet, bool bFlipH, bool bFlipV, bool bFlipD);
    
    UFUNCTION(BlueprintPure)
    static FName GetTileUserData(FPaperTileInfo Tile);
    
    UFUNCTION(BlueprintPure)
    static FTransform GetTileTransform(FPaperTileInfo Tile);
    
    UFUNCTION(BlueprintPure)
    static void BreakTile(FPaperTileInfo Tile, int32& TileIndex, UPaperTileSet*& TileSet, bool& bFlipH, bool& bFlipV, bool& bFlipD);
    
    UTileMapBlueprintLibrary();
};

