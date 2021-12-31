#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "MobilePatchingLibrary.generated.h"

class UMobilePendingContent;
class UMobileInstalledContent;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FMobilePatchingLibraryOnFailed, FText, ErrorText, int32, ErrorCode);
UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FMobilePatchingLibraryOnSucceeded, UMobilePendingContent*, MobilePendingContent);

UCLASS(BlueprintType)
class MOBILEPATCHINGUTILS_API UMobilePatchingLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static void RequestContent(const FString& RemoteManifestURL, const FString& CloudURL, const FString& InstallDirectory, FMobilePatchingLibraryOnSucceeded OnSucceeded, FMobilePatchingLibraryOnFailed OnFailed);
    
    UFUNCTION(BlueprintPure)
    static bool HasActiveWiFiConnection();
    
    UFUNCTION(BlueprintPure)
    static TArray<FString> GetSupportedPlatformNames();
    
    UFUNCTION(BlueprintPure)
    static UMobileInstalledContent* GetInstalledContent(const FString& InstallDirectory);
    
    UFUNCTION(BlueprintPure)
    static FString GetActiveDeviceProfileName();
    
    UMobilePatchingLibrary();
};

