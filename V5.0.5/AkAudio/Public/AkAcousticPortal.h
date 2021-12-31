#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Volume
//CROSS-MODULE INCLUDE: Engine ECollisionChannel
#include "AkAcousticPortalState.h"
#include "AkAcousticPortal.generated.h"

UCLASS()
class AKAUDIO_API AAkAcousticPortal : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    AkAcousticPortalState InitialState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ObstructionRefreshInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ECollisionChannel> ObstructionCollisionChannel;
    
    UFUNCTION(BlueprintCallable)
    void OpenPortal();
    
    UFUNCTION(BlueprintPure)
    AkAcousticPortalState GetCurrentState() const;
    
    UFUNCTION(BlueprintCallable)
    void ClosePortal();
    
    AAkAcousticPortal();
};

