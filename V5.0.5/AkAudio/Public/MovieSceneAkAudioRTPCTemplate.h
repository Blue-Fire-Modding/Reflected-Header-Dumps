#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneEvalTemplate
#include "MovieSceneAkAudioRTPCTemplate.generated.h"

class UMovieSceneAkAudioRTPCSection;

USTRUCT()
struct AKAUDIO_API FMovieSceneAkAudioRTPCTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UMovieSceneAkAudioRTPCSection* Section;
    
    FMovieSceneAkAudioRTPCTemplate();
};

