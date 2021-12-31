#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "RobiObject.generated.h"

class UObject;

UCLASS()
class PROA34_API ARobiObject : public AActor {
    GENERATED_BODY()
public:
private:
    UFUNCTION(BlueprintPure)
    bool IsRobiValid(const UObject* Object);
    
public:
    ARobiObject();
};

