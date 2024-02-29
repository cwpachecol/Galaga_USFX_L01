// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemiga.generated.h"

UCLASS()
class GALAGA_USFX_L01_API ANaveEnemiga : public AActor
{
	GENERATED_BODY()
private:
	FString* nombre;
	float velocidad;
	float posicionX;
	float posicionY;
	float posicionZ;
	float energia;
public:	
	// Sets default values for this actor's properties
	ANaveEnemiga();
public:
	//Metodos de acceso
	FORCEINLINE void setNombre(FString* nombre) { this->nombre = nombre; }
	FORCEINLINE FString *getNombre() { return nombre; }
	void setVelocidad(float velocidad);
	float getVelocidad();
	void setPosicionX(float posicionX);
	float getPosicionX();
	void setPosicionY(float posicionY);
	float getPosicionY();
	void setPosicionZ(float posicionZ);
	float getPosicionZ();
	void setEnergia(float energia);
	float getEnergia();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
