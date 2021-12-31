#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "AkAssetData.generated.h"

UCLASS()
class AKAUDIO_API UAkAssetData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 CachedHash;
    
    UAkAssetData();
};

