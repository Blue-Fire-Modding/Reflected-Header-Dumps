#include "MobilePatchingLibrary.h"

class UMobilePendingContent;
class UMobileInstalledContent;

void UMobilePatchingLibrary::RequestContent(const FString& RemoteManifestURL, const FString& CloudURL, const FString& InstallDirectory, FMobilePatchingLibraryOnSucceeded OnSucceeded, FMobilePatchingLibraryOnFailed OnFailed) {
}

bool UMobilePatchingLibrary::HasActiveWiFiConnection() {
    return false;
}

TArray<FString> UMobilePatchingLibrary::GetSupportedPlatformNames() {
    return TArray<FString>();
}

UMobileInstalledContent* UMobilePatchingLibrary::GetInstalledContent(const FString& InstallDirectory) {
    return NULL;
}

FString UMobilePatchingLibrary::GetActiveDeviceProfileName() {
    return TEXT("");
}

UMobilePatchingLibrary::UMobilePatchingLibrary() {
}

