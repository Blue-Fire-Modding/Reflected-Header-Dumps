#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine RuntimeFloatCurve
#include "WheeledVehicleMovementComponent.h"
#include "VehicleEngineData.h"
#include "VehicleDifferential4WData.h"
#include "VehicleTransmissionData.h"
#include "WheeledVehicleMovementComponent4W.generated.h"

UCLASS()
class PHYSXVEHICLES_API UWheeledVehicleMovementComponent4W : public UWheeledVehicleMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVehicleEngineData EngineSetup;
    
    UPROPERTY(EditAnywhere)
    FVehicleDifferential4WData DifferentialSetup;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float AckermannAccuracy;
    
    UPROPERTY(EditAnywhere)
    FVehicleTransmissionData TransmissionSetup;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve SteeringCurve;
    
    UWheeledVehicleMovementComponent4W();
};

