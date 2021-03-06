#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine SceneComponent
#include "AkExternalSourceInfo.h"
#include "EAkCallbackType.h"
//CROSS-MODULE INCLUDE: Engine LatentActionInfo
#include "AkGameObject.generated.h"

class UObject;
class UAkAudioEvent;
class UAkCallbackInfo;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FAkGameObjectPostEventCallback, EAkCallbackType, CallbackType, UAkCallbackInfo*, CallbackInfo);

UCLASS(BlueprintType)
class AKAUDIO_API UAkGameObject : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* AkAudioEvent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FString EventName;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void Stop();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void PostAssociatedAkEventAsync(const UObject* WorldContextObject, int32 CallbackMask, const FAkGameObjectPostEventCallback& PostEventCallback, const TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo, int32& PlayingID);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    int32 PostAssociatedAkEvent(int32 CallbackMask, const FAkGameObjectPostEventCallback& PostEventCallback, const TArray<FAkExternalSourceInfo>& ExternalSources);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void PostAkEventAsync(const UObject* WorldContextObject, UAkAudioEvent* AkEvent, int32& PlayingID, int32 CallbackMask, const FAkGameObjectPostEventCallback& PostEventCallback, const TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    int32 PostAkEvent(UAkAudioEvent* AkEvent, int32 CallbackMask, const FAkGameObjectPostEventCallback& PostEventCallback, const TArray<FAkExternalSourceInfo>& ExternalSources, const FString& in_EventName);
    
    UAkGameObject();
};

