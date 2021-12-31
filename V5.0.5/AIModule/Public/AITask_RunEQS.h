#pragma once
#include "CoreMinimal.h"
#include "AITask.h"
#include "AITask_RunEQS.generated.h"

class UEnvQuery;
class AAIController;
class UAITask_RunEQS;

UCLASS()
class AIMODULE_API UAITask_RunEQS : public UAITask {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static UAITask_RunEQS* RunEQS(AAIController* Controller, UEnvQuery* QueryTemplate);
    
    UAITask_RunEQS();
};

