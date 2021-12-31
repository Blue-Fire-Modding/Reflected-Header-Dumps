#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneSection
//CROSS-MODULE INCLUDE: Engine RichCurve
#include "MovieSceneFloatChannelSerializationHelper.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneFloatChannel
#include "MovieSceneAkAudioRTPCSection.generated.h"

class UAkRtpc;

UCLASS()
class AKAUDIO_API UMovieSceneAkAudioRTPCSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UAkRtpc* RTPC;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FString Name;
    
    UPROPERTY()
    FRichCurve FloatCurve;
    
    UPROPERTY()
    FMovieSceneFloatChannelSerializationHelper FloatChannelSerializationHelper;
    
    UPROPERTY()
    FMovieSceneFloatChannel RTPCChannel;
    
public:
    UMovieSceneAkAudioRTPCSection();
};

