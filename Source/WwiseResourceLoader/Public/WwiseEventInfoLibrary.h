#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EWwiseEventDestroyOptions.h"
#include "EWwiseEventSwitchContainerLoading.h"
#include "WwiseEventInfo.h"
#include "WwiseEventInfoLibrary.generated.h"

UCLASS(Blueprintable)
class WWISERESOURCELOADER_API UWwiseEventInfoLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UWwiseEventInfoLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FWwiseEventInfo SetWwiseShortId(const FWwiseEventInfo& Ref, int32 WwiseShortId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FWwiseEventInfo SetWwiseName(const FWwiseEventInfo& Ref, const FString& WwiseName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FWwiseEventInfo SetWwiseGuid(const FWwiseEventInfo& Ref, const FGuid& WwiseGuid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FWwiseEventInfo SetSwitchContainerLoading(const FWwiseEventInfo& Ref, const EWwiseEventSwitchContainerLoading& SwitchContainerLoading);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FWwiseEventInfo SetHardCodedSoundBankShortId(const FWwiseEventInfo& Ref, int32 HardCodedSoundBankShortId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FWwiseEventInfo SetDestroyOptions(const FWwiseEventInfo& Ref, const EWwiseEventDestroyOptions& DestroyOptions);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FWwiseEventInfo MakeStruct(const FGuid& WwiseGuid, int32 WwiseShortId, const FString& WwiseName, EWwiseEventSwitchContainerLoading SwitchContainerLoading, EWwiseEventDestroyOptions DestroyOptions, int32 HardCodedSoundBankShortId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetWwiseShortId(const FWwiseEventInfo& Ref);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetWwiseName(const FWwiseEventInfo& Ref);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGuid GetWwiseGuid(const FWwiseEventInfo& Ref);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EWwiseEventSwitchContainerLoading GetSwitchContainerLoading(const FWwiseEventInfo& Ref);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetHardCodedSoundBankShortId(const FWwiseEventInfo& Ref);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EWwiseEventDestroyOptions GetDestroyOptions(const FWwiseEventInfo& Ref);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BreakStruct(FWwiseEventInfo Ref, FGuid& OutWwiseGuid, int32& OutWwiseShortId, FString& OutWwiseName, EWwiseEventSwitchContainerLoading& OutSwitchContainerLoading, EWwiseEventDestroyOptions& OutDestroyOptions, int32& OutHardCodedSoundBankShortId);
    
};

