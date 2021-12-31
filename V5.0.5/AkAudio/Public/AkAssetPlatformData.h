#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "AkAssetPlatformData.generated.h"

class UAkAssetData;

UCLASS()
class AKAUDIO_API UAkAssetPlatformData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    UAkAssetData* CurrentAssetData;
    
    UAkAssetPlatformData();
};

