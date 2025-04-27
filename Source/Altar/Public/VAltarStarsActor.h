#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "VAltarStarsActor.generated.h"

UCLASS(Blueprintable)
class AVAltarStarsActor : public AActor {
    GENERATED_BODY()
public:
    AVAltarStarsActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetStarsState(float AxisX, float AxisY, float AxisZ, float Angle);
    
};

