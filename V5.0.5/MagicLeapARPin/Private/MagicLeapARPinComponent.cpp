#include "MagicLeapARPinComponent.h"
#include "Templates/SubclassOf.h"

class USceneComponent;
class AActor;
class UMagicLeapARPinSaveGame;

void UMagicLeapARPinComponent::UnPin() {
}

bool UMagicLeapARPinComponent::PinSceneComponent(USceneComponent* ComponentToPin) {
    return false;
}

bool UMagicLeapARPinComponent::PinRestoredOrSynced() const {
    return false;
}

bool UMagicLeapARPinComponent::PinActor(AActor* ActorToPin) {
    return false;
}

bool UMagicLeapARPinComponent::IsPinned() const {
    return false;
}

bool UMagicLeapARPinComponent::GetPinState(FMagicLeapARPinState& State) const {
    return false;
}

bool UMagicLeapARPinComponent::GetPinnedPinID(FGuid& PinID) {
    return false;
}

UMagicLeapARPinSaveGame* UMagicLeapARPinComponent::GetPinData(TSubclassOf<UMagicLeapARPinSaveGame> NewPinDataClass) {
    return NULL;
}

UMagicLeapARPinComponent::UMagicLeapARPinComponent() {
    this->UserIndex = 0;
    this->AutoPinType = EMagicLeapAutoPinType::OnlyOnDataRestoration;
    this->bShouldPinActor = false;
    this->PinDataClass = UMagicLeapARPinSaveGame::StaticClass();
    this->PinnedSceneComponent = NULL;
    this->PinData = NULL;
}

