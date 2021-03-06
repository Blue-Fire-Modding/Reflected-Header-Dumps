#pragma once
#include "CoreMinimal.h"
#include "Widget.h"
//CROSS-MODULE INCLUDE: SlateCore ScrollBarStyle
//CROSS-MODULE INCLUDE: SlateCore Margin
//CROSS-MODULE INCLUDE: SlateCore EOrientation
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
#include "ScrollBar.generated.h"

class USlateWidgetStyleAsset;

UCLASS()
class UMG_API UScrollBar : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FScrollBarStyle WidgetStyle;
    
    UPROPERTY()
    USlateWidgetStyleAsset* Style;
    
    UPROPERTY(EditAnywhere)
    bool bAlwaysShowScrollbar;
    
    UPROPERTY(EditAnywhere)
    bool bAlwaysShowScrollbarTrack;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EOrientation> Orientation;
    
    UPROPERTY(EditAnywhere)
    FVector2D Thickness;
    
    UPROPERTY(EditAnywhere)
    FMargin Padding;
    
    UFUNCTION(BlueprintCallable)
    void SetState(float InOffsetFraction, float InThumbSizeFraction);
    
    UScrollBar();
};

