#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SlateCore Margin
#include "PanelSlot.h"
#include "SlateChildSize.h"
//CROSS-MODULE INCLUDE: SlateCore EHorizontalAlignment
//CROSS-MODULE INCLUDE: SlateCore EVerticalAlignment
#include "VerticalBoxSlot.generated.h"

UCLASS(BlueprintType)
class UMG_API UVerticalBoxSlot : public UPanelSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateChildSize Size;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin Padding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;
    
    UFUNCTION(BlueprintCallable)
    void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
    
    UFUNCTION(BlueprintCallable)
    void SetSize(FSlateChildSize InSize);
    
    UFUNCTION(BlueprintCallable)
    void SetPadding(FMargin InPadding);
    
    UFUNCTION(BlueprintCallable)
    void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
    
    UVerticalBoxSlot();
};

