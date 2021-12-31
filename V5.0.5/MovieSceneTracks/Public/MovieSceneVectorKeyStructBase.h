#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject FrameNumber
//CROSS-MODULE INCLUDE: MovieScene MovieSceneKeyStruct
#include "MovieSceneVectorKeyStructBase.generated.h"

USTRUCT()
struct FMovieSceneVectorKeyStructBase : public FMovieSceneKeyStruct {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FFrameNumber Time;
    
    MOVIESCENETRACKS_API FMovieSceneVectorKeyStructBase();
};

