#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject FrameNumber
//CROSS-MODULE INCLUDE: MovieScene MovieSceneKeyStruct
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
#include "MovieSceneColorKeyStruct.generated.h"

USTRUCT()
struct FMovieSceneColorKeyStruct : public FMovieSceneKeyStruct {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FLinearColor Color;
    
    UPROPERTY(EditAnywhere)
    FFrameNumber Time;
    
    MOVIESCENETRACKS_API FMovieSceneColorKeyStruct();
};

