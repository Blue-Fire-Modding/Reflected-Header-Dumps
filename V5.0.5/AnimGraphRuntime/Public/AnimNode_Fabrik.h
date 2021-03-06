#pragma once
#include "CoreMinimal.h"
#include "AnimNode_SkeletalControlBase.h"
#include "BoneSocketTarget.h"
//CROSS-MODULE INCLUDE: CoreUObject Transform
//CROSS-MODULE INCLUDE: Engine EBoneRotationSource
//CROSS-MODULE INCLUDE: Engine EBoneControlSpace
//CROSS-MODULE INCLUDE: Engine BoneReference
#include "AnimNode_Fabrik.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_Fabrik : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform EffectorTransform;
    
    UPROPERTY(EditAnywhere)
    FBoneSocketTarget EffectorTarget;
    
    UPROPERTY(EditAnywhere)
    FBoneReference TipBone;
    
    UPROPERTY(EditAnywhere)
    FBoneReference RootBone;
    
    UPROPERTY(EditAnywhere)
    float Precision;
    
    UPROPERTY(EditAnywhere)
    int32 MaxIterations;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBoneControlSpace> EffectorTransformSpace;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBoneRotationSource> EffectorRotationSource;
    
    FAnimNode_Fabrik();
};

