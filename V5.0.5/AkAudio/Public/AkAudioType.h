#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "AkAudioType.generated.h"

UCLASS()
class AKAUDIO_API UAkAudioType : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    uint32 ShortID;
    
    UPROPERTY(EditAnywhere)
    TArray<UObject*> UserData;
    
    UAkAudioType();
};

