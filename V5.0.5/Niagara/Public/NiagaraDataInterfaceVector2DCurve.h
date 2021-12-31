#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine RichCurve
#include "NiagaraDataInterfaceCurveBase.h"
#include "NiagaraDataInterfaceVector2DCurve.generated.h"

UCLASS(EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceVector2DCurve : public UNiagaraDataInterfaceCurveBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRichCurve XCurve;
    
    UPROPERTY(EditAnywhere)
    FRichCurve YCurve;
    
    UNiagaraDataInterfaceVector2DCurve();
};

