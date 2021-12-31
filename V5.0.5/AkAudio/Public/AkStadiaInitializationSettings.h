#pragma once
#include "CoreMinimal.h"
#include "AkCommunicationSettingsWithSystemInitialization.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "AkCommonInitializationSettingsWithSampleRate.h"
#include "AkAdvancedInitializationSettingsWithMultiCoreRendering.h"
#include "AkStadiaInitializationSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class AKAUDIO_API UAkStadiaInitializationSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FAkCommonInitializationSettingsWithSampleRate CommonSettings;
    
    UPROPERTY(Config, EditAnywhere)
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;
    
    UAkStadiaInitializationSettings();
};

