#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SlateCore PointerEvent
#include "Widget.h"
//CROSS-MODULE INCLUDE: SlateCore SlateBrush
//CROSS-MODULE INCLUDE: SlateCore SlateColor
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
//CROSS-MODULE INCLUDE: SlateCore Geometry
#include "EventReply.h"
#include "Image.generated.h"

class UTexture2D;
class UObject;
class UTexture2DDynamic;
class USlateBrushAsset;
class UMaterialInterface;
class USlateTextureAtlasInterface;
class ISlateTextureAtlasInterface;
class UMaterialInstanceDynamic;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_RetVal(FSlateBrush, FImageBrushDelegate);
UDELEGATE() DECLARE_DYNAMIC_DELEGATE_RetVal_TwoParams(FEventReply, FImageOnMouseButtonDownEvent, FGeometry, MyGeometry, const FPointerEvent&, MouseEvent);
UDELEGATE() DECLARE_DYNAMIC_DELEGATE_RetVal(FLinearColor, FImageColorAndOpacityDelegate);

UCLASS()
class UMG_API UImage : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateBrush Brush;
    
    UPROPERTY()
    FImageBrushDelegate BrushDelegate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor ColorAndOpacity;
    
    UPROPERTY()
    FImageColorAndOpacityDelegate ColorAndOpacityDelegate;
    
    UPROPERTY(EditAnywhere)
    bool bFlipForRightToLeftFlowDirection;
    
    UPROPERTY(EditAnywhere)
    FImageOnMouseButtonDownEvent OnMouseButtonDownEvent;
    
    UFUNCTION(BlueprintCallable)
    void SetOpacity(float InOpacity);
    
    UFUNCTION(BlueprintCallable)
    void SetColorAndOpacity(FLinearColor InColorAndOpacity);
    
    UFUNCTION(BlueprintCallable)
    void SetBrushTintColor(FSlateColor TintColor);
    
    UFUNCTION(BlueprintCallable)
    void SetBrushSize(FVector2D DesiredSize);
    
    UFUNCTION(BlueprintCallable)
    void SetBrushResourceObject(UObject* ResourceObject);
    
    UFUNCTION(BlueprintCallable)
    void SetBrushFromTextureDynamic(UTexture2DDynamic* Texture, bool bMatchSize);
    
    UFUNCTION(BlueprintCallable)
    void SetBrushFromTexture(UTexture2D* Texture, bool bMatchSize);
    
    UFUNCTION(BlueprintCallable)
    void SetBrushFromSoftTexture(TSoftObjectPtr<UTexture2D> SoftTexture, bool bMatchSize);
    
    UFUNCTION(BlueprintCallable)
    void SetBrushFromSoftMaterial(TSoftObjectPtr<UMaterialInterface> SoftMaterial);
    
    UFUNCTION(BlueprintCallable)
    void SetBrushFromMaterial(UMaterialInterface* Material);
    
    UFUNCTION(BlueprintCallable)
    void SetBrushFromAtlasInterface(TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion, bool bMatchSize);
    
    UFUNCTION(BlueprintCallable)
    void SetBrushFromAsset(USlateBrushAsset* Asset);
    
    UFUNCTION(BlueprintCallable)
    void SetBrush(const FSlateBrush& InBrush);
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* GetDynamicMaterial();
    
    UImage();
};

