#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject FrameNumber
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: MovieScene MovieSceneKeyStruct
#include "MovieScene3DScaleKeyStruct.generated.h"

USTRUCT()
struct FMovieScene3DScaleKeyStruct : public FMovieSceneKeyStruct {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector Scale;
    
    UPROPERTY(EditAnywhere)
    FFrameNumber Time;
    
    MOVIESCENETRACKS_API FMovieScene3DScaleKeyStruct();
};

