#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine RichCurve
#include "NiagaraDataInterfaceCurveBase.h"
#include "NiagaraDataInterfaceCurve.generated.h"

UCLASS(EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceCurve : public UNiagaraDataInterfaceCurveBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRichCurve Curve;
    
    UNiagaraDataInterfaceCurve();
};

