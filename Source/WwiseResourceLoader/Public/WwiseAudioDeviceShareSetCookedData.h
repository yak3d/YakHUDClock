#pragma once
#include "CoreMinimal.h"
#include "WwiseAudioDeviceShareSetCookedData.generated.h"

USTRUCT(BlueprintType)
struct WWISERESOURCELOADER_API FWwiseAudioDeviceShareSetCookedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShortId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DebugName;
    
    FWwiseAudioDeviceShareSetCookedData();
};

