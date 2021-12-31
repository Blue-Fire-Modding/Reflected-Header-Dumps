#pragma once
#include "CoreMinimal.h"
#include "SourceEffectBitCrusherSettings.h"
//CROSS-MODULE INCLUDE: Engine SoundEffectSourcePreset
#include "SourceEffectBitCrusherPreset.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class SYNTHESIS_API USourceEffectBitCrusherPreset : public USoundEffectSourcePreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSourceEffectBitCrusherSettings Settings;
    
    UFUNCTION(BlueprintCallable)
    void SetSettings(const FSourceEffectBitCrusherSettings& InSettings);
    
    USourceEffectBitCrusherPreset();
};

