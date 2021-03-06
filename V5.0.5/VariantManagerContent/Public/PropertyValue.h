#pragma once
#include "CoreMinimal.h"
#include "CapturedPropSegment.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "EPropertyValueCategory.h"
#include "PropertyValue.generated.h"

UCLASS(BlueprintType)
class VARIANTMANAGERCONTENT_API UPropertyValue : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<TFieldPath<FNone>> Properties;
    
    UPROPERTY()
    TArray<int32> PropertyIndices;
    
    UPROPERTY()
    TArray<FCapturedPropSegment> CapturedPropSegments;
    
    UPROPERTY()
    FString FullDisplayString;
    
    UPROPERTY()
    FName PropertySetterName;
    
    UPROPERTY()
    TMap<FString, FString> PropertySetterParameterDefaults;
    
    UPROPERTY()
    bool bHasRecordedData;
    
    UPROPERTY()
    UClass* LeafPropertyClass;
    
    UPROPERTY()
    TArray<uint8> ValueBytes;
    
    UPROPERTY()
    EPropertyValueCategory PropCategory;
    
public:
    UFUNCTION(BlueprintPure)
    bool HasRecordedData() const;
    
    UFUNCTION(BlueprintPure)
    FText GetPropertyTooltip() const;
    
    UFUNCTION(BlueprintPure)
    FString GetFullDisplayString() const;
    
    UPropertyValue();
};

