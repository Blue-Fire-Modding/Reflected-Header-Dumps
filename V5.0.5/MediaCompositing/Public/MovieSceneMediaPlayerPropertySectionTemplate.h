#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieScenePropertySectionTemplate
//CROSS-MODULE INCLUDE: CoreUObject FrameNumber
#include "MovieSceneMediaPlayerPropertySectionTemplate.generated.h"

class UMediaSource;

USTRUCT()
struct FMovieSceneMediaPlayerPropertySectionTemplate : public FMovieScenePropertySectionTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UMediaSource* MediaSource;
    
    UPROPERTY()
    FFrameNumber SectionStartFrame;
    
    UPROPERTY()
    bool bLoop;
    
public:
    MEDIACOMPOSITING_API FMovieSceneMediaPlayerPropertySectionTemplate();
};

