#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneEvalTemplate
#include "MovieSceneAkAudioEventTemplate.generated.h"

class UMovieSceneAkAudioEventSection;

USTRUCT()
struct AKAUDIO_API FMovieSceneAkAudioEventTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UMovieSceneAkAudioEventSection* Section;
    
    FMovieSceneAkAudioEventTemplate();
};

