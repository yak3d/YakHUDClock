#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=WwiseFileHandler -ObjectName=WwiseLanguageCookedData -FallbackName=WwiseLanguageCookedData
#include <WwiseLanguageCookedData.h>

#include "WwiseEventCookedData.h"
#include "WwiseLocalizedEventCookedData.generated.h"

USTRUCT(BlueprintType)
struct WWISERESOURCELOADER_API FWwiseLocalizedEventCookedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FWwiseLanguageCookedData, FWwiseEventCookedData> EventLanguageMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DebugName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EventId;
    
    FWwiseLocalizedEventCookedData();
};

