#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE: CoreUObject Transform
#include "ARTraceResult.h"
#include "ARSessionStatus.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
#include "EARSessionType.h"
#include "EARSessionTrackingFeature.h"
#include "EARWorldMappingState.h"
#include "EARTrackingQuality.h"
#include "EARTrackingQualityReason.h"
#include "ARVideoFormat.h"
#include "ARPose2D.h"
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
#include "ARBlueprintLibrary.generated.h"

class UARLightEstimate;
class USceneComponent;
class UARSessionConfig;
class UARTrackedPoint;
class UARPin;
class UARTrackedGeometry;
class UARTextureCameraDepth;
class UARTextureCameraImage;
class UARCandidateImage;
class UObject;
class UARTrackedPose;
class UTexture2D;
class UARPlaneGeometry;
class UARTrackedImage;
class UAREnvironmentCaptureProbe;

UCLASS(BlueprintType)
class AUGMENTEDREALITY_API UARBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static void UnpinComponent(USceneComponent* ComponentToUnpin);
    
    UFUNCTION(BlueprintCallable)
    static void StopARSession();
    
    UFUNCTION(BlueprintCallable)
    static void StartARSession(UARSessionConfig* SessionConfig);
    
    UFUNCTION(BlueprintCallable)
    static void SetAlignmentTransform(const FTransform& InAlignmentTransform);
    
    UFUNCTION(BlueprintCallable)
    static void RemovePin(UARPin* PinToRemove);
    
    UFUNCTION(BlueprintCallable)
    static UARPin* PinComponentToTraceResult(USceneComponent* ComponentToPin, const FARTraceResult& TraceResult, const FName DebugName);
    
    UFUNCTION(BlueprintCallable)
    static UARPin* PinComponent(USceneComponent* ComponentToPin, const FTransform& PinToWorldTransform, UARTrackedGeometry* TrackedGeometry, const FName DebugName);
    
    UFUNCTION(BlueprintCallable)
    static void PauseARSession();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FARTraceResult> LineTraceTrackedObjects3D(const FVector Start, const FVector End, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FARTraceResult> LineTraceTrackedObjects(const FVector2D ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon);
    
    UFUNCTION(BlueprintPure)
    static bool IsSessionTypeSupported(EARSessionType SessionType);
    
    UFUNCTION(BlueprintPure)
    static bool IsSessionTrackingFeatureSupported(EARSessionType SessionType, EARSessionTrackingFeature SessionTrackingFeature);
    
    UFUNCTION(BlueprintCallable)
    static bool IsARSupported();
    
    UFUNCTION(BlueprintPure)
    static EARWorldMappingState GetWorldMappingStatus();
    
    UFUNCTION(BlueprintPure)
    static EARTrackingQualityReason GetTrackingQualityReason();
    
    UFUNCTION(BlueprintPure)
    static EARTrackingQuality GetTrackingQuality();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FARVideoFormat> GetSupportedVideoFormats(EARSessionType SessionType);
    
    UFUNCTION(BlueprintPure)
    static UARSessionConfig* GetSessionConfig();
    
    UFUNCTION(BlueprintPure)
    static TArray<FVector> GetPointCloud();
    
    UFUNCTION(BlueprintCallable)
    static UARTextureCameraImage* GetPersonSegmentationImage();
    
    UFUNCTION(BlueprintCallable)
    static UARTextureCameraImage* GetPersonSegmentationDepthImage();
    
    UFUNCTION(BlueprintPure)
    static UARLightEstimate* GetCurrentLightEstimate();
    
    UFUNCTION(BlueprintCallable)
    static UARTextureCameraImage* GetCameraImage();
    
    UFUNCTION(BlueprintCallable)
    static UARTextureCameraDepth* GetCameraDepth();
    
    UFUNCTION(BlueprintPure)
    static FARSessionStatus GetARSessionStatus();
    
    UFUNCTION(BlueprintCallable)
    static TArray<UARTrackedPose*> GetAllTrackedPoses();
    
    UFUNCTION(BlueprintCallable)
    static TArray<UARTrackedPoint*> GetAllTrackedPoints();
    
    UFUNCTION(BlueprintCallable)
    static TArray<UARPlaneGeometry*> GetAllTrackedPlanes();
    
    UFUNCTION(BlueprintCallable)
    static TArray<UARTrackedImage*> GetAllTrackedImages();
    
    UFUNCTION(BlueprintCallable)
    static TArray<UAREnvironmentCaptureProbe*> GetAllTrackedEnvironmentCaptureProbes();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FARPose2D> GetAllTracked2DPoses();
    
    UFUNCTION(BlueprintCallable)
    static TArray<UARPin*> GetAllPins();
    
    UFUNCTION(BlueprintCallable)
    static TArray<UARTrackedGeometry*> GetAllGeometries();
    
    UFUNCTION(BlueprintCallable)
    static void DebugDrawTrackedGeometry(UARTrackedGeometry* TrackedGeometry, UObject* WorldContextObject, FLinearColor Color, float OutlineThickness, float PersistForSeconds);
    
    UFUNCTION(BlueprintCallable)
    static void DebugDrawPin(UARPin* ARPin, UObject* WorldContextObject, FLinearColor Color, float Scale, float PersistForSeconds);
    
    UFUNCTION(BlueprintCallable)
    static UARCandidateImage* AddRuntimeCandidateImage(UARSessionConfig* SessionConfig, UTexture2D* CandidateTexture, const FString& FriendlyName, float PhysicalWidth);
    
    UFUNCTION(BlueprintCallable)
    static bool AddManualEnvironmentCaptureProbe(FVector Location, FVector Extent);
    
    UARBlueprintLibrary();
};

