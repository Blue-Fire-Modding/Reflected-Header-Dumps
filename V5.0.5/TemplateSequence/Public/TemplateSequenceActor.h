#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
//CROSS-MODULE INCLUDE: MovieScene MovieScenePlaybackClient
#include "TemplateSequenceBindingOverrideData.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneSequencePlaybackSettings
//CROSS-MODULE INCLUDE: CoreUObject SoftObjectPath
#include "TemplateSequenceActor.generated.h"

class UTemplateSequencePlayer;
class UTemplateSequence;

UCLASS()
class TEMPLATESEQUENCE_API ATemplateSequenceActor : public AActor, public IMovieScenePlaybackClient {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMovieSceneSequencePlaybackSettings PlaybackSettings;
    
    UPROPERTY(BlueprintReadOnly, Instanced, Replicated, Transient)
    UTemplateSequencePlayer* SequencePlayer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSoftObjectPath TemplateSequence;
    
    UPROPERTY(BlueprintReadOnly)
    FTemplateSequenceBindingOverrideData BindingOverride;
    
    UFUNCTION(BlueprintCallable)
    void SetSequence(UTemplateSequence* InSequence);
    
    UFUNCTION(BlueprintCallable)
    void SetBinding(AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    UTemplateSequence* LoadSequence() const;
    
    UFUNCTION(BlueprintPure)
    UTemplateSequencePlayer* GetSequencePlayer() const;
    
    UFUNCTION(BlueprintPure)
    UTemplateSequence* GetSequence() const;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ATemplateSequenceActor();
    
    // Fix for true pure virtual functions not being implemented
};

