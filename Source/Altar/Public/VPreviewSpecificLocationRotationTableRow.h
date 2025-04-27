#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "VInventoryPreviewPositionOverride.h"
#include "VPreviewSpecificLocationRotationTableRow.generated.h"

USTRUCT(BlueprintType)
struct ALTAR_API FVPreviewSpecificLocationRotationTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 FormID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVInventoryPreviewPositionOverride DefaultParameters;
    
    FVPreviewSpecificLocationRotationTableRow();
};

