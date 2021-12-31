#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "PaperTileMapActor.generated.h"

class UPaperTileMapComponent;

UCLASS()
class PAPER2D_API APaperTileMapActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UPaperTileMapComponent* RenderComponent;
    
public:
    APaperTileMapActor();
};

