#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "EMagicLeapPassableWorldError.h"
#include "MagicLeapARPinState.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: CoreUObject Rotator
#include "MagicLeapARPinFunctionLibrary.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_ThreeParams(FMagicLeapARPinFunctionLibraryDelegate, const TArray<FGuid>&, Added, const TArray<FGuid>&, Updated, const TArray<FGuid>&, Deleted);

UCLASS(BlueprintType)
class MAGICLEAPARPIN_API UMagicLeapARPinFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static void UnBindToOnMagicLeapARPinUpdatedDelegate(const FMagicLeapARPinFunctionLibraryDelegate& Delegate);
    
    UFUNCTION(BlueprintPure)
    static bool IsTrackerValid();
    
    UFUNCTION(BlueprintCallable)
    static EMagicLeapPassableWorldError GetNumAvailableARPins(int32& Count);
    
    UFUNCTION(BlueprintCallable)
    static EMagicLeapPassableWorldError GetClosestARPin(const FVector& SearchPoint, FGuid& PinID);
    
    UFUNCTION(BlueprintCallable)
    static EMagicLeapPassableWorldError GetAvailableARPins(int32 NumRequested, TArray<FGuid>& Pins);
    
    UFUNCTION(BlueprintPure)
    static FString GetARPinStateToString(const FMagicLeapARPinState& State);
    
    UFUNCTION(BlueprintCallable)
    static EMagicLeapPassableWorldError GetARPinState(const FGuid& PinID, FMagicLeapARPinState& State);
    
    UFUNCTION(BlueprintCallable)
    static bool GetARPinPositionAndOrientation_TrackingSpace(const FGuid& PinID, FVector& Position, FRotator& Orientation, bool& PinFoundInEnvironment);
    
    UFUNCTION(BlueprintCallable)
    static bool GetARPinPositionAndOrientation(const FGuid& PinID, FVector& Position, FRotator& Orientation, bool& PinFoundInEnvironment);
    
    UFUNCTION(BlueprintCallable)
    static EMagicLeapPassableWorldError DestroyTracker();
    
    UFUNCTION(BlueprintCallable)
    static EMagicLeapPassableWorldError CreateTracker();
    
    UFUNCTION(BlueprintCallable)
    static void BindToOnMagicLeapARPinUpdatedDelegate(const FMagicLeapARPinFunctionLibraryDelegate& Delegate);
    
    UMagicLeapARPinFunctionLibrary();
};

