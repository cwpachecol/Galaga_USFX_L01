// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "State.h"
#include "basica.generated.h"

UCLASS()
class GALAGA_USFX_L01_API Abasica : public APawn, public IState	
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	Abasica();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	UPROPERTY()
	class AGalaga_USFX_L01Pawn* naveJugador;

public:
	virtual void activarArmamentoAdicional() override;
	virtual void activarProteccion() override;
	virtual void activarCamuflage() override;
	virtual void desactivarArmamentoAdicional() override;
	virtual void desactivarProteccion() override;
	virtual void desactivarCamuflage() override;

	//Get the String this State
	virtual FString ToString() override;
	//Set the Slot Machine of this state
	virtual void setNaveJugador(class AGalaga_USFX_L01Pawn* _naveJugador) override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
