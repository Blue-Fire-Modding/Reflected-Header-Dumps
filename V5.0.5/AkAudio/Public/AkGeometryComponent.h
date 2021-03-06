#pragma once
#include "CoreMinimal.h"
#include "AkGeometryData.h"
//CROSS-MODULE INCLUDE: Engine SceneComponent
#include "AkMeshType.h"
#include "AkGeometrySurfaceOverride.h"
#include "AkGeometryComponent.generated.h"

class AActor;
class UMaterialInterface;

UCLASS(BlueprintType)
class AKAUDIO_API UAkGeometryComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    AkMeshType MeshType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LOD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WeldingThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<UMaterialInterface*, FAkGeometrySurfaceOverride> StaticMeshSurfaceOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAkGeometrySurfaceOverride CollisionMeshSurfaceOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bEnableDiffraction: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bEnableDiffractionOnBoundaryEdges: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* AssociatedRoom;
    
private:
    UPROPERTY()
    FAkGeometryData GeometryData;
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateGeometry();
    
    UFUNCTION(BlueprintCallable)
    void RemoveGeometry();
    
    UFUNCTION(BlueprintCallable)
    void ConvertMesh();
    
    UAkGeometryComponent();
};

