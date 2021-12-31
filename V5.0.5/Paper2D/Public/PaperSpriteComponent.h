#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine MeshComponent
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
#include "PaperSpriteComponent.generated.h"

class UPaperSprite;
class UMaterialInterface;

UCLASS()
class PAPER2D_API UPaperSpriteComponent : public UMeshComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UPaperSprite* SourceSprite;
    
    UPROPERTY()
    UMaterialInterface* MaterialOverride;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    FLinearColor SpriteColor;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetSpriteColor(FLinearColor NewColor);
    
    UFUNCTION(BlueprintCallable)
    bool SetSprite(UPaperSprite* NewSprite);
    
    UFUNCTION(BlueprintPure)
    UPaperSprite* GetSprite();
    
    UPaperSpriteComponent();
};

