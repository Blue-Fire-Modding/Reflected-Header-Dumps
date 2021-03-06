#pragma once
#include "CoreMinimal.h"
#include "NamedInterface.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "NamedInterfaceDef.h"
#include "NamedInterfaces.generated.h"

UCLASS(Transient)
class UNamedInterfaces : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FNamedInterface> NamedInterfaces;
    
    UPROPERTY(Config)
    TArray<FNamedInterfaceDef> NamedInterfaceDefs;
    
public:
    UNamedInterfaces();
};

