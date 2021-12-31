#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
#include "PropertyBinding.h"
//CROSS-MODULE INCLUDE: SlateCore SlateColor
#include "ColorBinding.generated.h"

UCLASS()
class UMG_API UColorBinding : public UPropertyBinding {
    GENERATED_BODY()
public:
    UFUNCTION()
    FSlateColor GetSlateValue() const;
    
    UFUNCTION()
    FLinearColor GetLinearValue() const;
    
    UColorBinding();
};

