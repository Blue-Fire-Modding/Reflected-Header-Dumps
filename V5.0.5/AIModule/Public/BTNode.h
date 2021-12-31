#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: GameplayTasks GameplayTaskOwnerInterface
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "BTNode.generated.h"

class UBehaviorTree;
class UBTCompositeNode;

UCLASS(Abstract, Config=Game)
class AIMODULE_API UBTNode : public UObject, public IGameplayTaskOwnerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString NodeName;
    
private:
    UPROPERTY()
    UBehaviorTree* TreeAsset;
    
    UPROPERTY()
    UBTCompositeNode* ParentNode;
    
public:
    UBTNode();
    
    // Fix for true pure virtual functions not being implemented
};

