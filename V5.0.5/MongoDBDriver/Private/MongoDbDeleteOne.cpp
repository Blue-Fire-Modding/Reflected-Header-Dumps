#include "MongoDbDeleteOne.h"

class UMongoDbDeleteOne;
class UDatabaseConnector;
class IDatabaseConnector;

UMongoDbDeleteOne* UMongoDbDeleteOne::DeleteOne(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName, FDocumentValue Filter) {
    return NULL;
}

UMongoDbDeleteOne::UMongoDbDeleteOne() {
}

