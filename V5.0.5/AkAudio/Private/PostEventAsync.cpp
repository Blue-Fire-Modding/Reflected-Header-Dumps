#include "PostEventAsync.h"

class UObject;
class UAkAudioEvent;
class AActor;
class UAkCallbackInfo;
class UPostEventAsync;

UPostEventAsync* UPostEventAsync::PostEventAsync(const UObject* WorldContextObject, UAkAudioEvent* AkEvent, AActor* Actor, int32 CallbackMask, const FPostEventAsyncPostEventCallback& PostEventCallback, const TArray<FAkExternalSourceInfo>& ExternalSources, bool bStopWhenAttachedToDestroyed) {
    return NULL;
}

void UPostEventAsync::PollPostEventFuture() {
}

UPostEventAsync::UPostEventAsync() {
}

