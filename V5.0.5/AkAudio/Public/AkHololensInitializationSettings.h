#pragma once
#include "CoreMinimal.h"
#include "AkCommunicationSettingsWithSystemInitialization.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "AkCommonInitializationSettingsWithSampleRate.h"
#include "AkHololensAdvancedInitializationSettings.h"
#include "AkHololensInitializationSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class AKAUDIO_API UAkHololensInitializationSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FAkCommonInitializationSettingsWithSampleRate CommonSettings;
    
    UPROPERTY(Config, EditAnywhere)
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    FAkHololensAdvancedInitializationSettings AdvancedSettings;
    
    UFUNCTION()
    void MigrateMultiCoreRendering(bool NewValue);
    
    UAkHololensInitializationSettings();
};

