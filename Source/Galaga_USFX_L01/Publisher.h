// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Publisher.generated.h"

UCLASS()
class GALAGA_USFX_L01_API APublisher : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APublisher();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	TArray<class ANaveEnemiga*> listaSuscriptores = TArray<ANaveEnemiga*>();

public:
	virtual void suscribe(ANaveEnemiga* neSuscribe);
	virtual void unsuscribe(ANaveEnemiga* neUnsuscribe);
	virtual void notifySuscribers();
	virtual void actualizarSuscribers();


};
