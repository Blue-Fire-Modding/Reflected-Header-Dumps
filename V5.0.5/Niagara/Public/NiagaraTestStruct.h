#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "NiagaraTestStructInner.h"
#include "NiagaraTestStruct.generated.h"

USTRUCT()
struct FNiagaraTestStruct {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector Vector1;
    
    UPROPERTY(EditAnywhere)
    FVector Vector2;
    
    UPROPERTY(EditAnywhere)
    FNiagaraTestStructInner InnerStruct1;
    
    UPROPERTY(EditAnywhere)
    FNiagaraTestStructInner InnerStruct2;
    
    NIAGARA_API FNiagaraTestStruct();
};

