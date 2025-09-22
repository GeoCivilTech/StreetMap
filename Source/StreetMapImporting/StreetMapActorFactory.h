#pragma once

#include "CoreMinimal.h"
#include "ActorFactories/ActorFactory.h"
#include "StreetMapActorFactory.generated.h"

UCLASS()
class UStreetMapActorFactory : public UActorFactory
{
        GENERATED_BODY()

public:
        UStreetMapActorFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

        //~ Begin UActorFactory Interface
        virtual void PostSpawnActor(UObject* Asset, AActor* NewActor) override;
        virtual void PostCreateBlueprint(UObject* Asset, AActor* CDO) override;
        virtual bool CanCreateActorFrom(const FAssetData& AssetData, FText& OutErrorMsg) override;
	//~ End UActorFactory Interface
};
