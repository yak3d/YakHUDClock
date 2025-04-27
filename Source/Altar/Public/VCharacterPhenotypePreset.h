#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "VCharacterPhenotypePreset.generated.h"

class UVCharacterPhenotypeData;

UCLASS(Blueprintable)
class ALTAR_API UVCharacterPhenotypePreset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVCharacterPhenotypeData* PhenotypeData;
    
    UVCharacterPhenotypePreset();

};

