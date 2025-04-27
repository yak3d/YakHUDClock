#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CommonUI -ObjectName=CommonTileView -FallbackName=CommonTileView
#include "CommonTileView.h"
#include "VTileViewWidget.generated.h"

UCLASS(Blueprintable)
class VCOMMONUIENHANCEDINPUTNAVIGATION_API UVTileViewWidget : public UCommonTileView {
    GENERATED_BODY()
public:
    UVTileViewWidget(const FObjectInitializer& ObjectInitializer);

};

