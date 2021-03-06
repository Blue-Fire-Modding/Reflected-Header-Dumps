#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintAsyncActionBase
#include "XRDeviceId.h"
//CROSS-MODULE INCLUDE: CoreUObject Transform
#include "AsyncTask_LoadXRDeviceVisComponent.generated.h"

class UPrimitiveComponent;
class UAsyncTask_LoadXRDeviceVisComponent;
class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAsyncTask_LoadXRDeviceVisComponentOnModelLoaded, const UPrimitiveComponent*, LoadedComponent);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAsyncTask_LoadXRDeviceVisComponentOnLoadFailure, const UPrimitiveComponent*, LoadedComponent);

UCLASS()
class UAsyncTask_LoadXRDeviceVisComponent : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FAsyncTask_LoadXRDeviceVisComponentOnModelLoaded OnModelLoaded;
    
    UPROPERTY(BlueprintAssignable)
    FAsyncTask_LoadXRDeviceVisComponentOnLoadFailure OnLoadFailure;
    
private:
    UPROPERTY(Export)
    UPrimitiveComponent* SpawnedComponent;
    
public:
    UFUNCTION(BlueprintCallable)
    static UAsyncTask_LoadXRDeviceVisComponent* AddNamedDeviceVisualizationComponentAsync(AActor* Target, const FName SystemName, const FName DeviceName, bool bManualAttachment, const FTransform& RelativeTransform, FXRDeviceId& XRDeviceId, UPrimitiveComponent*& NewComponent);
    
    UFUNCTION(BlueprintCallable)
    static UAsyncTask_LoadXRDeviceVisComponent* AddDeviceVisualizationComponentAsync(AActor* Target, const FXRDeviceId& XRDeviceId, bool bManualAttachment, const FTransform& RelativeTransform, UPrimitiveComponent*& NewComponent);
    
    UAsyncTask_LoadXRDeviceVisComponent();
};

