#pragma once
#include "CoreMinimal.h"
#include "AITask.h"
#include "EPathFollowingResult.h"
#include "EAIOptionFlag.h"
#include "AIMoveRequest.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "AITask_MoveTo.generated.h"

class AAIController;
class UAITask_MoveTo;
class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAITask_MoveToOnRequestFailed);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAITask_MoveToOnMoveFinished, TEnumAsByte<EPathFollowingResult::Type>, Result, AAIController*, AIController);

UCLASS()
class AIMODULE_API UAITask_MoveTo : public UAITask {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable)
    FAITask_MoveToOnRequestFailed OnRequestFailed;
    
    UPROPERTY(BlueprintAssignable)
    FAITask_MoveToOnMoveFinished OnMoveFinished;
    
    UPROPERTY()
    FAIMoveRequest MoveRequest;
    
public:
    UFUNCTION(BlueprintCallable)
    static UAITask_MoveTo* AIMoveTo(AAIController* Controller, FVector GoalLocation, AActor* GoalActor, float AcceptanceRadius, TEnumAsByte<EAIOptionFlag::Type> StopOnOverlap, TEnumAsByte<EAIOptionFlag::Type> AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking, TEnumAsByte<EAIOptionFlag::Type> ProjectGoalOnNavigation);
    
    UAITask_MoveTo();
};

