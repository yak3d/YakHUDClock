#include "VLeveledCreature.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "VAltarAkComponent.h"
#include "VTESObjectRefComponent.h"

AVLeveledCreature::AVLeveledCreature(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->TESRefComponent = CreateDefaultSubobject<UVTESObjectRefComponent>(TEXT("TESObjectRefComponent"));
    this->AkAudioComponent = CreateDefaultSubobject<UVAltarAkComponent>(TEXT("AkAudioComponent"));
    this->AkAudioComponent->SetupAttachment(RootComponent);
}

TArray<FString> AVLeveledCreature::GetNameOptions() const {
    return TArray<FString>();
}


