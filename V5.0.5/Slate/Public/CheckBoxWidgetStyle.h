#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SlateCore SlateWidgetStyleContainerBase
//CROSS-MODULE INCLUDE: SlateCore CheckBoxStyle
#include "CheckBoxWidgetStyle.generated.h"

UCLASS(MinimalAPI)
class UCheckBoxWidgetStyle : public USlateWidgetStyleContainerBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FCheckBoxStyle CheckBoxStyle;
    
    UCheckBoxWidgetStyle();
};

