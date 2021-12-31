#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "ENiagaraScriptUsage.h"
#include "NiagaraVMExecutableDataId.h"
#include "NiagaraParameterStore.h"
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "NiagaraBoundParameter.h"
#include "NiagaraScriptExecutionParameterStore.h"
#include "NiagaraVMExecutableData.h"
#include "NiagaraScriptDataInterfaceInfo.h"
#include "NiagaraScript.generated.h"

class UNiagaraParameterCollection;

UCLASS(MinimalAPI)
class UNiagaraScript : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable)
    ENiagaraScriptUsage Usage;
    
    UPROPERTY()
    int32 UsageIndex;
    
private:
    UPROPERTY()
    FGuid UsageId;
    
public:
    UPROPERTY()
    FNiagaraParameterStore RapidIterationParameters;
    
private:
    UPROPERTY()
    FNiagaraScriptExecutionParameterStore ScriptExecutionParamStore;
    
    UPROPERTY()
    TArray<FNiagaraBoundParameter> ScriptExecutionBoundParameters;
    
    UPROPERTY()
    FNiagaraVMExecutableDataId CachedScriptVMId;
    
    UPROPERTY()
    FNiagaraVMExecutableData CachedScriptVM;
    
    UPROPERTY()
    TArray<UNiagaraParameterCollection*> CachedParameterCollectionReferences;
    
    UPROPERTY()
    TArray<FNiagaraScriptDataInterfaceInfo> CachedDefaultDataInterfaces;
    
public:
    UFUNCTION()
    void RaiseOnGPUCompilationComplete();
    
    UNiagaraScript();
};

