#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "AkCallbackInfo.generated.h"

class UAkComponent;

UCLASS(BlueprintType)
class AKAUDIO_API UAkCallbackInfo : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    UAkComponent* AkComponent;
    
    UAkCallbackInfo();
};

