#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "VAltarWidget.h"
#include "VModernHudReticle.generated.h"

class UVHUDReticleViewModel;

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVModernHudReticle : public UVAltarWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FGameplayTag> DefaultReticleTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FGameplayTag> RangeReticleTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FGameplayTag> MeleeReticleTags;
    
public:
    UVModernHudReticle();

    UFUNCTION(BlueprintCallable)
    bool CheckForBehaviorTypeUpdate(FGameplayTag WeaponTag, UVHUDReticleViewModel* ViewModel);
    
};

