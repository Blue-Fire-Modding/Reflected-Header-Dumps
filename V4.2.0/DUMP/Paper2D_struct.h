// Enum Paper2D.EFlipbookCollisionMode
enum class EFlipbookCollisionMode : uint8 {
	NoCollision = 0,
	FirstFrameCollision = 1,
	EachFrameCollision = 2,
	EFlipbookCollisionMode_MAX = 3
};

// Enum Paper2D.EPaperSpriteAtlasPadding
enum class EPaperSpriteAtlasPadding : uint8 {
	DilateBorder = 0,
	PadWithZero = 1,
	EPaperSpriteAtlasPadding_MAX = 2
};

// Enum Paper2D.ETileMapProjectionMode
enum class ETileMapProjectionMode : uint8 {
	Orthogonal = 0,
	IsometricDiamond = 1,
	IsometricStaggered = 2,
	HexagonalStaggered = 3,
	ETileMapProjectionMode_MAX = 4
};

// Enum Paper2D.ESpritePivotMode
enum class ESpritePivotMode : uint8 {
	Top_Left = 0,
	Top_Center = 1,
	Top_Right = 2,
	Center_Left = 3,
	Center_Center = 4,
	Center_Right = 5,
	Bottom_Left = 6,
	Bottom_Center = 7,
	Bottom_Right = 8,
	Custom = 9,
	ESpritePivotMode_MAX = 10
};

// Enum Paper2D.ESpritePolygonMode
enum class ESpritePolygonMode : uint8 {
	SourceBoundingBox = 0,
	TightBoundingBox = 1,
	ShrinkWrapped = 2,
	FullyCustom = 3,
	Diced = 4,
	ESpritePolygonMode_MAX = 5
};

// Enum Paper2D.ESpriteShapeType
enum class ESpriteShapeType : uint8 {
	Box = 0,
	Circle = 1,
	Polygon = 2,
	ESpriteShapeType_MAX = 3
};

// Enum Paper2D.ESpriteCollisionMode
enum class ESpriteCollisionMode : uint8 {
	None = 0,
	Use2DPhysics = 1,
	Use3DPhysics = 2,
	ESpriteCollisionMode_MAX = 3
};

// ScriptStruct Paper2D.IntMargin
// Size: 0x10 (Inherited: 0x00)
struct FIntMargin {
	int32_t Left; // 0x00(0x04)
	int32_t Top; // 0x04(0x04)
	int32_t Right; // 0x08(0x04)
	int32_t Bottom; // 0x0c(0x04)
};

// ScriptStruct Paper2D.PaperFlipbookKeyFrame
// Size: 0x10 (Inherited: 0x00)
struct FPaperFlipbookKeyFrame {
	UPaperSprite* Sprite; // 0x00(0x08)
	int32_t FrameRun; // 0x08(0x04)
};

// ScriptStruct Paper2D.SpriteInstanceData
// Size: 0x50 (Inherited: 0x00)
struct FSpriteInstanceData {
	FMatrix Transform; // 0x00(0x40)
	UPaperSprite* SourceSprite; // 0x40(0x08)
	FColor VertexColor; // 0x48(0x04)
	int32_t MaterialIndex; // 0x4c(0x04)
};

// ScriptStruct Paper2D.PaperSpriteSocket
// Size: 0x40 (Inherited: 0x00)
struct FPaperSpriteSocket {
	FTransform LocalTransform; // 0x00(0x30)
	FName SocketName; // 0x30(0x08)
};

// ScriptStruct Paper2D.PaperSpriteAtlasSlot
// Size: 0x40 (Inherited: 0x00)
struct FPaperSpriteAtlasSlot {
	TSoftObjectPtr<UPaperSprite> SpriteRef; // 0x00(0x28)
	int32_t AtlasIndex; // 0x28(0x04)
	int32_t X; // 0x2c(0x04)
	int32_t Y; // 0x30(0x04)
	int32_t Width; // 0x34(0x04)
	int32_t Height; // 0x38(0x04)
};

// ScriptStruct Paper2D.PaperTerrainMaterialRule
// Size: 0x38 (Inherited: 0x00)
struct FPaperTerrainMaterialRule {
	UPaperSprite* StartCap; // 0x00(0x08)
	TArray<UPaperSprite*> Body; // 0x08(0x10)
	UPaperSprite* EndCap; // 0x18(0x08)
	float MinimumAngle; // 0x20(0x04)
	float MaximumAngle; // 0x24(0x04)
	bool bEnableCollision; // 0x28(0x01)
	float CollisionOffset; // 0x2c(0x04)
	int32_t DrawOrder; // 0x30(0x04)
};

// ScriptStruct Paper2D.PaperTileInfo
// Size: 0x10 (Inherited: 0x00)
struct FPaperTileInfo {
	UPaperTileSet* TileSet; // 0x00(0x08)
	int32_t PackedTileIndex; // 0x08(0x04)
};

// ScriptStruct Paper2D.PaperTileSetTerrain
// Size: 0x18 (Inherited: 0x00)
struct FPaperTileSetTerrain {
	FString TerrainName; // 0x00(0x10)
	int32_t CenterTileIndex; // 0x10(0x04)
};

// ScriptStruct Paper2D.PaperTileMetadata
// Size: 0x40 (Inherited: 0x00)
struct FPaperTileMetadata {
	FName UserDataName; // 0x00(0x08)
	FSpriteGeometryCollection CollisionData; // 0x08(0x30)
	char TerrainMembership[0x4]; // 0x38(0x04)
};

// ScriptStruct Paper2D.SpriteGeometryCollection
// Size: 0x30 (Inherited: 0x00)
struct FSpriteGeometryCollection {
	TArray<FSpriteGeometryShape> Shapes; // 0x00(0x10)
	enum class ESpritePolygonMode GeometryType; // 0x10(0x01)
	int32_t PixelsPerSubdivisionX; // 0x14(0x04)
	int32_t PixelsPerSubdivisionY; // 0x18(0x04)
	bool bAvoidVertexMerging; // 0x1c(0x01)
	float AlphaThreshold; // 0x20(0x04)
	float DetailAmount; // 0x24(0x04)
	float SimplifyEpsilon; // 0x28(0x04)
};

// ScriptStruct Paper2D.SpriteGeometryShape
// Size: 0x30 (Inherited: 0x00)
struct FSpriteGeometryShape {
	enum class ESpriteShapeType ShapeType; // 0x00(0x01)
	TArray<FVector2D> Vertices; // 0x08(0x10)
	FVector2D BoxSize; // 0x18(0x08)
	FVector2D BoxPosition; // 0x20(0x08)
	float Rotation; // 0x28(0x04)
	bool bNegativeWinding; // 0x2c(0x01)
};

// ScriptStruct Paper2D.SpriteDrawCallRecord
// Size: 0xd0 (Inherited: 0x00)
struct FSpriteDrawCallRecord {
	FVector Destination; // 0x00(0x0c)
	UTexture* BaseTexture; // 0x10(0x08)
	FColor Color; // 0x48(0x04)
};

// ScriptStruct Paper2D.SpriteAssetInitParameters
// Size: 0x40 (Inherited: 0x00)
struct FSpriteAssetInitParameters {
};

