// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Publisher.h"
#include "RadarEnemigo.generated.h"

UCLASS()
class GALAGA_USFX_L01_API ARadarEnemigo : public APublisher
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARadarEnemigo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	FTimerHandle Agrupar;
	FTimerHandle Reabastecer;
	float valorMinimoEnergiaSuscriptor = 10;

	float promedioEnergiaSuscritores;
	float valorMinimoPromedioEnergia = 30;

	float calcularPromedioEnergiaSuscriptores();

	FVector posicionReabastecimiento;

	float getPromedioEnergiaNavesEnemigas() { return promedioEnergiaSuscritores; }
};