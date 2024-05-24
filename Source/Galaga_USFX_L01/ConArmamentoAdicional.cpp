// Fill out your copyright notice in the Description page of Project Settings.


#include "ConArmamentoAdicional.h"
#include "Galaga_USFX_L01Pawn.h"

// Sets default values
AConArmamentoAdicional::AConArmamentoAdicional()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AConArmamentoAdicional::BeginPlay()
{
	Super::BeginPlay();
	
}

void AConArmamentoAdicional::activarArmamentoAdicional()
{
	naveJugador->setMunicionesAdicionales(true);
	naveJugador->setMunicionesAdicionales(100);
	naveJugador->setCamuflage(false);
	naveJugador->setProteccion(false);

}

void AConArmamentoAdicional::activarProteccion()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("No se puede desactivar la proteccion por que no esta habilitada"));
}

void AConArmamentoAdicional::activarCamuflage()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("No se puede desactivar el camuflage por que este no esta habilitado"));
}

void AConArmamentoAdicional::desactivarArmamentoAdicional()
{
	naveJugador->setMunicionesAdicionales(false);
	if (naveJugador->getCamuflage() > 0) {
		naveJugador->setState(naveJugador->getConCamuflage());
	}
	else if (naveJugador->getProteccion() > 0) {
		naveJugador->setState(naveJugador->getConSistemaProteccion());
	}
	else {
		naveJugador->setState(naveJugador->getBasica());
	}
	
}

void AConArmamentoAdicional::desactivarProteccion()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("No se puede desactivar la proteccion por que este no esta habilitado"));
}

void AConArmamentoAdicional::desactivarCamuflage()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("No se puede desactivar el camuflage por que este no esta habilitado"));

}

FString AConArmamentoAdicional::ToString()
{
	return "Nave jugador con armamento adicional";
}

void AConArmamentoAdicional::setNaveJugador(AGalaga_USFX_L01Pawn* _naveJugador)
{
	naveJugador = _naveJugador;
}

// Called every frame
void AConArmamentoAdicional::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AConArmamentoAdicional::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

