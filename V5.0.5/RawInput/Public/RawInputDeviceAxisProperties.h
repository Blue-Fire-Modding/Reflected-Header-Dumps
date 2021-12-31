#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: InputCore Key
#include "RawInputDeviceAxisProperties.generated.h"

USTRUCT(BlueprintType)
struct RAWINPUT_API FRawInputDeviceAxisProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bEnabled: 1;
    
    UPROPERTY(EditAnywhere)
    FKey Key;
    
    UPROPERTY(EditAnywhere)
    uint8 bInverted: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bGamepadStick: 1;
    
    UPROPERTY(EditAnywhere)
    float Offset;
    
    FRawInputDeviceAxisProperties();
};

