#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
//CROSS-MODULE INCLUDE: Engine Interface_CollisionDataProvider
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
//CROSS-MODULE INCLUDE: Engine SlateTextureAtlasInterface
#include "PaperSpriteSocket.h"
#include "ESpriteCollisionMode.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector4
#include "PaperSprite.generated.h"

class UTexture2D;
class UMaterialInterface;
class UTexture;
class UBodySetup;

UCLASS(BlueprintType)
class PAPER2D_API UPaperSprite : public UObject, public IInterface_CollisionDataProvider, public ISlateTextureAtlasInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    TArray<UTexture*> AdditionalSourceTextures;
    
    UPROPERTY()
    FVector2D BakedSourceUV;
    
    UPROPERTY()
    FVector2D BakedSourceDimension;
    
    UPROPERTY()
    UTexture2D* BakedSourceTexture;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* DefaultMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* AlternateMaterial;
    
    UPROPERTY(EditAnywhere)
    TArray<FPaperSpriteSocket> Sockets;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESpriteCollisionMode::Type> SpriteCollisionDomain;
    
    UPROPERTY(EditAnywhere)
    float PixelsPerUnrealUnit;
    
public:
    UPROPERTY(EditAnywhere)
    UBodySetup* BodySetup;
    
    UPROPERTY()
    int32 AlternateMaterialSplitIndex;
    
    UPROPERTY()
    TArray<FVector4> BakedRenderData;
    
    UPaperSprite();
    
    // Fix for true pure virtual functions not being implemented
};

