// Class Paper2D.MaterialExpressionSpriteTextureSampler
// Size: 0x110 (Inherited: 0xf0)
struct UMaterialExpressionSpriteTextureSampler : UMaterialExpressionTextureSampleParameter2D {
	bool bSampleAdditionalTextures; // 0xf0(0x01)
	int32_t AdditionalSlotIndex; // 0xf4(0x04)
	FText SlotDisplayName; // 0xf8(0x18)
};

// Class Paper2D.PaperCharacter
// Size: 0x4c0 (Inherited: 0x4c0)
struct APaperCharacter : ACharacter {
	UPaperFlipbookComponent* Sprite; // 0x4b8(0x08)
};

// Class Paper2D.PaperFlipbook
// Size: 0x50 (Inherited: 0x28)
struct UPaperFlipbook : UObject {
	float FramesPerSecond; // 0x28(0x04)
	TArray<FPaperFlipbookKeyFrame> KeyFrames; // 0x30(0x10)
	UMaterialInterface* DefaultMaterial; // 0x40(0x08)
	enum class EFlipbookCollisionMode CollisionSource; // 0x48(0x01)

	bool IsValidKeyFrameIndex(int32_t Index);
	float GetTotalDuration();
	UPaperSprite* GetSpriteAtTime(float Time, bool bClampToEnds);
	UPaperSprite* GetSpriteAtFrame(int32_t FrameIndex);
	int32_t GetNumKeyFrames();
	int32_t GetNumFrames();
	int32_t GetKeyFrameIndexAtTime(float Time, bool bClampToEnds);
};

// Class Paper2D.PaperFlipbookActor
// Size: 0x228 (Inherited: 0x220)
struct APaperFlipbookActor : AActor {
	UPaperFlipbookComponent* RenderComponent; // 0x220(0x08)
};

// Class Paper2D.PaperFlipbookComponent
// Size: 0x480 (Inherited: 0x430)
struct UPaperFlipbookComponent : UMeshComponent {
	UPaperFlipbook* SourceFlipbook; // 0x430(0x08)
	UMaterialInterface* Material; // 0x438(0x08)
	float PlayRate; // 0x440(0x04)
	char bLooping : 1; // 0x444(0x01)
	char bReversePlayback : 1; // 0x444(0x01)
	char bPlaying : 1; // 0x444(0x01)
	float AccumulatedTime; // 0x448(0x04)
	int32_t CachedFrameIndex; // 0x44c(0x04)
	FLinearColor SpriteColor; // 0x450(0x10)
	UBodySetup* CachedBodySetup; // 0x460(0x08)
	FMulticastInlineDelegate OnFinishedPlaying; // 0x468(0x10)

	void Stop();
	void SetSpriteColor(FLinearColor NewColor);
	void SetPlayRate(float NewRate);
	void SetPlaybackPositionInFrames(int32_t NewFramePosition, bool bFireEvents);
	void SetPlaybackPosition(float NewPosition, bool bFireEvents);
	void SetNewTime(float NewTime);
	void SetLooping(bool bNewLooping);
	bool SetFlipbook(UPaperFlipbook* NewFlipbook);
	void ReverseFromEnd();
	void Reverse();
	void PlayFromStart();
	void Play();
	void OnRep_SourceFlipbook(UPaperFlipbook* OldFlipbook);
	bool IsReversing();
	bool IsPlaying();
	bool IsLooping();
	float GetPlayRate();
	int32_t GetPlaybackPositionInFrames();
	float GetPlaybackPosition();
	int32_t GetFlipbookLengthInFrames();
	float GetFlipbookLength();
	float GetFlipbookFramerate();
	UPaperFlipbook* GetFlipbook();
};

// Class Paper2D.PaperGroupedSpriteActor
// Size: 0x228 (Inherited: 0x220)
struct APaperGroupedSpriteActor : AActor {
	UPaperGroupedSpriteComponent* RenderComponent; // 0x220(0x08)
};

// Class Paper2D.PaperGroupedSpriteComponent
// Size: 0x460 (Inherited: 0x430)
struct UPaperGroupedSpriteComponent : UMeshComponent {
	TArray<UMaterialInterface*> InstanceMaterials; // 0x430(0x10)
	TArray<FSpriteInstanceData> PerInstanceSpriteData; // 0x440(0x10)

