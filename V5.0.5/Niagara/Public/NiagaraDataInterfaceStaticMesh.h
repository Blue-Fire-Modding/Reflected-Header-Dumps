#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "NDIStaticMeshSectionFilter.h"
#include "NiagaraDataInterfaceStaticMesh.generated.h"

class AActor;
class UStaticMesh;
class UStaticMeshComponent;

UCLASS(EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceStaticMesh : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UStaticMesh* DefaultMesh;
    
    UPROPERTY(EditAnywhere)
    AActor* Source;
    
    UPROPERTY(Export, Transient)
    UStaticMeshComponent* SourceComponent;
    
    UPROPERTY(EditAnywhere)
    FNDIStaticMeshSectionFilter SectionFilter;
    
    UNiagaraDataInterfaceStaticMesh();
};

