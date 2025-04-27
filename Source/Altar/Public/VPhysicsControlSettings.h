#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UE5AltarPairing -ObjectName=EVDefaultSurfaceType -FallbackName=EVDefaultSurfaceType
//CROSS-MODULE INCLUDE V2: -ModuleName=UE5AltarPairing -ObjectName=EVPhysicsLoadingBehaviour -FallbackName=EVPhysicsLoadingBehaviour
//CROSS-MODULE INCLUDE V2: -ModuleName=UE5AltarPairing -ObjectName=EVPhysicsSimulationBehaviour -FallbackName=EVPhysicsSimulationBehaviour
#include "EVPhysicsSimulationBehaviour.h"
#include <EVPhysicsLoadingBehaviour.h>
#include <EVDefaultSurfaceType.h>

#include "VBuoyancySettings.h"
#include "VPhysicsControlSettings.generated.h"

USTRUCT(BlueprintType)
struct FVPhysicsControlSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsGrabbable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTelekinesisTargetable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAnchored;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVPhysicsSimulationBehaviour PhysicsSimulationBehaviour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVPhysicsLoadingBehaviour PhysicsLoadingBehaviour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoesRepositionOnLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoesReattachOnLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoesRestoreAttachmentAfterSimulation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoesUseCCD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVBuoyancySettings BuoyancySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoesPlayCollisionSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVDefaultSurfaceType DefaultSelfSurfaceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanSnapToEnvironment;
    
    ALTAR_API FVPhysicsControlSettings();
};

