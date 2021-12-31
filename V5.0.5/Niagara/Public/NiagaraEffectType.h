#pragma once
#include "CoreMinimal.h"
#include "NiagaraEmitterScalabilitySettingsArray.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "ENiagaraScalabilityUpdateFrequency.h"
#include "ENiagaraCullReaction.h"
#include "NiagaraSystemScalabilitySettingsArray.h"
#include "NiagaraSystemScalabilitySettings.h"
#include "NiagaraEffectType.generated.h"

UCLASS()
class NIAGARA_API UNiagaraEffectType : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ENiagaraScalabilityUpdateFrequency UpdateFrequency;
    
    UPROPERTY(EditAnywhere)
    ENiagaraCullReaction CullReaction;
    
    UPROPERTY()
    TArray<FNiagaraSystemScalabilitySettings> DetailLevelScalabilitySettings;
    
    UPROPERTY(EditAnywhere)
    FNiagaraSystemScalabilitySettingsArray SystemScalabilitySettings;
    
    UPROPERTY(EditAnywhere)
    FNiagaraEmitterScalabilitySettingsArray EmitterScalabilitySettings;
    
    UNiagaraEffectType();
};

