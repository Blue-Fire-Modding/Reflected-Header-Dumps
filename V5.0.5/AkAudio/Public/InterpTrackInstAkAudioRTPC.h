#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine InterpTrackInst
#include "InterpTrackInstAkAudioRTPC.generated.h"

UCLASS()
class UInterpTrackInstAkAudioRTPC : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY()
    float LastUpdatePosition;
    
    UInterpTrackInstAkAudioRTPC();
};

