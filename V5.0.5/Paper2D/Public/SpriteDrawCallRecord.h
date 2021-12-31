#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: CoreUObject Color
#include "SpriteDrawCallRecord.generated.h"

class UTexture;

USTRUCT()
struct PAPER2D_API FSpriteDrawCallRecord {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Destination;
    
    UPROPERTY()
    UTexture* BaseTexture;
    
    UPROPERTY()
    FColor Color;
    
    FSpriteDrawCallRecord();
};

