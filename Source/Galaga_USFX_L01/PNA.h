// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlanoConstruccion.h"
#include "PNA.generated.h"

UCLASS()
class GALAGA_USFX_L01_API APNA : public AActor, public IPlanoConstruccion
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APNA();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
