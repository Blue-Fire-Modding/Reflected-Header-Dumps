#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine SceneComponent
#include "AkPoly.h"
#include "AkSurfaceReflectorSetComponent.generated.h"

class AActor;

UCLASS(BlueprintType)
class AKAUDIO_API UAkSurfaceReflectorSetComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bEnableSurfaceReflectors: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FAkPoly> AcousticPolys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bEnableDiffraction: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bEnableDiffractionOnBoundaryEdges: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* AssociatedRoom;
    
    UFUNCTION(BlueprintCallable)
    void UpdateSurfaceReflectorSet();
    
    UFUNCTION(BlueprintCallable)
    void SendSurfaceReflectorSet();
    
    UFUNCTION(BlueprintCallable)
    void RemoveSurfaceReflectorSet();
    
    UAkSurfaceReflectorSetComponent();
};

