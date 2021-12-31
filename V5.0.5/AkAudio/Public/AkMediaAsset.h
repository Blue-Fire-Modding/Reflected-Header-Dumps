#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "AkMediaAsset.generated.h"

class UAkMediaAssetData;

UCLASS()
class AKAUDIO_API UAkMediaAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    TArray<UObject*> UserData;
    
private:
    UPROPERTY()
    UAkMediaAssetData* CurrentMediaAssetData;
    
public:
    UAkMediaAsset();
};

