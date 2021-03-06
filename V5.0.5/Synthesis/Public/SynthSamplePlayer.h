#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AudioMixer SynthComponent
#include "ESamplePlayerSeekType.h"
#include "SynthSamplePlayer.generated.h"

class USoundWave;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSynthSamplePlayerOnSampleLoaded);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSynthSamplePlayerOnSamplePlaybackProgress, float, ProgressPercent, float, ProgressTimeSeconds);

UCLASS()
class SYNTHESIS_API USynthSamplePlayer : public USynthComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundWave* SoundWave;
    
    UPROPERTY(BlueprintAssignable)
    FSynthSamplePlayerOnSampleLoaded OnSampleLoaded;
    
    UPROPERTY(BlueprintAssignable)
    FSynthSamplePlayerOnSamplePlaybackProgress OnSamplePlaybackProgress;
    
    UFUNCTION(BlueprintCallable)
    void SetSoundWave(USoundWave* InSoundWave);
    
    UFUNCTION(BlueprintCallable)
    void SetScrubTimeWidth(float InScrubTimeWidthSec);
    
    UFUNCTION(BlueprintCallable)
    void SetScrubMode(bool bScrubMode);
    
    UFUNCTION(BlueprintCallable)
    void SetPitch(float InPitch, float TimeSec);
    
    UFUNCTION(BlueprintCallable)
    void SeekToTime(float TimeSec, ESamplePlayerSeekType SeekType, bool bWrap);
    
    UFUNCTION(BlueprintPure)
    bool IsLoaded() const;
    
    UFUNCTION(BlueprintPure)
    float GetSampleDuration() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentPlaybackProgressTime() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentPlaybackProgressPercent() const;
    
    USynthSamplePlayer();
};

