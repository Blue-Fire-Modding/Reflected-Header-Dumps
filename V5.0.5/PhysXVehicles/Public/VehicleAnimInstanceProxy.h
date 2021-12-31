#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AnimInstanceProxy
#include "VehicleAnimInstanceProxy.generated.h"

USTRUCT()
struct PHYSXVEHICLES_API FVehicleAnimInstanceProxy : public FAnimInstanceProxy {
    GENERATED_BODY()
public:
    FVehicleAnimInstanceProxy();
};

