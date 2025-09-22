#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StreetMapActor.generated.h"

class UStreetMapComponent;

/** An actor that renders a street map mesh component */
UCLASS(hidecategories = (Physics)) // Physics category in detail panel is hidden. Our component/Actor is not simulated !
class STREETMAPRUNTIME_API AStreetMapActor : public AActor
{
        GENERATED_BODY()

public:
        AStreetMapActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

        /**  Component that represents a section of street map roads and buildings */
        UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "StreetMap")
        UStreetMapComponent* StreetMapComponent;

        FORCEINLINE UStreetMapComponent* GetStreetMapComponent() const { return StreetMapComponent; }
};
