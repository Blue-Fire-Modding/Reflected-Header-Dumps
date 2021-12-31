#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "MobileInstalledContent.generated.h"

UCLASS(BlueprintType)
class MOBILEPATCHINGUTILS_API UMobileInstalledContent : public UObject {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    bool Mount(int32 PakOrder, const FString& MountPoint);
    
    UFUNCTION(BlueprintPure)
    float GetInstalledContentSize();
    
    UFUNCTION(BlueprintPure)
    float GetDiskFreeSpace();
    
    UMobileInstalledContent();
};

