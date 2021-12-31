#include "MongoDbInsertOne.h"

class UMongoDbInsertOne;
class UDatabaseConnector;
class IDatabaseConnector;

UMongoDbInsertOne* UMongoDbInsertOne::InsertOne(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName, FDocumentValue Value) {
    return NULL;
}

UMongoDbInsertOne::UMongoDbInsertOne() {
}

