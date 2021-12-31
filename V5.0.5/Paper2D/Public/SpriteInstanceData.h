#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Matrix
//CROSS-MODULE INCLUDE: CoreUObject Color
#include "SpriteInstanceData.generated.h"

class UPaperSprite;

USTRUCT(BlueprintType)
struct FSpriteInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FMatrix Transform;
    
    UPROPERTY(EditAnywhere)
    UPaperSprite* SourceSprite;
    
    UPROPERTY(EditAnywhere)
    FColor VertexColor;
    
    UPROPERTY(EditAnywhere)
    int32 MaterialIndex;
    
    PAPER2D_API FSpriteInstanceData();
};

