#pragma once
#include "CoreMinimal.h"
#include "AkXboxOneGDKAdvancedInitializationSettings.h"
#include "AkCommunicationSettingsWithSystemInitialization.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "AkCommonInitializationSettings.h"
#include "AkXboxOneGDKApuHeapInitializationSettings.h"
#include "AkXboxOneGDKInitializationSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class AKAUDIO_API UAkXboxOneGDKInitializationSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FAkCommonInitializationSettings CommonSettings;
    
    UPROPERTY(Config, EditAnywhere)
    FAkXboxOneGDKApuHeapInitializationSettings ApuHeapSettings;
    
    UPROPERTY(Config, EditAnywhere)
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    FAkXboxOneGDKAdvancedInitializationSettings AdvancedSettings;
    
    UFUNCTION()
    void MigrateMultiCoreRendering(bool NewValue);
    
    UAkXboxOneGDKInitializationSettings();
};

