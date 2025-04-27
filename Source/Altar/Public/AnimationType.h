#pragma once
#include "CoreMinimal.h"
#include "AnimationType.generated.h"

UENUM(BlueprintType)
enum class AnimationType : uint8 {
    None = 0,
    Sit = 1,
    Sleep,
    Lean = 4,
};

