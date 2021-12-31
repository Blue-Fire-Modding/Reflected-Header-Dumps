#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "WheelSetup.generated.h"

class UVehicleWheel;

USTRUCT(BlueprintType)
struct PHYSXVEHICLES_API FWheelSetup {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UVehicleWheel> WheelClass;
    
    UPROPERTY(EditAnywhere)
    FName BoneName;
    
    UPROPERTY(EditAnywhere)
    FVector AdditionalOffset;
    
    UPROPERTY(EditAnywhere)
    bool bDisableSteering;
    
    FWheelSetup();
};

