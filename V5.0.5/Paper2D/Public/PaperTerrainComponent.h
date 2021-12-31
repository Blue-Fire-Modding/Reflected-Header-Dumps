#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine PrimitiveComponent
#include "ESpriteCollisionMode.h"
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
#include "PaperTerrainComponent.generated.h"

class UPaperTerrainSplineComponent;
class UPaperTerrainMaterial;
class UBodySetup;

UCLASS()
class PAPER2D_API UPaperTerrainComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UPaperTerrainMaterial* TerrainMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bClosedSpline;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bFilledSpline;
    
    UPROPERTY(Export)
    UPaperTerrainSplineComponent* AssociatedSpline;
    
    UPROPERTY(EditAnywhere)
    int32 RandomSeed;
    
    UPROPERTY(EditAnywhere)
    float SegmentOverlapAmount;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    FLinearColor TerrainColor;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    int32 ReparamStepsPerSegment;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESpriteCollisionMode::Type> SpriteCollisionDomain;
    
    UPROPERTY(EditAnywhere)
    float CollisionThickness;
    
    UPROPERTY(DuplicateTransient, Transient)
    UBodySetup* CachedBodySetup;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTerrainColor(FLinearColor NewColor);
    
    UPaperTerrainComponent();
};