	bool UpdateInstanceTransform(int32_t InstanceIndex, FTransform NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport);
	bool UpdateInstanceColor(int32_t InstanceIndex, FLinearColor NewInstanceColor, bool bMarkRenderStateDirty);
	void SortInstancesAlongAxis(FVector WorldSpaceSortAxis);
	bool RemoveInstance(int32_t InstanceIndex);
	bool GetInstanceTransform(int32_t InstanceIndex, FTransform OutInstanceTransform, bool bWorldSpace);
	int32_t GetInstanceCount();
	void ClearInstances();
	int32_t AddInstance(FTransform Transform, UPaperSprite* Sprite, bool bWorldSpace, FLinearColor Color);
};

// Class Paper2D.PaperRuntimeSettings
// Size: 0x30 (Inherited: 0x28)
struct UPaperRuntimeSettings : UObject {
	bool bEnableSpriteAtlasGroups; // 0x28(0x01)
	bool bEnableTerrainSplineEditing; // 0x29(0x01)
	bool bResizeSpriteDataToMatchTextures; // 0x2a(0x01)
};

// Class Paper2D.PaperSprite
// Size: 0xa8 (Inherited: 0x28)
struct UPaperSprite : UObject {
	TArray<UTexture*> AdditionalSourceTextures; // 0x38(0x10)
	FVector2D BakedSourceUV; // 0x48(0x08)
	FVector2D BakedSourceDimension; // 0x50(0x08)
	UTexture2D* BakedSourceTexture; // 0x58(0x08)
	UMaterialInterface* DefaultMaterial; // 0x60(0x08)
	UMaterialInterface* AlternateMaterial; // 0x68(0x08)
	TArray<FPaperSpriteSocket> Sockets; // 0x70(0x10)
	enum class ESpriteCollisionMode SpriteCollisionDomain; // 0x80(0x01)
	float PixelsPerUnrealUnit; // 0x84(0x04)
	UBodySetup* BodySetup; // 0x88(0x08)
	int32_t AlternateMaterialSplitIndex; // 0x90(0x04)
	TArray<FVector4> BakedRenderData; // 0x98(0x10)
};

// Class Paper2D.PaperSpriteActor
// Size: 0x228 (Inherited: 0x220)
struct APaperSpriteActor : AActor {
	UPaperSpriteComponent* RenderComponent; // 0x220(0x08)
};

// Class Paper2D.PaperSpriteAtlas
// Size: 0x28 (Inherited: 0x28)
struct UPaperSpriteAtlas : UObject {
};

// Class Paper2D.PaperSpriteBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UPaperSpriteBlueprintLibrary : UBlueprintFunctionLibrary {

	FSlateBrush MakeBrushFromSprite(UPaperSprite* Sprite, int32_t Width, int32_t Height);
};

// Class Paper2D.PaperSpriteComponent
// Size: 0x450 (Inherited: 0x430)
struct UPaperSpriteComponent : UMeshComponent {
	UPaperSprite* SourceSprite; // 0x430(0x08)
	UMaterialInterface* MaterialOverride; // 0x438(0x08)
	FLinearColor SpriteColor; // 0x440(0x10)

	void SetSpriteColor(FLinearColor NewColor);
	bool SetSprite(UPaperSprite* NewSprite);
	UPaperSprite* GetSprite();
};

// Class Paper2D.PaperTerrainActor
// Size: 0x238 (Inherited: 0x220)
struct APaperTerrainActor : AActor {
	USceneComponent* DummyRoot; // 0x220(0x08)
	UPaperTerrainSplineComponent* SplineComponent; // 0x228(0x08)
	UPaperTerrainComponent* RenderComponent; // 0x230(0x08)
};

