#pragma once
#include "CoreMinimal.h"
#include "ENiagaraSystemSpawnSectionEndBehavior.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneTrackImplementation
//CROSS-MODULE INCLUDE: CoreUObject FrameNumber
#include "ENiagaraSystemSpawnSectionStartBehavior.h"
#include "ENiagaraSystemSpawnSectionEvaluateBehavior.h"
#include "ENiagaraAgeUpdateMode.h"
#include "MovieSceneNiagaraSystemTrackImplementation.generated.h"

USTRUCT()
struct FMovieSceneNiagaraSystemTrackImplementation : public FMovieSceneTrackImplementation {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FFrameNumber SpawnSectionStartFrame;
    
    UPROPERTY()
    FFrameNumber SpawnSectionEndFrame;
    
    UPROPERTY()
    ENiagaraSystemSpawnSectionStartBehavior SpawnSectionStartBehavior;
    
    UPROPERTY()
    ENiagaraSystemSpawnSectionEvaluateBehavior SpawnSectionEvaluateBehavior;
    
    UPROPERTY()
    ENiagaraSystemSpawnSectionEndBehavior SpawnSectionEndBehavior;
    
    UPROPERTY()
    ENiagaraAgeUpdateMode AgeUpdateMode;
    
public:
    NIAGARA_API FMovieSceneNiagaraSystemTrackImplementation();
};

