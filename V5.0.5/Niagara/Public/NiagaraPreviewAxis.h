#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "NiagaraPreviewAxis.generated.h"

class UNiagaraComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNiagaraPreviewAxis : public UObject {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    int32 Num();
    
    UFUNCTION(BlueprintNativeEvent)
    void ApplyToPreview(UNiagaraComponent* PreviewComponent, int32 PreviewIndex, bool bIsXAxis, FString& OutLabelText);
    
    UNiagaraPreviewAxis();
};

