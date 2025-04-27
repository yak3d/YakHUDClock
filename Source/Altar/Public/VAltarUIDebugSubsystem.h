#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "VAltarUIDebugSubsystem.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVAltarUIDebugSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DebugInventoryItemLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DebugInventoryItemScaleOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator DebugInventoryItemRotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInventoryDebugModeEnabled;
    
public:
    UVAltarUIDebugSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetInventoryDebugModeEnabled(bool bIsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugInventoryItemScaleOffset(const FVector& InNewScaleOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugInventoryItemRotationOffset(const FRotator& InNewRotationOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugInventoryItemLocationOffset(const FVector& InNewLocationOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetInventoryDebugModeState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetDebugInventoryItemScaleOffset();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetDebugInventoryItemRotationOffset();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetDebugInventoryItemLocationOffset();
    
};

