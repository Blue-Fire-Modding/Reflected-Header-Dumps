#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "PaperTerrainActor.generated.h"

class UPaperTerrainComponent;
class USceneComponent;
class UPaperTerrainSplineComponent;

UCLASS()
class PAPER2D_API APaperTerrainActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    USceneComponent* DummyRoot;
    
    UPROPERTY(Export)
    UPaperTerrainSplineComponent* SplineComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UPaperTerrainComponent* RenderComponent;
    
public:
    APaperTerrainActor();
};

