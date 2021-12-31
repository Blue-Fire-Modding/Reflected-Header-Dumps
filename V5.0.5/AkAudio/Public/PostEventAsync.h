#pragma once
#include "CoreMinimal.h"
#include "AkExternalSourceInfo.h"
#include "EAkCallbackType.h"
//CROSS-MODULE INCLUDE: Engine BlueprintAsyncActionBase
#include "PostEventAsync.generated.h"

class UAkAudioEvent;
class UPostEventAsync;
class UObject;
class AActor;
class UAkCallbackInfo;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FPostEventAsyncPostEventCallback, EAkCallbackType, CallbackType, UAkCallbackInfo*, CallbackInfo);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPostEventAsyncCompleted, int32, PlayingID);

UCLASS()
class AKAUDIO_API UPostEventAsync : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FPostEventAsyncCompleted Completed;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static UPostEventAsync* PostEventAsync(const UObject* WorldContextObject, UAkAudioEvent* AkEvent, AActor* Actor, int32 CallbackMask, const FPostEventAsyncPostEventCallback& PostEventCallback, const TArray<FAkExternalSourceInfo>& ExternalSources, bool bStopWhenAttachedToDestroyed);
    
private:
    UFUNCTION()
    void PollPostEventFuture();
    
public:
    UPostEventAsync();
};

