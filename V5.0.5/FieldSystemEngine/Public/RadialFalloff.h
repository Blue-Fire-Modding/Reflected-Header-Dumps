#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: FieldSystemCore EFieldFalloffType
#include "FieldNodeFloat.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "RadialFalloff.generated.h"

class URadialFalloff;

UCLASS(BlueprintType)
class FIELDSYSTEMENGINE_API URadialFalloff : public UFieldNodeFloat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Magnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EFieldFalloffType> Falloff;
    
    UFUNCTION(BlueprintPure)
    URadialFalloff* SetRadialFalloff(float NewMagnitude, float NewMinRange, float NewMaxRange, float NewDefault, float NewRadius, FVector NewPosition, TEnumAsByte<EFieldFalloffType> NewFalloff);
    
    URadialFalloff();
};

