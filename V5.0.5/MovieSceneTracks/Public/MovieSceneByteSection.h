#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneByteChannel
//CROSS-MODULE INCLUDE: MovieScene MovieSceneSection
#include "MovieSceneByteSection.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneByteSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMovieSceneByteChannel ByteCurve;
    
    UMovieSceneByteSection();
};

