#include "MongoDbFindOneAndUpdate.h"

class UMongoDbFindOneAndUpdate;
class UDatabaseConnector;
class IDatabaseConnector;

UMongoDbFindOneAndUpdate* UMongoDbFindOneAndUpdate::FindOneAndUpdate(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName, FDocumentValue Filter, FDocumentValue Update) {
    return NULL;
}

UMongoDbFindOneAndUpdate::UMongoDbFindOneAndUpdate() {
}

