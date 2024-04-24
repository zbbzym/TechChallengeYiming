// Fill out your copyright notice in the Description page of Project Settings.


#include "DistanceCalculator.h"

// Sets default values
ADistanceCalculator::ADistanceCalculator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADistanceCalculator::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADistanceCalculator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);



}

float ADistanceCalculator::CalculateDistance()
{
	return FVector::Distance(Object1->GetActorLocation(), Object2->GetActorLocation());
}