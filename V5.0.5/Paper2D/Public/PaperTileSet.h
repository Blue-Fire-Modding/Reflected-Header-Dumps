#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
//CROSS-MODULE INCLUDE: CoreUObject IntPoint
#include "PaperTileSetTerrain.h"
#include "IntMargin.h"
#include "PaperTileMetadata.h"
#include "PaperTileSet.generated.h"

class UTexture2D;
class UTexture;

UCLASS(BlueprintType)
class PAPER2D_API UPaperTileSet : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntPoint TileSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* TileSheet;
    
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    TArray<UTexture*> AdditionalSourceTextures;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntMargin BorderMargin;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntPoint PerTileSpacing;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntPoint DrawingOffset;
    
    UPROPERTY()
    int32 WidthInTiles;
    
    UPROPERTY()
    int32 HeightInTiles;
    
    UPROPERTY()
    int32 AllocatedWidth;
    
    UPROPERTY()
    int32 AllocatedHeight;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FPaperTileMetadata> PerTileData;
    
    UPROPERTY()
    TArray<FPaperTileSetTerrain> Terrains;
    
    UPROPERTY()
    int32 TileWidth;
    
    UPROPERTY()
    int32 TileHeight;
    
    UPROPERTY()
    int32 Margin;
    
    UPROPERTY()
    int32 Spacing;
    
public:
    UPaperTileSet();
};

