#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "AkAssetDataSwitchContainerData.generated.h"

class UAkAssetDataSwitchContainerData;
class UAkGroupValue;
class UAkMediaAsset;

UCLASS(EditInlineNew)
class AKAUDIO_API UAkAssetDataSwitchContainerData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TSoftObjectPtr<UAkGroupValue> GroupValue;
    
    UPROPERTY(VisibleAnywhere)
    UAkGroupValue* DefaultGroupValue;
    
    UPROPERTY(VisibleAnywhere)
    TArray<TSoftObjectPtr<UAkMediaAsset>> MediaList;
    
    UPROPERTY(VisibleAnywhere)
    TArray<UAkAssetDataSwitchContainerData*> Children;
    
    UAkAssetDataSwitchContainerData();
};

