#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=EnhancedInput -ObjectName=InputModifier -FallbackName=InputModifier
#include "InputModifiers.h"

#include "VThumbstickSensitivityModifier.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ALTAR_API UVThumbstickSensitivityModifier : public UInputModifier {
    GENERATED_BODY()
public:
    UVThumbstickSensitivityModifier();

};

