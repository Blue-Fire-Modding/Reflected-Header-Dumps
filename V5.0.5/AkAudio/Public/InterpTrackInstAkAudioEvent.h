#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine InterpTrackInst
#include "InterpTrackInstAkAudioEvent.generated.h"

UCLASS(MinimalAPI)
class UInterpTrackInstAkAudioEvent : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY()
    float LastUpdatePosition;
    
    UInterpTrackInstAkAudioEvent();
};

