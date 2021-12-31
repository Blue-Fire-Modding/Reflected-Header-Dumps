#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintAsyncActionBase
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: CoreUObject Rotator
#include "PostEventAtLocationAsync.generated.h"

class UAkAudioEvent;
class UPostEventAtLocationAsync;
class UObject;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPostEventAtLocationAsyncCompleted, int32, PlayingID);

UCLASS()
class AKAUDIO_API UPostEventAtLocationAsync : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FPostEventAtLocationAsyncCompleted Completed;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static UPostEventAtLocationAsync* PostEventAtLocationAsync(const UObject* WorldContextObject, UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation);
    
private:
    UFUNCTION()
    void PollPostEventFuture();
    
public:
    UPostEventAtLocationAsync();
};

