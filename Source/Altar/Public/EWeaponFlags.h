#pragma once
#include "CoreMinimal.h"
#include "EWeaponFlags.generated.h"

UENUM(BlueprintType)
enum class EWeaponFlags : uint8 {
    None = 0,
    IgnoreResist = 1,
};

