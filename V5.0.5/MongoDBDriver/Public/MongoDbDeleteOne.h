#pragma once
#include "CoreMinimal.h"
#include "MongoDbAsyncNodeBase.h"
#include "DocumentValue.h"
#include "MongoDbDeleteOne.generated.h"

class UDatabaseConnector;
class IDatabaseConnector;
class UMongoDbDeleteOne;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMongoDbDeleteOneDone);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMongoDbDeleteOneFailed);

UCLASS()
class UMongoDbDeleteOne : public UMongoDbAsyncNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMongoDbDeleteOneDone Done;
    
    UPROPERTY(BlueprintAssignable)
    FMongoDbDeleteOneFailed Failed;
    
    UFUNCTION(BlueprintCallable)
    static UMongoDbDeleteOne* DeleteOne(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName, FDocumentValue Filter);
    
    UMongoDbDeleteOne();
};

