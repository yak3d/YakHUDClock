#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTable -FallbackName=DataTable
#include "ModernSettingCategoryTableRow.h"
#include "VModernSettingCategoryTable.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVModernSettingCategoryTable : public UDataTable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FModernSettingCategoryTableRow> Categories;
    
public:
    UVModernSettingCategoryTable();

};

