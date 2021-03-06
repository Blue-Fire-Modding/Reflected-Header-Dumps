#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneSequencePlayer
//CROSS-MODULE INCLUDE: MovieScene MovieSceneSequencePlaybackSettings
#include "LevelSequencePlayer.generated.h"

class ALevelSequenceActor;
class UCameraComponent;
class ULevelSequencePlayer;
class UObject;
class ULevelSequence;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLevelSequencePlayerOnCameraCut, UCameraComponent*, CameraComponent);

UCLASS()
class LEVELSEQUENCE_API ULevelSequencePlayer : public UMovieSceneSequencePlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FLevelSequencePlayerOnCameraCut OnCameraCut;
    
    UFUNCTION(BlueprintPure)
    UCameraComponent* GetActiveCameraComponent() const;
    
    UFUNCTION(BlueprintCallable)
    static ULevelSequencePlayer* CreateLevelSequencePlayer(UObject* WorldContextObject, ULevelSequence* LevelSequence, FMovieSceneSequencePlaybackSettings Settings, ALevelSequenceActor*& OutActor);
    
    ULevelSequencePlayer();
};

