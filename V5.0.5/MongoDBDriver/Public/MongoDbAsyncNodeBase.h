#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintAsyncActionBase
#include "MongoDbAsyncNodeBase.generated.h"

class UDatabaseConnector;
class IDatabaseConnector;

UCLASS()
class UMongoDbAsyncNodeBase : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TScriptInterface<IDatabaseConnector> m_Connector;
    
public:
    UMongoDbAsyncNodeBase();
};

