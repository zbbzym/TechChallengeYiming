// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DistanceCalculator.generated.h"

UCLASS()
class TECHCHALLENGEYIMING_API ADistanceCalculator : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADistanceCalculator();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Caculate Distance") 
	AActor* Object1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Caculate Distance")
	AActor* Object2;


	// Caculate distance
	UFUNCTION(BlueprintCallable, Category = "Distance")
	float CalculateDistance();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
