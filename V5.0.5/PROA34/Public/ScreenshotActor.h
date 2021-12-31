#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Color
//CROSS-MODULE INCLUDE: Engine Actor
#include "EViewCaptureOutcomes.h"
#include "ScreenshotActor.generated.h"

class USceneCaptureComponent2D;

UCLASS()
class PROA34_API AScreenshotActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export, Transient)
    USceneCaptureComponent2D* Camera;
    
    UFUNCTION(BlueprintCallable)
    void SetCameraToPlayerView(TEnumAsByte<EViewCaptureOutcomes>& Outcome);
    
    UFUNCTION(BlueprintCallable)
    void CapturePlayersView(TEnumAsByte<EViewCaptureOutcomes>& Outcome, int32 Resolution, TArray<FColor>& ColorData);
    
    AScreenshotActor();
};

