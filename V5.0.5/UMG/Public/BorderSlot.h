#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SlateCore Margin
#include "PanelSlot.h"
//CROSS-MODULE INCLUDE: SlateCore EHorizontalAlignment
//CROSS-MODULE INCLUDE: SlateCore EVerticalAlignment
#include "BorderSlot.generated.h"

UCLASS(BlueprintType)
class UMG_API UBorderSlot : public UPanelSlot {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FMargin Padding;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
    
    UFUNCTION(BlueprintCallable)
    void SetPadding(FMargin InPadding);
    
    UFUNCTION(BlueprintCallable)
    void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
    
    UBorderSlot();
};

