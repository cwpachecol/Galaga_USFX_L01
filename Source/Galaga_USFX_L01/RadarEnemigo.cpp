// Fill out your copyright notice in the Description page of Project Settings.


#include "RadarEnemigo.h"
#include "Subscriptor.h"
#include "NaveEnemiga.h"

// Sets default values
ARadarEnemigo::ARadarEnemigo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARadarEnemigo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARadarEnemigo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
    promedioEnergiaSuscritores = calcularPromedioEnergiaSuscriptores();
    if (promedioEnergiaSuscritores <= valorMinimoPromedioEnergia)
        notifySuscribers("reabastecer");
        
}

float ARadarEnemigo::calcularPromedioEnergiaSuscriptores()
{
    float EnergiaTotal = 0;
    for (AActor* suscriptor : listaSuscriptores)
    {
        ANaveEnemiga* naveEnemiga = Cast<ANaveEnemiga>(suscriptor);
        EnergiaTotal += naveEnemiga->GetEnergia();
    }
    return EnergiaTotal / listaSuscriptores.Num();

}


