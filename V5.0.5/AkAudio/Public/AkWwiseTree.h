#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: UMG Widget
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "AkWwiseObjectDetails.h"
#include "AkWwiseTree.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAkWwiseTreeOnSelectionChanged, FGuid, ItemSelectedID);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAkWwiseTreeOnItemDragged, FGuid, ItemDraggedID, const FString&, ItemDraggedName);

UCLASS(DefaultConfig, Config=Editor)
class AKAUDIO_API UAkWwiseTree : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FAkWwiseTreeOnSelectionChanged OnSelectionChanged;
    
    UPROPERTY(BlueprintAssignable)
    FAkWwiseTreeOnItemDragged OnItemDragged;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetSearchText(const FString& newText);
    
    UFUNCTION(BlueprintCosmetic, BlueprintPure)
    FAkWwiseObjectDetails GetSelectedItem() const;
    
    UFUNCTION(BlueprintCosmetic, BlueprintPure)
    FString GetSearchText() const;
    
    UAkWwiseTree();
};

