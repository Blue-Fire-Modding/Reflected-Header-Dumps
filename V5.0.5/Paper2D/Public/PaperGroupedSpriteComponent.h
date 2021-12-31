#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine MeshComponent
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
#include "SpriteInstanceData.h"
//CROSS-MODULE INCLUDE: CoreUObject Transform
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "PaperGroupedSpriteComponent.generated.h"

class UMaterialInterface;
class UPaperSprite;

UCLASS()
class PAPER2D_API UPaperGroupedSpriteComponent : public UMeshComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<UMaterialInterface*> InstanceMaterials;
    
    UPROPERTY(EditAnywhere)
    TArray<FSpriteInstanceData> PerInstanceSpriteData;
    
public:
    UFUNCTION(BlueprintCallable)
    bool UpdateInstanceTransform(int32 InstanceIndex, const FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport);
    
    UFUNCTION(BlueprintCallable)
    bool UpdateInstanceColor(int32 InstanceIndex, FLinearColor NewInstanceColor, bool bMarkRenderStateDirty);
    
    UFUNCTION(BlueprintCallable)
    void SortInstancesAlongAxis(FVector WorldSpaceSortAxis);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveInstance(int32 InstanceIndex);
    
    UFUNCTION(BlueprintPure)
    bool GetInstanceTransform(int32 InstanceIndex, FTransform& OutInstanceTransform, bool bWorldSpace) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetInstanceCount() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearInstances();
    
    UFUNCTION(BlueprintCallable)
    int32 AddInstance(const FTransform& Transform, UPaperSprite* Sprite, bool bWorldSpace, FLinearColor Color);
    
    UPaperGroupedSpriteComponent();
};

