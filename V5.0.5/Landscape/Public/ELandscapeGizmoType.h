#pragma once
#include "CoreMinimal.h"
#include "ELandscapeGizmoType.generated.h"

UENUM()
enum ELandscapeGizmoType {
    LGT_None,
    LGT_Height,
    LGT_Weight,
    LGT_MAX UMETA(Hidden),
};
