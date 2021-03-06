#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "EnvQueryOption.generated.h"

class UEnvQueryGenerator;
class UEnvQueryTest;

UCLASS()
class AIMODULE_API UEnvQueryOption : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    UEnvQueryGenerator* Generator;
    
    UPROPERTY()
    TArray<UEnvQueryTest*> Tests;
    
    UEnvQueryOption();
};

