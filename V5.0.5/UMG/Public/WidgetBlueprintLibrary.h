#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "EventReply.h"
//CROSS-MODULE INCLUDE: Engine EWindowTitleBarMode
//CROSS-MODULE INCLUDE: SlateCore CharacterEvent
//CROSS-MODULE INCLUDE: SlateCore KeyEvent
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
//CROSS-MODULE INCLUDE: Engine EMouseLockMode
//CROSS-MODULE INCLUDE: CoreUObject EMouseCursor
//CROSS-MODULE INCLUDE: SlateCore EColorVisionDeficiency
//CROSS-MODULE INCLUDE: SlateCore SlateBrush
#include "PaintContext.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector4
//CROSS-MODULE INCLUDE: SlateCore AnalogInputEvent
//CROSS-MODULE INCLUDE: SlateCore PointerEvent
//CROSS-MODULE INCLUDE: SlateCore InputEvent
//CROSS-MODULE INCLUDE: SlateCore NavigationEvent
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
//CROSS-MODULE INCLUDE: InputCore Key
#include "WidgetBlueprintLibrary.generated.h"

class UObject;
class UUserWidget;
class UTexture2D;
class UWidget;
class APlayerController;
class USlateBrushAsset;
class UMaterialInterface;
class UMaterialInstanceDynamic;
class UDragDropOperation;
class UInterface;
class IInterface;
class UFont;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE(FWidgetBlueprintLibraryDelegate);

