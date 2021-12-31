#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneObjectBindingID
//CROSS-MODULE INCLUDE: MovieScene MovieSceneSection
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "MovieSceneCameraCutSection.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneCameraCutSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FGuid CameraGuid;
    
    UPROPERTY(EditAnywhere)
    FMovieSceneObjectBindingID CameraBindingID;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCameraBindingID(const FMovieSceneObjectBindingID& InCameraBindingID);
    
    UFUNCTION(BlueprintPure)
    FMovieSceneObjectBindingID GetCameraBindingID() const;
    
    UMovieSceneCameraCutSection();
};

