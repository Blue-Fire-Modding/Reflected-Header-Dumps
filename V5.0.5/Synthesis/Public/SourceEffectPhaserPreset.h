#pragma once
#include "CoreMinimal.h"
#include "SourceEffectPhaserSettings.h"
//CROSS-MODULE INCLUDE: Engine SoundEffectSourcePreset
#include "SourceEffectPhaserPreset.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class SYNTHESIS_API USourceEffectPhaserPreset : public USoundEffectSourcePreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSourceEffectPhaserSettings Settings;
    
    UFUNCTION(BlueprintCallable)
    void SetSettings(const FSourceEffectPhaserSettings& InSettings);
    
    USourceEffectPhaserPreset();
};

