#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneSequencePlaybackSettings
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "ActorSequenceComponent.generated.h"

class UActorSequencePlayer;
class UActorSequence;

UCLASS(BlueprintType)
class ACTORSEQUENCE_API UActorSequenceComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FMovieSceneSequencePlaybackSettings PlaybackSettings;
    
    UPROPERTY(EditAnywhere, Instanced)
    UActorSequence* Sequence;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UActorSequencePlayer* SequencePlayer;
    
public:
    UActorSequenceComponent();
};

