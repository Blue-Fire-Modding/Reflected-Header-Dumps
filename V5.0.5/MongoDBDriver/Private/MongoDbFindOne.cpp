#include "MongoDbFindOne.h"

class UDatabaseConnector;
class IDatabaseConnector;
class UMongoDbFindOne;

UMongoDbFindOne* UMongoDbFindOne::FindOne(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName, FDocumentValue Filter) {
    return NULL;
}

UMongoDbFindOne::UMongoDbFindOne() {
}

