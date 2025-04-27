#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIController -FallbackName=AIController
#include "AIController.h"

#include "SteeringBehaviorsAIController.generated.h"

class USteeringBehaviorsComponent;

UCLASS(Blueprintable)
class STEERINGBEHAVIORS_API ASteeringBehaviorsAIController : public AAIController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double OffsetPathFromCornersDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USteeringBehaviorsComponent* SteeringBehaviorsComponent;
    
public:
    ASteeringBehaviorsAIController(const FObjectInitializer& ObjectInitializer);

};

