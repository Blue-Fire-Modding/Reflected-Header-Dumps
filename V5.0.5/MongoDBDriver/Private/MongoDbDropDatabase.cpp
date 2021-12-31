#include "MongoDbDropDatabase.h"

class UDatabaseConnector;
class IDatabaseConnector;
class UMongoDbDropDatabase;

UMongoDbDropDatabase* UMongoDbDropDatabase::DropDatabase(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName) {
    return NULL;
}

UMongoDbDropDatabase::UMongoDbDropDatabase() {
}

