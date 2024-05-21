// Fill out your copyright notice in the Description page of Project Settings.


#include "RadarEnemigo.h"
#include "Suscriptor.h"
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
        EnviarSuscriptoresAReabastecimiento();
}

void ARadarEnemigo::EnviarSuscriptoresAReabastecimiento()
{

    for (ANaveEnemiga* suscriptor : listaSuscriptores)
    {
        if (suscriptor){
            suscriptor->moverA(posicionReabastecimiento) )
		}
	}
}

float ARadarEnemigo::calcularPromedioEnergiaSuscriptores()
{
    float EnergiaTotal = 0;
    for (ANaveEnemiga* suscriptor : listaSuscriptores)
    {
        EnergiaTotal += suscriptor->GetEnergia();
    }
    return EnergiaTotal / listaSuscriptores.Num();

}


