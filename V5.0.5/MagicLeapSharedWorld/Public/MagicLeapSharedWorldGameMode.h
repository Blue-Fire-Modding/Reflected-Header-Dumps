#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine GameMode
#include "MagicLeapSharedWorldSharedData.h"
#include "MagicLeapSharedWorldGameMode.generated.h"

class AMagicLeapSharedWorldPlayerController;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMagicLeapSharedWorldGameModeOnNewLocalDataFromClients);

UCLASS(NonTransient)
class MAGICLEAPSHAREDWORLD_API AMagicLeapSharedWorldGameMode : public AGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FMagicLeapSharedWorldSharedData SharedWorldData;
    
    UPROPERTY(BlueprintAssignable)
    FMagicLeapSharedWorldGameModeOnNewLocalDataFromClients OnNewLocalDataFromClients;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PinSelectionConfidenceThreshold;
    
protected:
    UPROPERTY(BlueprintReadWrite)
    AMagicLeapSharedWorldPlayerController* ChosenOne;
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool SendSharedWorldDataToClients();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    void SelectChosenOne();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    void DetermineSharedWorldData(FMagicLeapSharedWorldSharedData& NewSharedWorldData);
    
    AMagicLeapSharedWorldGameMode();
};

