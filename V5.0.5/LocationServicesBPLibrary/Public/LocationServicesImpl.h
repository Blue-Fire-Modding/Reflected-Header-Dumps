#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "LocationServicesData.h"
#include "LocationServicesImpl.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLocationServicesImplOnLocationChanged, FLocationServicesData, LocationData);

UCLASS(Abstract)
class ULocationServicesImpl : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FLocationServicesImplOnLocationChanged OnLocationChanged;
    
    ULocationServicesImpl();
};

