#include "VPhysicsDebugPanel.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=WidgetComponent -FallbackName=WidgetComponent
#include "Components/ArrowComponent.h"
#include "Components/WidgetComponent.h"

AVPhysicsDebugPanel::AVPhysicsDebugPanel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("AnchorComponent"));
    this->AnchorComponent = (USceneComponent*)RootComponent;
    this->WidgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("WidgetComponent"));
    this->TargetArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("TargetArrowComponent"));
    this->TargetArrowComponent->SetupAttachment(RootComponent);
    this->WidgetComponent->SetupAttachment(RootComponent);
}


