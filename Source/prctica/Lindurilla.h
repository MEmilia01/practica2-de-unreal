// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/PointLightComponent.h"

#include "Lindurilla.generated.h"

UCLASS()
class PRCTICA_API ALindurilla : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALindurilla();

	UPROPERTY(EditAnywhere, Category = "Lindurilla")
	TObjectPtr<USceneComponent> SceneRoot;

	UPROPERTY(EditAnywhere, Category = "Lindurilla")
	TObjectPtr<UStaticMeshComponent> Mesh;
	
	UPROPERTY(EditAnywhere, Category = "Lindurilla")
	TObjectPtr<UPointLightComponent> Light;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void CreateComponets();
	
};
