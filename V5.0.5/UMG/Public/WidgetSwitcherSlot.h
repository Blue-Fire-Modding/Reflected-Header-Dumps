#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SlateCore Margin
#include "PanelSlot.h"
//CROSS-MODULE INCLUDE: SlateCore EHorizontalAlignment
//CROSS-MODULE INCLUDE: SlateCore EVerticalAlignment
#include "WidgetSwitcherSlot.generated.h"

UCLASS(BlueprintType)
class UMG_API UWidgetSwitcherSlot : public UPanelSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin Padding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;
    
    UFUNCTION(BlueprintCallable)
    void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
    
    UFUNCTION(BlueprintCallable)
    void SetPadding(FMargin InPadding);
    
    UFUNCTION(BlueprintCallable)
    void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
    
    UWidgetSwitcherSlot();
};

