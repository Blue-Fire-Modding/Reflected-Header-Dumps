#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine MeshComponent
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
#include "PaperFlipbookComponent.generated.h"

class UPaperFlipbook;
class UMaterialInterface;
class UBodySetup;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPaperFlipbookComponentOnFinishedPlaying);

UCLASS()
class PAPER2D_API UPaperFlipbookComponent : public UMeshComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_SourceFlipbook)
    UPaperFlipbook* SourceFlipbook;
    
    UPROPERTY()
    UMaterialInterface* Material;
    
    UPROPERTY(EditAnywhere)
    float PlayRate;
    
    UPROPERTY()
    uint8 bLooping: 1;
    
    UPROPERTY()
    uint8 bReversePlayback: 1;
    
    UPROPERTY()
    uint8 bPlaying: 1;
    
    UPROPERTY()
    float AccumulatedTime;
    
    UPROPERTY()
    int32 CachedFrameIndex;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    FLinearColor SpriteColor;
    
    UPROPERTY(Transient)
    UBodySetup* CachedBodySetup;
    
public:
    UPROPERTY(BlueprintAssignable)
    FPaperFlipbookComponentOnFinishedPlaying OnFinishedPlaying;
    
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void SetSpriteColor(FLinearColor NewColor);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayRate(float NewRate);
    
    UFUNCTION(BlueprintCallable)
    void SetPlaybackPositionInFrames(int32 NewFramePosition, bool bFireEvents);
    
    UFUNCTION(BlueprintCallable)
    void SetPlaybackPosition(float NewPosition, bool bFireEvents);
    
    UFUNCTION(BlueprintCallable)
    void SetNewTime(float NewTime);
    
    UFUNCTION(BlueprintCallable)
    void SetLooping(bool bNewLooping);
    
    UFUNCTION(BlueprintCallable)
    bool SetFlipbook(UPaperFlipbook* NewFlipbook);
    
    UFUNCTION(BlueprintCallable)
    void ReverseFromEnd();
    
    UFUNCTION(BlueprintCallable)
    void Reverse();
    
    UFUNCTION(BlueprintCallable)
    void PlayFromStart();
    
    UFUNCTION(BlueprintCallable)
    void Play();
    
protected:
    UFUNCTION()
    void OnRep_SourceFlipbook(UPaperFlipbook* OldFlipbook);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsReversing() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPlaying() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLooping() const;
    
    UFUNCTION(BlueprintPure)
    float GetPlayRate() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetPlaybackPositionInFrames() const;
    
    UFUNCTION(BlueprintPure)
    float GetPlaybackPosition() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetFlipbookLengthInFrames() const;
    
    UFUNCTION(BlueprintPure)
    float GetFlipbookLength() const;
    
    UFUNCTION(BlueprintPure)
    float GetFlipbookFramerate() const;
    
    UFUNCTION(BlueprintPure)
    UPaperFlipbook* GetFlipbook();
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UPaperFlipbookComponent();
};