// Class Paper2D.PaperTerrainComponent
// Size: 0x460 (Inherited: 0x410)
struct UPaperTerrainComponent : UPrimitiveComponent {
	UPaperTerrainMaterial* TerrainMaterial; // 0x408(0x08)
	bool bClosedSpline; // 0x410(0x01)
	bool bFilledSpline; // 0x411(0x01)
	UPaperTerrainSplineComponent* AssociatedSpline; // 0x418(0x08)
	int32_t RandomSeed; // 0x420(0x04)
	float SegmentOverlapAmount; // 0x424(0x04)
	FLinearColor TerrainColor; // 0x428(0x10)
	int32_t ReparamStepsPerSegment; // 0x438(0x04)
	enum class ESpriteCollisionMode SpriteCollisionDomain; // 0x43c(0x01)
	float CollisionThickness; // 0x440(0x04)
	UBodySetup* CachedBodySetup; // 0x448(0x08)

	void SetTerrainColor(FLinearColor NewColor);
};

// Class Paper2D.PaperTerrainMaterial
// Size: 0x48 (Inherited: 0x30)
struct UPaperTerrainMaterial : UDataAsset {
	TArray<FPaperTerrainMaterialRule> Rules; // 0x30(0x10)
	UPaperSprite* InteriorFill; // 0x40(0x08)
};

// Class Paper2D.PaperTerrainSplineComponent
// Size: 0x510 (Inherited: 0x500)
struct UPaperTerrainSplineComponent : USplineComponent {
};

// Class Paper2D.PaperTileLayer
// Size: 0x98 (Inherited: 0x28)
struct UPaperTileLayer : UObject {
	FText LayerName; // 0x28(0x18)
	int32_t LayerWidth; // 0x40(0x04)
	int32_t LayerHeight; // 0x44(0x04)
	char bHiddenInGame : 1; // 0x48(0x01)
	char bLayerCollides : 1; // 0x48(0x01)
	char bOverrideCollisionThickness : 1; // 0x48(0x01)
	char bOverrideCollisionOffset : 1; // 0x48(0x01)
	float CollisionThicknessOverride; // 0x4c(0x04)
	float CollisionOffsetOverride; // 0x50(0x04)
	FLinearColor LayerColor; // 0x54(0x10)
	int32_t AllocatedWidth; // 0x64(0x04)
	int32_t AllocatedHeight; // 0x68(0x04)
	TArray<FPaperTileInfo> AllocatedCells; // 0x70(0x10)
	UPaperTileSet* TileSet; // 0x80(0x08)
	TArray<int32_t> AllocatedGrid; // 0x88(0x10)
};

// Class Paper2D.PaperTileMap
// Size: 0xa8 (Inherited: 0x28)
struct UPaperTileMap : UObject {
	int32_t MapWidth; // 0x28(0x04)
	int32_t MapHeight; // 0x2c(0x04)
	int32_t TileWidth; // 0x30(0x04)
	int32_t TileHeight; // 0x34(0x04)
	float PixelsPerUnrealUnit; // 0x38(0x04)
	float SeparationPerTileX; // 0x3c(0x04)
	float SeparationPerTileY; // 0x40(0x04)
	float SeparationPerLayer; // 0x44(0x04)
	TSoftObjectPtr<UPaperTileSet> SelectedTileSet; // 0x48(0x28)
	UMaterialInterface* Material; // 0x70(0x08)
	TArray<UPaperTileLayer*> TileLayers; // 0x78(0x10)
	float CollisionThickness; // 0x88(0x04)
	enum class ESpriteCollisionMode SpriteCollisionDomain; // 0x8c(0x01)
	enum class ETileMapProjectionMode ProjectionMode; // 0x8d(0x01)
	int32_t HexSideLength; // 0x90(0x04)
	UBodySetup* BodySetup; // 0x98(0x08)
	int32_t LayerNameIndex; // 0xa0(0x04)
};

// Class Paper2D.PaperTileMapActor
// Size: 0x228 (Inherited: 0x220)
struct APaperTileMapActor : AActor {
	UPaperTileMapComponent* RenderComponent; // 0x220(0x08)
};

