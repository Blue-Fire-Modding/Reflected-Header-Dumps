#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine SoundBase
#include "SoundVariation.h"
#include "SoundSimple.generated.h"

class USoundWave;

UCLASS(EditInlineNew)
class SOUNDUTILITIES_API USoundSimple : public USoundBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FSoundVariation> Variations;
    
protected:
    UPROPERTY(Transient)
    USoundWave* SoundWave;
    
public:
    USoundSimple();
};

