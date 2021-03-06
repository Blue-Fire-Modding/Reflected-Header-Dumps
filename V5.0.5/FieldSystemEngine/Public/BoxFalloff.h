#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: FieldSystemCore EFieldFalloffType
#include "FieldNodeFloat.h"
//CROSS-MODULE INCLUDE: CoreUObject Transform
#include "BoxFalloff.generated.h"

class UBoxFalloff;

UCLASS(BlueprintType)
class FIELDSYSTEMENGINE_API UBoxFalloff : public UFieldNodeFloat {
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
    FTransform Transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EFieldFalloffType> Falloff;
    
    UFUNCTION(BlueprintPure)
    UBoxFalloff* SetBoxFalloff(float NewMagnitude, float NewMinRange, float NewMaxRange, float NewDefault, FTransform NewTransform, TEnumAsByte<EFieldFalloffType> NewFalloff);
    
    UBoxFalloff();
};

