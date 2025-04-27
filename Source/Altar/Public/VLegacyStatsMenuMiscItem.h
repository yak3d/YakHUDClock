#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LegacyStatsMenuMiscItemProperties.h"
#include "VLegacyStatsMenuMiscItem.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVLegacyStatsMenuMiscItem : public UObject {
    GENERATED_BODY()
public:
    UVLegacyStatsMenuMiscItem();

    UFUNCTION(BlueprintCallable)
    void SetItem(const FLegacyStatsMenuMiscItemProperties& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyStatsMenuMiscItemProperties GetItem() const;
    
};

