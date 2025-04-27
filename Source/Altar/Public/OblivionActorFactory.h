#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "OblivionActorFactory.generated.h"

class AActor;
class UObject;
class UTESForm;

UCLASS(Blueprintable)
class ALTAR_API UOblivionActorFactory : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOblivionActorFactory();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AActor* SpawnActorFromFormAtLocationInBlueprint(UObject* WorldContextObject, UTESForm* InObject, const FVector& Translation, float RefScale, const FRotator& Rotation);
    
    UFUNCTION(BlueprintCallable)
    static bool InitializeActor(AActor* Actor, UTESForm* InObject, const bool bIsDefaultObject, int32 NumberToSpawn);
    
};

