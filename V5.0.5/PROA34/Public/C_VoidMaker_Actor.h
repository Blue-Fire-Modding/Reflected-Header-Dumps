#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "C_VoidMaker_Actor.generated.h"

class UStaticMeshComponent;
class USplineComponent;

UCLASS()
class PROA34_API AC_VoidMaker_Actor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    float DistanceInSpline;
    
    UPROPERTY()
    bool bInReverse;
    
    UFUNCTION(BlueprintCallable)
    void SetCollisionByPlayerLocation(float PlayerVectorLenght, UStaticMeshComponent* TargetMeshComponent);
    
    UFUNCTION(BlueprintCallable)
    void MoveActorWithOutLoop(float Speed, USplineComponent* TargetSpline, UStaticMeshComponent* TargetMeshComponent, float RotationSpeed, int32 RotationType);
    
    UFUNCTION(BlueprintCallable)
    void MoveActorWithLoop(float Speed, USplineComponent* TargetSpline, UStaticMeshComponent* TargetMeshComponent, float RotationSpeed, int32 RotationType);
    
    UFUNCTION(BlueprintCallable)
    void MoveActorComplexNoLoop(float Speed, USplineComponent* TargetSpline, AActor* TargetActor, float RotationSpeed, int32 RotationType);
    
    UFUNCTION(BlueprintCallable)
    void MoveActorComplex(float Speed, USplineComponent* TargetSpline, AActor* TargetActor, float RotationSpeed, int32 RotationType);
    
    AC_VoidMaker_Actor();
};

