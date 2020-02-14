// Fill out your copyright notice in the Description page of Project Settings.


#include "Base_Weapon.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
ABase_Weapon::ABase_Weapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(FName("Weapon Static Mesh"));
	RootComponent = StaticMesh;

}

// Called when the game starts or when spawned
void ABase_Weapon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABase_Weapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

