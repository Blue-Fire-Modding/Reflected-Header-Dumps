#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine SceneComponent
#include "AkLateReverbComponent.generated.h"

class UAkAuxBus;
class UAkLateReverbComponent;

UCLASS(BlueprintType)
class AKAUDIO_API UAkLateReverbComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bEnable: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAuxBus* AuxBus;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FString AuxBusName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SendLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FadeRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Priority;
    
    UPROPERTY(Export, Transient)
    UAkLateReverbComponent* NextLowerPriorityComponent;
    
    UAkLateReverbComponent();
};

