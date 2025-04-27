#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "Kismet/BlueprintAsyncActionBase.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"

#include "OnPlayAnimatedActionDelegateDelegate.h"
#include "StateMachinePlayAnimatedAction.generated.h"

class AVPairedPawn;
class UStateMachinePlayAnimatedAction;
class UVPawnAnimatedAction;

UCLASS(Blueprintable)
class UStateMachinePlayAnimatedAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayAnimatedActionDelegate OnCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayAnimatedActionDelegate OnCanceled;
    
    UStateMachinePlayAnimatedAction();

    UFUNCTION(BlueprintCallable)
    static UStateMachinePlayAnimatedAction* PlayDefaultAnimatedAction(AVPairedPawn* PairedPawn, UVPawnAnimatedAction*& Action);
    
    UFUNCTION(BlueprintCallable)
    static UStateMachinePlayAnimatedAction* PlayAnimatedAction(AVPairedPawn* PairedPawn, FGameplayTag ActionTag, UVPawnAnimatedAction*& Action, float DesiredDuration, int32 AnimationIndex);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnAnimatedActionEnded(bool bIsCanceled);
    
};

