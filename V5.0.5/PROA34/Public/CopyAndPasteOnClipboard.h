#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "CopyAndPasteOnClipboard.generated.h"

UCLASS(BlueprintType)
class PROA34_API UCopyAndPasteOnClipboard : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
private:
    UFUNCTION(BlueprintCallable)
    static FString PasteCodeFromClipboard();
    
    UFUNCTION(BlueprintCallable)
    static void CopyCodeToClipboard(const FString& code);
    
public:
    UCopyAndPasteOnClipboard();
};

