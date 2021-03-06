#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine StaticMeshComponent
//CROSS-MODULE INCLUDE: CoreUObject IntPoint
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "LandscapeMeshProxyComponent.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class ULandscapeMeshProxyComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FGuid LandscapeGuid;
    
    UPROPERTY()
    TArray<FIntPoint> ProxyComponentBases;
    
    UPROPERTY()
    int8 ProxyLOD;
    
public:
    ULandscapeMeshProxyComponent();
};

