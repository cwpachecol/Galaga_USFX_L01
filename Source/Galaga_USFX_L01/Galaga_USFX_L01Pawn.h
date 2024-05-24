// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "State.h"
#include "Galaga_USFX_L01Pawn.generated.h"

UCLASS(Blueprintable)
class AGalaga_USFX_L01Pawn : public APawn
{
	GENERATED_BODY()

	/* The mesh component */
	UPROPERTY(Category = Mesh, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* ShipMeshComponent;

	/** The camera */
	UPROPERTY(Category = Camera, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* CameraComponent;

	/** Camera boom positioning the camera above the character */
	UPROPERTY(Category = Camera, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

private:
	IState* basica;
	IState* conArmamentoAdicional;
	IState* conCamuflage;
	IState* conSistemaProteccion;
	IState* state;

public:
	IState* getState() { return state; }
	void setState(IState* _state) { state = _state; }

	IState* getBasica() { return basica; }
	IState* getConArmamentoAdicional() { return conArmamentoAdicional; }
	IState* getConCamuflage() { return conCamuflage; }
	IState* getConSistemaProteccion() { return conSistemaProteccion; }

	void setBasica(IState* _basica) { basica = _basica; }
	void setConArmamentoAdicional(IState* _conArmamentoAdicional) { conArmamentoAdicional = _conArmamentoAdicional; }
	void setConCamuflage(IState* _conCamuflage) { conCamuflage = _conCamuflage; }
	void setConSistemaProteccion(IState* _conSistemaProteccion) { conSistemaProteccion = _conSistemaProteccion; }

	void activarArmamentoAdicional();
	void activarProteccion();
	void activarCamuflage();
	void desactivarArmamentoAdicional();
	void desactivarProteccion();
	void desactivarCamuflage();

	void inicializar();


public:
	AGalaga_USFX_L01Pawn();

	/** Offset from the ships location to spawn projectiles */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite )
	FVector GunOffset;
	
	/* How fast the weapon will fire */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
	float FireRate;

	/* The speed our ship moves around the level */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
	float MoveSpeed;

	/** Sound to play each time we fire */
	UPROPERTY(Category = Audio, EditAnywhere, BlueprintReadWrite)
	class USoundBase* FireSound;

	// Begin Actor Interface
	virtual void Tick(float DeltaSeconds) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
	// End Actor Interface

	/* Fire a shot in the specified direction */
	void FireShot(FVector FireDirection);

	/* Handler for the fire timer expiry */
	void ShotTimerExpired();

	// Static names for axis bindings
	static const FName MoveForwardBinding;
	static const FName MoveRightBinding;
	static const FName FireForwardBinding;
	static const FName FireRightBinding;

private:

	/* Flag to control firing  */
	uint32 bCanFire : 1;

	/** Handle for efficient management of ShotTimerExpired timer */
	FTimerHandle TimerHandle_ShotTimerExpired;

public:
	/** Returns ShipMeshComponent subobject **/
	FORCEINLINE class UStaticMeshComponent* GetShipMeshComponent() const { return ShipMeshComponent; }
	/** Returns CameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetCameraComponent() const { return CameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

private:
	int municionesAdicionales;
	int proteccion;
	int camuflage;
	bool municionesAdicionalesActivadas;
	bool proteccionActivada;
	bool camuflageActivado;

public:

	FORCEINLINE bool getMunicionesAdicionalesActivadas() const { return municionesAdicionalesActivadas; }
	FORCEINLINE bool getProteccionActivada() const { return proteccionActivada; }
	FORCEINLINE bool getCamuflageActivado() const { return camuflageActivado; }
	FORCEINLINE void setMunicionesAdicionalesActivadas(bool _municionesAdicionalesActivadas) { municionesAdicionalesActivadas = _municionesAdicionalesActivadas; }
	FORCEINLINE void setProteccionActivada(bool _proteccionActivada) { proteccionActivada = _proteccionActivada; }
	FORCEINLINE void setCamuflageActivado(bool _camuflageActivado) { camuflageActivado = _camuflageActivado; }

	void setMunicionesAdicionales(int _municionesAdicionales);
	void setProteccion(int _proteccion);
	void setCamuflage(int _camuflage);

	int getMunicionesAdicionales();
	int getProteccion();
	int getCamuflage();

};

