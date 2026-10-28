// Fill out your copyright notice in the Description page of Project Settings.


#include "Lindurilla.h"


// Sets default values
ALindurilla::ALindurilla()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	RootComponent = SceneRoot;
	Mesh->SetupAttachment(SceneRoot);
	Light->SetupAttachment(SceneRoot);

	Light->SetRelativeLocation(FVector(0.0f, 0.0f, 120.0f));
	Light->SetIndirectLightingIntensity(5000.0f);
}

// Called when the game starts or when spawned
void ALindurilla::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALindurilla::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALindurilla::CreateComponets()
{
	//esto se pone en el constrtuctor
	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));

	Light = CreateDefaultSubobject<UPointLightComponent>(TEXT("Light"));

}