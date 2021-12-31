#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "PaperGroupedSpriteActor.generated.h"

class UPaperGroupedSpriteComponent;

UCLASS()
class PAPER2D_API APaperGroupedSpriteActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UPaperGroupedSpriteComponent* RenderComponent;
    
public:
    APaperGroupedSpriteActor();
};

