#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "SHAHashData.h"
#include "ChunkInfoData.generated.h"

USTRUCT(BlueprintType)
struct FChunkInfoData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid Guid;
    
    UPROPERTY()
    uint64 Hash;
    
    UPROPERTY()
    FSHAHashData ShaHash;
    
    UPROPERTY()
    int64 FileSize;
    
    UPROPERTY()
    uint8 GroupNumber;
    
    BUILDPATCHSERVICES_API FChunkInfoData();
};

