#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SlateCore ECheckBoxState
#include "PropertyBinding.h"
#include "CheckedStateBinding.generated.h"

UCLASS()
class UMG_API UCheckedStateBinding : public UPropertyBinding {
    GENERATED_BODY()
public:
    UFUNCTION()
    ECheckBoxState GetValue() const;
    
    UCheckedStateBinding();
};

