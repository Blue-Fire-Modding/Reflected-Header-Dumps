#pragma once
#include "CoreMinimal.h"
#include "ContentWidget.h"
//CROSS-MODULE INCLUDE: SlateCore EVerticalAlignment
//CROSS-MODULE INCLUDE: SlateCore Margin
//CROSS-MODULE INCLUDE: SlateCore EHorizontalAlignment
#include "WindowTitleBarArea.generated.h"

UCLASS()
class UMG_API UWindowTitleBarArea : public UContentWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bWindowButtonsEnabled;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bDoubleClickTogglesFullscreen;
    
    UFUNCTION(BlueprintCallable)
    void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
    
    UFUNCTION(BlueprintCallable)
    void SetPadding(FMargin InPadding);
    
    UFUNCTION(BlueprintCallable)
    void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
    
    UWindowTitleBarArea();
};

