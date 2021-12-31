#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Character
#include "PaperCharacter.generated.h"

class UPaperFlipbookComponent;

UCLASS()
class PAPER2D_API APaperCharacter : public ACharacter {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UPaperFlipbookComponent* Sprite;
    
public:
    APaperCharacter();
};