UCLASS(BlueprintType)
class UMG_API UWidgetBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure)
    static FEventReply UnlockMouse(UPARAM(Ref) FEventReply& Reply);
    
    UFUNCTION(BlueprintPure)
    static FEventReply Unhandled();
    
    UFUNCTION(BlueprintCallable)
    static void SetWindowTitleBarState(UWidget* TitleBarContent, EWindowTitleBarMode Mode, bool bTitleBarDragEnabled, bool bWindowButtonsVisible, bool bTitleBarVisible);
    
    UFUNCTION(BlueprintCallable)
    static void SetWindowTitleBarOnCloseClickedDelegate(FWidgetBlueprintLibraryDelegate Delegate);
    
    UFUNCTION(BlueprintCallable)
    static void SetWindowTitleBarCloseButtonActive(bool bActive);
    
    UFUNCTION(BlueprintPure)
    static FEventReply SetUserFocus(UPARAM(Ref) FEventReply& Reply, UWidget* FocusWidget, bool bInAllUsers);
    
    UFUNCTION(BlueprintPure)
    static FEventReply SetMousePosition(UPARAM(Ref) FEventReply& Reply, FVector2D NewMousePosition);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetInputMode_UIOnlyEx(APlayerController* PlayerController, UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetInputMode_UIOnly(APlayerController* Target, UWidget* InWidgetToFocus, bool bLockMouseToViewport);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetInputMode_GameOnly(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetInputMode_GameAndUIEx(APlayerController* PlayerController, UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetInputMode_GameAndUI(APlayerController* Target, UWidget* InWidgetToFocus, bool bLockMouseToViewport, bool bHideCursorDuringCapture);
    
    UFUNCTION(BlueprintCallable)
    static bool SetHardwareCursor(UObject* WorldContextObject, TEnumAsByte<EMouseCursor::Type> CursorShape, FName CursorName, FVector2D HotSpot);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetFocusToGameViewport();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetColorVisionDeficiencyType(EColorVisionDeficiency Type, float Severity, bool CorrectDeficiency, bool ShowCorrectionWithDeficiency);
    
    UFUNCTION(BlueprintCallable)
    static void SetBrushResourceToTexture(UPARAM(Ref) FSlateBrush& Brush, UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable)
    static void SetBrushResourceToMaterial(UPARAM(Ref) FSlateBrush& Brush, UMaterialInterface* Material);
    
    UFUNCTION(BlueprintCallable)
    static void RestorePreviousWindowTitleBarState();
    
    UFUNCTION(BlueprintPure)
    static FEventReply ReleaseMouseCapture(UPARAM(Ref) FEventReply& Reply);
    
    UFUNCTION(BlueprintPure)
    static FEventReply ReleaseJoystickCapture(UPARAM(Ref) FEventReply& Reply, bool bInAllJoysticks);
    
    UFUNCTION(BlueprintPure)
    static FSlateBrush NoResourceBrush();
    
    UFUNCTION(BlueprintPure)
    static FSlateBrush MakeBrushFromTexture(UTexture2D* Texture, int32 Width, int32 Height);
    
    UFUNCTION(BlueprintPure)
    static FSlateBrush MakeBrushFromMaterial(UMaterialInterface* Material, int32 Width, int32 Height);
    
    UFUNCTION(BlueprintPure)
    static FSlateBrush MakeBrushFromAsset(USlateBrushAsset* BrushAsset);
    
    UFUNCTION(BlueprintPure)
    static FEventReply LockMouse(UPARAM(Ref) FEventReply& Reply, UWidget* CapturingWidget);
    
    UFUNCTION(BlueprintCosmetic, BlueprintPure)
    static bool IsDragDropping();
    
    UFUNCTION(BlueprintPure)
    static FEventReply Handled();
    
    UFUNCTION(BlueprintCallable)
    static void GetSafeZonePadding(UObject* WorldContextObject, FVector4& SafePadding, FVector2D& SafePaddingScale, FVector4& SpillOverPadding);
    
    UFUNCTION(BlueprintPure)
    static FKeyEvent GetKeyEventFromAnalogInputEvent(const FAnalogInputEvent& Event);
    
    UFUNCTION(BlueprintPure)
    static FInputEvent GetInputEventFromPointerEvent(const FPointerEvent& Event);
    
    UFUNCTION(BlueprintPure)
    static FInputEvent GetInputEventFromNavigationEvent(const FNavigationEvent& Event);
    
    UFUNCTION(BlueprintPure)
    static FInputEvent GetInputEventFromKeyEvent(const FKeyEvent& Event);
    
    UFUNCTION(BlueprintPure)
    static FInputEvent GetInputEventFromCharacterEvent(const FCharacterEvent& Event);
    
    UFUNCTION(BlueprintPure)
    static UMaterialInstanceDynamic* GetDynamicMaterial(UPARAM(Ref) FSlateBrush& Brush);
    
    UFUNCTION(BlueprintCosmetic, BlueprintPure)
    static UDragDropOperation* GetDragDroppingContent();
    
    UFUNCTION(BlueprintPure)
    static UTexture2D* GetBrushResourceAsTexture2D(const FSlateBrush& Brush);
    
    UFUNCTION(BlueprintPure)
    static UMaterialInterface* GetBrushResourceAsMaterial(const FSlateBrush& Brush);
    
    UFUNCTION(BlueprintPure)
    static UObject* GetBrushResource(const FSlateBrush& Brush);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void GetAllWidgetsWithInterface(UObject* WorldContextObject, TArray<UUserWidget*>& FoundWidgets, TSubclassOf<UInterface> Interface, bool TopLevelOnly);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void GetAllWidgetsOfClass(UObject* WorldContextObject, TArray<UUserWidget*>& FoundWidgets, TSubclassOf<UUserWidget> WidgetClass, bool TopLevelOnly);
    
    UFUNCTION(BlueprintPure)
    static FEventReply EndDragDrop(UPARAM(Ref) FEventReply& Reply);
    
    UFUNCTION(BlueprintCallable)
    static void DrawTextFormatted(UPARAM(Ref) FPaintContext& Context, const FText& Text, FVector2D Position, UFont* Font, int32 FontSize, FName FontTypeFace, FLinearColor Tint);
    
    UFUNCTION(BlueprintCallable)
    static void DrawText(UPARAM(Ref) FPaintContext& Context, const FString& inString, FVector2D Position, FLinearColor Tint);
    
    UFUNCTION(BlueprintCallable)
    static void DrawLines(UPARAM(Ref) FPaintContext& Context, const TArray<FVector2D>& Points, FLinearColor Tint, bool bAntiAlias, float Thickness);
    
    UFUNCTION(BlueprintCallable)
    static void DrawLine(UPARAM(Ref) FPaintContext& Context, FVector2D PositionA, FVector2D PositionB, FLinearColor Tint, bool bAntiAlias, float Thickness);
    
    UFUNCTION(BlueprintCallable)
    static void DrawBox(UPARAM(Ref) FPaintContext& Context, FVector2D Position, FVector2D Size, USlateBrushAsset* Brush, FLinearColor Tint);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void DismissAllMenus();
    
    UFUNCTION(BlueprintCallable)
    static FEventReply DetectDragIfPressed(const FPointerEvent& PointerEvent, UWidget* WidgetDetectingDrag, FKey DragKey);
    
    UFUNCTION(BlueprintPure)
    static FEventReply DetectDrag(UPARAM(Ref) FEventReply& Reply, UWidget* WidgetDetectingDrag, FKey DragKey);
    
    UFUNCTION(BlueprintCallable)
    static UDragDropOperation* CreateDragDropOperation(TSubclassOf<UDragDropOperation> OperationClass);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static UUserWidget* Create(UObject* WorldContextObject, TSubclassOf<UUserWidget> WidgetType, APlayerController* OwningPlayer);
    
    UFUNCTION(BlueprintPure)
    static FEventReply ClearUserFocus(UPARAM(Ref) FEventReply& Reply, bool bInAllUsers);
    
    UFUNCTION(BlueprintPure)
    static FEventReply CaptureMouse(UPARAM(Ref) FEventReply& Reply, UWidget* CapturingWidget);
    
    UFUNCTION(BlueprintPure)
    static FEventReply CaptureJoystick(UPARAM(Ref) FEventReply& Reply, UWidget* CapturingWidget, bool bInAllJoysticks);
    
    UFUNCTION(BlueprintCallable)
    static void CancelDragDrop();
    
    UWidgetBlueprintLibrary();
};

