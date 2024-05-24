// Fill out your copyright notice in the Description page of Project Settings.


#include "ConSistemaProteccion.h"
#include "Galaga_USFX_L01Pawn.h"

// Sets default values
AConSistemaProteccion::AConSistemaProteccion()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AConSistemaProteccion::activarArmamentoAdicional()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("No se puede activar armamento adicional por que no esta habilitado"));
}

void AConSistemaProteccion::activarProteccion()
{
	naveJugador->setProteccionActivada(true);
	naveJugador->setProteccion(100);
	naveJugador->setCamuflageActivado(false);
	naveJugador->setMunicionesAdicionalesActivadas(false);

}

void AConSistemaProteccion::activarCamuflage()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("No se puede activar camuflage por que no esta habilitado"));
}

void AConSistemaProteccion::desactivarArmamentoAdicional()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("No se puede desactivar el armamento adicional por que no esta habilitado"));
}

void AConSistemaProteccion::desactivarProteccion()
{
	naveJugador->setProteccionActivada(false);
	naveJugador->setProteccion(0);
}

void AConSistemaProteccion::desactivarCamuflage()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("No se puede desactivar el camuflage por que no esta habilitado"));
}

FString AConSistemaProteccion::ToString()
{
	return "Nave jugador con sistema de proteccion";
}

void AConSistemaProteccion::setNaveJugador(AGalaga_USFX_L01Pawn* _naveJugador)
{
	naveJugador = _naveJugador;
}

// Called when the game starts or when spawned
void AConSistemaProteccion::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AConSistemaProteccion::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AConSistemaProteccion::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

