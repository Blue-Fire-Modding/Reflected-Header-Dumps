#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Volume
#include "AkSpatialAudioVolume.generated.h"

class UAkSurfaceReflectorSetComponent;
class UAkRoomComponent;
class UAkLateReverbComponent;

UCLASS()
class AKAUDIO_API AAkSpatialAudioVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UAkSurfaceReflectorSetComponent* SurfaceReflectorSet;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UAkLateReverbComponent* LateReverb;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UAkRoomComponent* Room;
    
    AAkSpatialAudioVolume();
};

