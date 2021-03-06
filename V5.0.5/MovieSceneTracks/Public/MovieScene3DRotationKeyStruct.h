#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject FrameNumber
//CROSS-MODULE INCLUDE: MovieScene MovieSceneKeyStruct
//CROSS-MODULE INCLUDE: CoreUObject Rotator
#include "MovieScene3DRotationKeyStruct.generated.h"

USTRUCT()
struct FMovieScene3DRotationKeyStruct : public FMovieSceneKeyStruct {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRotator Rotation;
    
    UPROPERTY(EditAnywhere)
    FFrameNumber Time;
    
    MOVIESCENETRACKS_API FMovieScene3DRotationKeyStruct();
};

