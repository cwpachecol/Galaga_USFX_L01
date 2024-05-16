// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PNABuilder.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UPNABuilder : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GALAGA_USFX_L01_API IPNABuilder
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
	virtual void builtUnidadesReparacion() = 0;
	virtual void builtEstructura() = 0;
	virtual void builtMotores() = 0;
	virtual void builtAcenal() = 0;
	virtual void builtReavastecimiento() = 0;

	virtual class APNA* GetPNA() = 0;

public:
};
