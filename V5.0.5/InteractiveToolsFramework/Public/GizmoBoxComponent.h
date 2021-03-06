#pragma once
#include "CoreMinimal.h"
#include "GizmoBaseComponent.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: CoreUObject Quat
#include "GizmoBoxComponent.generated.h"

UCLASS()
class INTERACTIVETOOLSFRAMEWORK_API UGizmoBoxComponent : public UGizmoBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector Origin;
    
    UPROPERTY(EditAnywhere)
    FQuat Rotation;
    
    UPROPERTY(EditAnywhere)
    FVector Dimensions;
    
    UPROPERTY(EditAnywhere)
    float LineThickness;
    
    UPROPERTY(EditAnywhere)
    bool bRemoveHiddenLines;
    
    UPROPERTY(EditAnywhere)
    bool bEnableAxisFlip;
    
    UGizmoBoxComponent();
};

