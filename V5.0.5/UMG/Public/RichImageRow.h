#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SlateCore SlateBrush
//CROSS-MODULE INCLUDE: Engine TableRowBase
#include "RichImageRow.generated.h"

USTRUCT()
struct UMG_API FRichImageRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSlateBrush Brush;
    
    FRichImageRow();
};

