// Fill out your copyright notice in the Description page of Project Settings.


#include "basica.h"
#include "Galaga_USFX_L01Pawn.h"

// Sets default values
Abasica::Abasica()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Abasica::BeginPlay()
{
	Super::BeginPlay();
	
}

void Abasica::activarArmamentoAdicional()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("No se puede activar las armas adicionales por que no estan habilitadas"));
}

void Abasica::activarProteccion()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("No se puede activar la proteccion por que no esta habilitada"));
}

void Abasica::activarCamuflage()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("No se puede activar el camuflaje por que no esta habilitado"));
}

void Abasica::desactivarArmamentoAdicional()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("No se puede desactivar las armas adicionales por que no estan habilitadas"));
}

void Abasica::desactivarProteccion()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("No se puede desactivar la proteccion por que no esta habilitada"));
}

void Abasica::desactivarCamuflage()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("No se puede desactivar el camuflage por que no esta habilitado"));
}

FString Abasica::ToString()
{
	return "Estado basico de la nave jugador";
}

void Abasica::setNaveJugador(AGalaga_USFX_L01Pawn* _naveJugador)
{
	naveJugador = _naveJugador;
}

// Called every frame
void Abasica::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void Abasica::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

