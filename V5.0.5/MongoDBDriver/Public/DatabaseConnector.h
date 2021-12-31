#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Interface
#include "DatabaseConnector.generated.h"

UINTERFACE(MinimalAPI)
class UDatabaseConnector : public UInterface {
    GENERATED_BODY()
};

class IDatabaseConnector : public IInterface {
    GENERATED_BODY()
public:
};

