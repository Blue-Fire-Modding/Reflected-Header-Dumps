#include "MongoDbFindOneAndDelete.h"

class UDatabaseConnector;
class IDatabaseConnector;
class UMongoDbFindOneAndDelete;

UMongoDbFindOneAndDelete* UMongoDbFindOneAndDelete::FindOneAndDelete(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName, FDocumentValue Filter) {
    return NULL;
}

UMongoDbFindOneAndDelete::UMongoDbFindOneAndDelete() {
}

