#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintAsyncActionBase
#include "ReadStringArrayToColorArray.generated.h"

class UReadStringArrayToColorArray;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FReadStringArrayToColorArrayOnSuccess, const TArray<FString>&, ColorPixels, const FString&, Data);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FReadStringArrayToColorArrayOnFail, const TArray<FString>&, ColorPixels, const FString&, Data);

UCLASS()
class PROA34_API UReadStringArrayToColorArray : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FReadStringArrayToColorArrayOnSuccess OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FReadStringArrayToColorArrayOnFail OnFail;
    
    UPROPERTY()
    FString TempString;
    
    UFUNCTION(BlueprintCallable)
    static UReadStringArrayToColorArray* ReadStringArray(const FString& StringArray);
    
    UReadStringArrayToColorArray();
};

