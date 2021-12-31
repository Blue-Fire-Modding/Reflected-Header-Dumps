#pragma once
#include "CoreMinimal.h"
#include "BasicParticleData.h"
//CROSS-MODULE INCLUDE: CoreUObject Interface
#include "NiagaraParticleCallbackHandler.generated.h"

class UNiagaraSystem;

UINTERFACE(Blueprintable)
class UNiagaraParticleCallbackHandler : public UInterface {
    GENERATED_BODY()
};

class INiagaraParticleCallbackHandler : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveParticleData(const TArray<FBasicParticleData>& Data, UNiagaraSystem* NiagaraSystem);
    
};

