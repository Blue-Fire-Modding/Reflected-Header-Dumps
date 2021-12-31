#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Transform
#include "PaperSpriteSocket.generated.h"

USTRUCT(BlueprintType)
struct FPaperSpriteSocket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTransform LocalTransform;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName SocketName;
    
    PAPER2D_API FPaperSpriteSocket();
};

