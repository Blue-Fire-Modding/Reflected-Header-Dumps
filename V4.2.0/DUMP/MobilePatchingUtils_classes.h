// Class MobilePatchingUtils.MobileInstalledContent
// Size: 0x48 (Inherited: 0x28)
struct UMobileInstalledContent : UObject {

	bool Mount(int32_t PakOrder, FString MountPoint);
	float GetInstalledContentSize();
	float GetDiskFreeSpace();
};

// Class MobilePatchingUtils.MobilePendingContent
// Size: 0x88 (Inherited: 0x48)
struct UMobilePendingContent : UMobileInstalledContent {

	void StartInstall(FDelegate OnSucceeded, FDelegate OnFailed);
	float GetTotalDownloadedSize();
	float GetRequiredDiskSpace();
	float GetInstallProgress();
	FText GetDownloadStatusText();
	float GetDownloadSpeed();
	float GetDownloadSize();
};

// Class MobilePatchingUtils.MobilePatchingLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMobilePatchingLibrary : UBlueprintFunctionLibrary {

	void RequestContent(FString RemoteManifestURL, FString CloudURL, FString InstallDirectory, FDelegate OnSucceeded, FDelegate OnFailed);
	bool HasActiveWiFiConnection();
	TArray<FString> GetSupportedPlatformNames();
	UMobileInstalledContent* GetInstalledContent(FString InstallDirectory);
	FString GetActiveDeviceProfileName();
};

