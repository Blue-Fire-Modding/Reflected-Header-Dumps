#pragma once
#include "CoreMinimal.h"
#include "MobileInstalledContent.h"
#include "MobilePendingContent.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FMobilePendingContentOnFailed, FText, ErrorText, int32, ErrorCode);
UDELEGATE() DECLARE_DYNAMIC_DELEGATE(FMobilePendingContentOnSucceeded);

UCLASS()
class MOBILEPATCHINGUTILS_API UMobilePendingContent : public UMobileInstalledContent {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    void StartInstall(FMobilePendingContentOnSucceeded OnSucceeded, FMobilePendingContentOnFailed OnFailed);
    
    UFUNCTION(BlueprintPure)
    float GetTotalDownloadedSize();
    
    UFUNCTION(BlueprintPure)
    float GetRequiredDiskSpace();
    
    UFUNCTION(BlueprintPure)
    float GetInstallProgress();
    
    UFUNCTION(BlueprintPure)
    FText GetDownloadStatusText();
    
    UFUNCTION(BlueprintPure)
    float GetDownloadSpeed();
    
    UFUNCTION(BlueprintPure)
    float GetDownloadSize();
    
    UMobilePendingContent();
};

