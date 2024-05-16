// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PlanoConstruccion.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UPlanoConstruccion : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GALAGA_USFX_L01_API IPlanoConstruccion
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
	virtual void setUnidadReparacion(FString unidadReparacion) = 0;
	virtual void setEstructura(FString estructura) = 0;
	virtual void setMotores(FString motores) = 0;
	virtual void setArcenal(FString arcenal) = 0;
	virtual void setReavastecimiento(FString reavastecimiento) = 0;
public:
};
