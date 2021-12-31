#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "RegisteredDeviceInfo.h"
#include "RawInputFunctionLibrary.generated.h"

UCLASS(BlueprintType)
class RAWINPUT_API URawInputFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure)
    static TArray<FRegisteredDeviceInfo> GetRegisteredDevices();
    
    URawInputFunctionLibrary();
};

