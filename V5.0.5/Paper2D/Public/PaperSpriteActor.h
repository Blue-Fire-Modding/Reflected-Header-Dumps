#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "PaperSpriteActor.generated.h"

class UPaperSpriteComponent;

UCLASS()
class PAPER2D_API APaperSpriteActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UPaperSpriteComponent* RenderComponent;
    
public:
    APaperSpriteActor();
};