// Class Paper2D.PaperTileMapComponent
// Size: 0x480 (Inherited: 0x430)
struct UPaperTileMapComponent : UMeshComponent {
	int32_t MapWidth; // 0x430(0x04)
	int32_t MapHeight; // 0x434(0x04)
	int32_t TileWidth; // 0x438(0x04)
	int32_t TileHeight; // 0x43c(0x04)
	UPaperTileSet* DefaultLayerTileSet; // 0x440(0x08)
	UMaterialInterface* Material; // 0x448(0x08)
	TArray<UPaperTileLayer*> TileLayers; // 0x450(0x10)
	FLinearColor TileMapColor; // 0x460(0x10)
	int32_t UseSingleLayerIndex; // 0x470(0x04)
	bool bUseSingleLayer; // 0x474(0x01)
	UPaperTileMap* TileMap; // 0x478(0x08)

	void SetTileMapColor(FLinearColor NewColor);
	bool SetTileMap(UPaperTileMap* NewTileMap);
	void SetTile(int32_t X, int32_t Y, int32_t Layer, FPaperTileInfo NewValue);
	void SetLayerColor(FLinearColor NewColor, int32_t Layer);
	void SetLayerCollision(int32_t Layer, bool bHasCollision, bool bOverrideThickness, float CustomThickness, bool bOverrideOffset, float CustomOffset, bool bRebuildCollision);
	void SetDefaultCollisionThickness(float Thickness, bool bRebuildCollision);
	void ResizeMap(int32_t NewWidthInTiles, int32_t NewHeightInTiles);
	void RebuildCollision();
	bool OwnsTileMap();
	void MakeTileMapEditable();
	void GetTilePolygon(int32_t TileX, int32_t TileY, TArray<FVector> Points, int32_t LayerIndex, bool bWorldSpace);
	FLinearColor GetTileMapColor();
	FVector GetTileCornerPosition(int32_t TileX, int32_t TileY, int32_t LayerIndex, bool bWorldSpace);
	FVector GetTileCenterPosition(int32_t TileX, int32_t TileY, int32_t LayerIndex, bool bWorldSpace);
	FPaperTileInfo GetTile(int32_t X, int32_t Y, int32_t Layer);
	void GetMapSize(int32_t MapWidth, int32_t MapHeight, int32_t NumLayers);
	FLinearColor GetLayerColor(int32_t Layer);
	void CreateNewTileMap(int32_t MapWidth, int32_t MapHeight, int32_t TileWidth, int32_t TileHeight, float PixelsPerUnrealUnit, bool bCreateLayer);
	UPaperTileLayer* AddNewLayer();
};

// Class Paper2D.PaperTileSet
// Size: 0xa8 (Inherited: 0x28)
struct UPaperTileSet : UObject {
	FIntPoint TileSize; // 0x28(0x08)
	UTexture2D* TileSheet; // 0x30(0x08)
	TArray<UTexture*> AdditionalSourceTextures; // 0x38(0x10)
	FIntMargin BorderMargin; // 0x48(0x10)
	FIntPoint PerTileSpacing; // 0x58(0x08)
	FIntPoint DrawingOffset; // 0x60(0x08)
	int32_t WidthInTiles; // 0x68(0x04)
	int32_t HeightInTiles; // 0x6c(0x04)
	int32_t AllocatedWidth; // 0x70(0x04)
	int32_t AllocatedHeight; // 0x74(0x04)
	TArray<FPaperTileMetadata> PerTileData; // 0x78(0x10)
	TArray<FPaperTileSetTerrain> Terrains; // 0x88(0x10)
	int32_t TileWidth; // 0x98(0x04)
	int32_t TileHeight; // 0x9c(0x04)
	int32_t Margin; // 0xa0(0x04)
	int32_t Spacing; // 0xa4(0x04)
};

// Class Paper2D.TileMapBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UTileMapBlueprintLibrary : UBlueprintFunctionLibrary {

	FPaperTileInfo MakeTile(int32_t TileIndex, UPaperTileSet* TileSet, bool bFlipH, bool bFlipV, bool bFlipD);
	FName GetTileUserData(FPaperTileInfo Tile);
	FTransform GetTileTransform(FPaperTileInfo Tile);
	void BreakTile(FPaperTileInfo Tile, int32_t TileIndex, UPaperTileSet* TileSet, bool bFlipH, bool bFlipV, bool bFlipD);
};

