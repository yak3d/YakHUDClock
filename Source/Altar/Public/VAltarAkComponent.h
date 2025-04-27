#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AkAudio -ObjectName=AkComponent -FallbackName=AkComponent
#include "AkComponent.h"

#include "VAltarAkComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ALTAR_API UVAltarAkComponent : public UAkComponent {
    GENERATED_BODY()
public:
    UVAltarAkComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ForceUpdateGameObjectPosition();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_HasActiveEvents() const;
    
};

