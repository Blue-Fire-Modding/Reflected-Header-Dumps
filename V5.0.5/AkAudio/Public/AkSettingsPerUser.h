#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
//CROSS-MODULE INCLUDE: Engine DirectoryPath
//CROSS-MODULE INCLUDE: Engine FilePath
#include "AkSettingsPerUser.generated.h"

UCLASS(Config=EditorPerProjectUserSettings)
class AKAUDIO_API UAkSettingsPerUser : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FDirectoryPath WwiseWindowsInstallationPath;
    
    UPROPERTY(Config, EditAnywhere)
    FFilePath WwiseMacInstallationPath;
    
    UPROPERTY(Config, EditAnywhere)
    bool EnableAutomaticAssetSynchronization;
    
    UPROPERTY(Config, EditAnywhere)
    FString WaapiIPAddress;
    
    UPROPERTY(Config, EditAnywhere)
    uint32 WaapiPort;
    
    UPROPERTY(Config, EditAnywhere)
    bool bAutoConnectToWAAPI;
    
    UPROPERTY(Config, EditAnywhere)
    bool AutoSyncSelection;
    
    UPROPERTY(Config)
    bool SuppressWwiseProjectPathWarnings;
    
    UPROPERTY(Config)
    bool SoundDataGenerationSkipLanguage;
    
    UAkSettingsPerUser();
};

