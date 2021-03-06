#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject FrameNumber
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: MovieScene MovieSceneKeyStruct
#include "MovieScene3DLocationKeyStruct.generated.h"

USTRUCT()
struct FMovieScene3DLocationKeyStruct : public FMovieSceneKeyStruct {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector Location;
    
    UPROPERTY(EditAnywhere)
    FFrameNumber Time;
    
    MOVIESCENETRACKS_API FMovieScene3DLocationKeyStruct();
};

