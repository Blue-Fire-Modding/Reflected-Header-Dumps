#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneByteChannel
//CROSS-MODULE INCLUDE: MovieScene MovieSceneSection
#include "MovieSceneEnumSection.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneEnumSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMovieSceneByteChannel EnumCurve;
    
    UMovieSceneEnumSection();
};

