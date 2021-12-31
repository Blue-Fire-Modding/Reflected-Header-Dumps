#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintAsyncActionBase
//CROSS-MODULE INCLUDE: CoreUObject Color
#include "PixelArrayToStringArray.generated.h"

class UPixelArrayToStringArray;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPixelArrayToStringArrayOnSucess, const FString&, PixelArray, const FString&, Data);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPixelArrayToStringArrayOnFail, const FString&, PixelArray, const FString&, Data);

UCLASS()
class PROA34_API UPixelArrayToStringArray : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FPixelArrayToStringArrayOnSucess OnSucess;
    
    UPROPERTY(BlueprintAssignable)
    FPixelArrayToStringArrayOnFail OnFail;
    
    UPROPERTY()
    TArray<FColor> TempPixelArray;
    
    UPROPERTY()
    FString TempString;
    
    UFUNCTION(BlueprintCallable)
    static UPixelArrayToStringArray* PixelColorToString(const TArray<FColor> PixelColorArray);
    
    UPixelArrayToStringArray();
};

