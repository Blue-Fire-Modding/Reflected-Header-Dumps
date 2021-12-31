#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AnimInstance
#include "VehicleAnimInstance.generated.h"

class AWheeledVehicle;
class UWheeledVehicleMovementComponent;

UCLASS(NonTransient)
class PHYSXVEHICLES_API UVehicleAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    UWheeledVehicleMovementComponent* WheeledVehicleMovementComponent;
    
public:
    UFUNCTION(BlueprintCallable)
    AWheeledVehicle* GetVehicle();
    
    UVehicleAnimInstance();
};

