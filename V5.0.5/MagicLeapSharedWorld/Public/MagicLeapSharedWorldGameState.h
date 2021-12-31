#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine GameState
#include "MagicLeapSharedWorldSharedData.h"
#include "MagicLeapSharedWorldAlignmentTransforms.h"
//CROSS-MODULE INCLUDE: CoreUObject Transform
#include "MagicLeapSharedWorldGameState.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMagicLeapSharedWorldGameStateOnSharedWorldDataUpdated);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMagicLeapSharedWorldGameStateOnAlignmentTransformsUpdated);

UCLASS()
class MAGICLEAPSHAREDWORLD_API AMagicLeapSharedWorldGameState : public AGameState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnReplicate_SharedWorldData)
    FMagicLeapSharedWorldSharedData SharedWorldData;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnReplicate_AlignmentTransforms)
    FMagicLeapSharedWorldAlignmentTransforms AlignmentTransforms;
    
    UPROPERTY(BlueprintAssignable)
    FMagicLeapSharedWorldGameStateOnSharedWorldDataUpdated OnSharedWorldDataUpdated;
    
    UPROPERTY(BlueprintAssignable)
    FMagicLeapSharedWorldGameStateOnAlignmentTransformsUpdated OnAlignmentTransformsUpdated;
    
private:
    UFUNCTION()
    void OnReplicate_SharedWorldData();
    
    UFUNCTION()
    void OnReplicate_AlignmentTransforms();
    
public:
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FTransform CalculateXRCameraRootTransform() const;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AMagicLeapSharedWorldGameState();
};

