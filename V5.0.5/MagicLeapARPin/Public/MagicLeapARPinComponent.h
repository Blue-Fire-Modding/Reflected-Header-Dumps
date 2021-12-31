#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine SceneComponent
#include "EMagicLeapAutoPinType.h"
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "MagicLeapARPinState.h"
#include "MagicLeapARPinComponent.generated.h"

class UMagicLeapARPinSaveGame;
class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMagicLeapARPinComponentOnPersistentEntityPinned, bool, bRestoredOrSynced);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMagicLeapARPinComponentOnPersistentEntityPinLost);

UCLASS(BlueprintType, EditInlineNew)
class MAGICLEAPARPIN_API UMagicLeapARPinComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString ObjectUID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 UserIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMagicLeapAutoPinType AutoPinType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShouldPinActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UMagicLeapARPinSaveGame> PinDataClass;
    
    UPROPERTY(BlueprintAssignable)
    FMagicLeapARPinComponentOnPersistentEntityPinned OnPersistentEntityPinned;
    
    UPROPERTY(BlueprintAssignable)
    FMagicLeapARPinComponentOnPersistentEntityPinLost OnPersistentEntityPinLost;
    
private:
    UPROPERTY()
    FGuid PinnedCFUID;
    
    UPROPERTY(Export)
    USceneComponent* PinnedSceneComponent;
    
    UPROPERTY()
    UMagicLeapARPinSaveGame* PinData;
    
public:
    UFUNCTION(BlueprintCallable)
    void UnPin();
    
    UFUNCTION(BlueprintCallable)
    bool PinSceneComponent(USceneComponent* ComponentToPin);
    
    UFUNCTION(BlueprintPure)
    bool PinRestoredOrSynced() const;
    
    UFUNCTION(BlueprintCallable)
    bool PinActor(AActor* ActorToPin);
    
    UFUNCTION(BlueprintPure)
    bool IsPinned() const;
    
    UFUNCTION(BlueprintPure)
    bool GetPinState(FMagicLeapARPinState& State) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetPinnedPinID(FGuid& PinID);
    
    UFUNCTION(BlueprintCallable)
    UMagicLeapARPinSaveGame* GetPinData(TSubclassOf<UMagicLeapARPinSaveGame> NewPinDataClass);
    
    UMagicLeapARPinComponent();
};

