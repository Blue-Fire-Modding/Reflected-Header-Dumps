#include "MongoDbUpdateMany.h"

class UDatabaseConnector;
class IDatabaseConnector;
class UMongoDbUpdateMany;

UMongoDbUpdateMany* UMongoDbUpdateMany::UpdateMany(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName, FDocumentValue Filter, FDocumentValue Update) {
    return NULL;
}

UMongoDbUpdateMany::UMongoDbUpdateMany() {
}

