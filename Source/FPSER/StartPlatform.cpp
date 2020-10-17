// Fill out your copyright notice in the Description page of Project Settings.


#include "StartPlatform.h"

// Sets default values
AStartPlatform::AStartPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PLATFORM"));
	RootComponent = mesh;
	mat = CreateDefaultSubobject<UMaterial>(TEXT("Material"));

}

// Called when the game starts or when spawned
void AStartPlatform::BeginPlay()
{
	Super::BeginPlay();

	mesh->SetMaterial(0, mat);
	
}

// Called every frame
void AStartPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

