#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "AkMediaAssetData.generated.h"

UCLASS()
class AKAUDIO_API UAkMediaAssetData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    bool IsStreamed;
    
    UPROPERTY(VisibleAnywhere)
    bool UseDeviceMemory;
    
    UAkMediaAssetData();
};

