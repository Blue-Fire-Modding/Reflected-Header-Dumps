#pragma once
#include "CoreMinimal.h"
#include "AkCommunicationSettingsWithSystemInitialization.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "AkCommonInitializationSettingsWithSampleRate.h"
#include "AkAdvancedInitializationSettingsWithMultiCoreRendering.h"
#include "AkLuminInitializationSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class AKAUDIO_API UAkLuminInitializationSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FAkCommonInitializationSettingsWithSampleRate CommonSettings;
    
    UPROPERTY(Config, EditAnywhere)
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;
    
    UFUNCTION()
    void MigrateMultiCoreRendering(bool NewValue);
    
    UAkLuminInitializationSettings();
};

