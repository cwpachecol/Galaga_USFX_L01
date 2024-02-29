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
	FORCEINLINE void setVelocidad(float velocidad) { this->velocidad = velocidad; }
	FORCEINLINE float getVelocidad() { return velocidad; }
	FORCEINLINE void setPosicionX(float posicionX) { this->posicionX = posicionX; }
	FORCEINLINE float getPosicionX() { return posicionX; }
	FORCEINLINE void setPosicionY(float posicionY) { this->posicionY = posicionY; }
	FORCEINLINE float getPosicionY() { return posicionY; }
	FORCEINLINE void setPosicionZ(float posicionZ) { this->posicionZ = posicionZ; }
	FORCEINLINE float getPosicionZ() { return posicionZ; }
	FORCEINLINE void setEnergia(float energia) { this->energia = energia; }
	FORCEINLINE float getEnergia() { return energia; }
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
