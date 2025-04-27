#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EEndPlayReason -FallbackName=EEndPlayReason
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ENavDataGatheringModeConfig -FallbackName=ENavDataGatheringModeConfig
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavigationSystemV1 -FallbackName=NavigationSystemV1
#include "NavigationSystem.h"

#include "VAltarNavigationSystem.generated.h"

class AActor;
class ANavigationDataChunkActor;
class UNavMeshLandmarkMetaClustersSubsystem;

UCLASS(Blueprintable, NonTransient, Config=Engine)
class ALTAR_API UVAltarNavigationSystem : public UNavigationSystemV1 {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideRuntimeWorldPartitionDataGatheringMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENavDataGatheringModeConfig RuntimeWorldPartitionDataGatheringMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFilterImplicitGeometryDirtyAreas;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowExplicitDoubleDressingDirtyAreas;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyUnlockNavGenerationForDoubleDressing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<ANavigationDataChunkActor*> LoadedNavigationDataChunkActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNavMeshLandmarkMetaClustersSubsystem* NavMeshLandmarkClustersSubsystem;
    
public:
    UVAltarNavigationSystem();

private:
    UFUNCTION(BlueprintCallable)
    void OnNavigationDataEndPlay(const AActor* Actor, const TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
};

