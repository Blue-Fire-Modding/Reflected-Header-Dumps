#pragma once
#include "CoreMinimal.h"
#include "PlayerReservation.h"
//CROSS-MODULE INCLUDE: Engine UniqueNetIdRepl
#include "SpectatorReservation.generated.h"

USTRUCT(BlueprintType)
struct ONLINESUBSYSTEMUTILS_API FSpectatorReservation {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FUniqueNetIdRepl SpectatorId;
    
    UPROPERTY(Transient)
    FPlayerReservation Spectator;
    
    FSpectatorReservation();
};

