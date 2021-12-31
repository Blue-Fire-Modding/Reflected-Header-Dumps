#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "ARTrackedGeometry.h"
#include "AREnvironmentCaptureProbe.generated.h"

class UAREnvironmentCaptureProbeTexture;

UCLASS()
class AUGMENTEDREALITY_API UAREnvironmentCaptureProbe : public UARTrackedGeometry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UAREnvironmentCaptureProbeTexture* EnvironmentCaptureTexture;
    
public:
    UFUNCTION(BlueprintPure)
    FVector GetExtent() const;
    
    UFUNCTION(BlueprintPure)
    UAREnvironmentCaptureProbeTexture* GetEnvironmentCaptureTexture();
    
    UAREnvironmentCaptureProbe();
};

