// Fill out your copyright notice in the Description page of Project Settings.


#include "ConCamuflage.h"
#include "Galaga_USFX_L01Pawn.h"


// Sets default values
AConCamuflage::AConCamuflage()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AConCamuflage::activarArmamentoAdicional()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("No se puede desactivar el armamento adicional por que no esta habilitada"));
}

void AConCamuflage::activarProteccion()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("No se puede activar la proteccion por que no esta habilitada"));
}

void AConCamuflage::activarCamuflage()
{
	naveJugador->setMunicionesAdicionalesActivadas(false);
	naveJugador->setCamuflageActivado(true);
	naveJugador->setCamuflage(100);
	naveJugador->setProteccionActivada(false);
}

void AConCamuflage::desactivarArmamentoAdicional()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("No se puede desactivar las armas adicionales por que no esta habilitadas"));
}

void AConCamuflage::desactivarProteccion()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("No se puede desactivar la proteccion por que no esta habilitada"));
}

void AConCamuflage::desactivarCamuflage()
{
	naveJugador->setCamuflageActivado(false);
	naveJugador->setCamuflage(0);
}

FString AConCamuflage::ToString()
{
	return "Nave jugador con camuflaje.";
}

void AConCamuflage::setNaveJugador(AGalaga_USFX_L01Pawn* _naveJugador)
{
	naveJugador = _naveJugador;
}

// Called when the game starts or when spawned
void AConCamuflage::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AConCamuflage::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AConCamuflage::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

