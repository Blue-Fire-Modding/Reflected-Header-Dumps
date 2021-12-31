#pragma once
#include "CoreMinimal.h"
#include "CustomMeshTriangle.h"
//CROSS-MODULE INCLUDE: Engine MeshComponent
#include "CustomMeshComponent.generated.h"

UCLASS(EditInlineNew)
class CUSTOMMESHCOMPONENT_API UCustomMeshComponent : public UMeshComponent {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    bool SetCustomMeshTriangles(const TArray<FCustomMeshTriangle>& Triangles);
    
    UFUNCTION(BlueprintCallable)
    void ClearCustomMeshTriangles();
    
    UFUNCTION(BlueprintCallable)
    void AddCustomMeshTriangles(const TArray<FCustomMeshTriangle>& Triangles);
    
    UCustomMeshComponent();
};

