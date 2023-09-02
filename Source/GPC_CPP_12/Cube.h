#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Cube.generated.h"

UCLASS()
class GPC_CPP_12_API ACube : public AActor
{
	GENERATED_BODY()
	
public:	
	ACube();

protected:
	void BeginPlay() override;

public:	
	void Tick(float DeltaTime) override;

public:
	UStaticMeshComponent* Mesh;
};
