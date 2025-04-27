#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=EPhysicalSurface -FallbackName=EPhysicalSurface
#include "VProjectilePenetrationSettings.h"
#include "ImpactSystemRowBase.generated.h"

class AVFootStepVFXBlueprint;
class AVImpactSystemVFXBlueprint;
class AVPawnSparkVFXBlueprint;

USTRUCT(BlueprintType)
struct ALTAR_API FImpactSystemRowBase : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPhysicalSurface> TargetMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AVImpactSystemVFXBlueprint> ImpactSystemBlueprintClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WwiseSwitchType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AVFootStepVFXBlueprint> FootStepVFXBlueprintClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVProjectilePenetrationSettings ProjectilePenetrationSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AVPawnSparkVFXBlueprint> PawnSparkBlueprintClass;
    
    FImpactSystemRowBase();
};

