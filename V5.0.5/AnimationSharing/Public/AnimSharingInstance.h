#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "AnimSharingInstance.generated.h"

class UEnum;
class AActor;
class UAnimationSharingStateProcessor;
class UAnimSequence;

UCLASS()
class UAnimSharingInstance : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleAnywhere)
    TArray<AActor*> RegisteredActors;
    
    UPROPERTY(EditAnywhere, Transient)
    UAnimationSharingStateProcessor* StateProcessor;
    
    UPROPERTY(Transient, VisibleAnywhere)
    TArray<UAnimSequence*> UsedAnimationSequences;
    
    UPROPERTY(Transient, VisibleAnywhere)
    UEnum* StateEnum;
    
    UPROPERTY(Transient, VisibleAnywhere)
    AActor* SharingActor;
    
    UAnimSharingInstance();
};

