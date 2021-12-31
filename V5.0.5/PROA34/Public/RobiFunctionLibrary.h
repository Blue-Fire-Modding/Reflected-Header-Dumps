#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "RobiFunctionLibrary.generated.h"

class UObject;
class AActor;

UCLASS(BlueprintType)
class PROA34_API URobiFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure)
    static bool IsRobiValid(const UObject* Object);
    
    UFUNCTION(BlueprintPure)
    static bool IsInFrustum(const AActor* Actor);
    
    URobiFunctionLibrary();
};

