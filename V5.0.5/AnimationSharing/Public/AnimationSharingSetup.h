#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "PerSkeletonAnimationSharingSetup.h"
#include "AnimationSharingScalability.h"
#include "AnimationSharingSetup.generated.h"

UCLASS()
class ANIMATIONSHARING_API UAnimationSharingSetup : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TArray<FPerSkeletonAnimationSharingSetup> SkeletonSetups;
    
    UPROPERTY(Config, EditAnywhere)
    FAnimationSharingScalability ScalabilitySettings;
    
    UAnimationSharingSetup();
};

