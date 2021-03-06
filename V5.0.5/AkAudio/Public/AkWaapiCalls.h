#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "AKWaapiJsonObject.h"
#include "AkWaapiUri.h"
#include "AkWaapiSubscriptionId.h"
#include "AkWaapiCalls.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FAkWaapiCallsCallback, FAkWaapiSubscriptionId, SubscriptionId, FAKWaapiJsonObject, WaapiJsonObject);

UCLASS(BlueprintType, DefaultConfig, Within=World)
class AKAUDIO_API UAkWaapiCalls : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static FAKWaapiJsonObject Unsubscribe(const FAkWaapiSubscriptionId& SubscriptionId, bool& UnsubscriptionDone);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static FAKWaapiJsonObject SubscribeToWaapi(const FAkWaapiUri& WaapiUri, const FAKWaapiJsonObject& WaapiOptions, const FAkWaapiCallsCallback& Callback, FAkWaapiSubscriptionId& SubscriptionId, bool& SubscriptionDone);
    
    UFUNCTION(BlueprintCallable)
    static void SetSubscriptionID(const FAkWaapiSubscriptionId& Subscription, int32 ID);
    
    UFUNCTION(BlueprintCallable)
    static bool RegisterWaapiProjectLoadedCallback(const FAkWaapiCallsCallback& Callback);
    
    UFUNCTION(BlueprintCallable)
    static bool RegisterWaapiConnectionLostCallback(const FAkWaapiCallsCallback& Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetSubscriptionID(const FAkWaapiSubscriptionId& Subscription);
    
    UFUNCTION(BlueprintPure)
    static FText Conv_FAkWaapiSubscriptionIdToText(const FAkWaapiSubscriptionId& INAkWaapiSubscriptionId);
    
    UFUNCTION(BlueprintPure)
    static FString Conv_FAkWaapiSubscriptionIdToString(const FAkWaapiSubscriptionId& INAkWaapiSubscriptionId);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static FAKWaapiJsonObject CallWaapi(const FAkWaapiUri& WaapiUri, const FAKWaapiJsonObject& WaapiArgs, const FAKWaapiJsonObject& WaapiOptions);
    
    UAkWaapiCalls();
};

