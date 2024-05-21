// Fill out your copyright notice in the Description page of Project Settings.


#include "Publisher.h"
#include "Subscriptor.h"
// Sets default values
APublisher::APublisher()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APublisher::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APublisher::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APublisher::suscribe(ANaveEnemiga* neSubscribe)
{
	/*ISubscriptor* sub_act = Cast<ISubscriptor>(neSubscribe);
	sub_act->update(this);
	neSubscribe->update(this);*/
	listaSuscriptores.Add(neSubscribe);
	
}

void APublisher::unsuscribe(ANaveEnemiga* neUnsuscribe)
{
	listaSuscriptores.Remove(neUnsuscribe);
}

void APublisher::notifySuscribers()
{
	for (ANaveEnemiga* naveEnemiga : listaSuscriptores)
	{
		//Cast each of them to a concrete Subscriber
		ISubscriptor* Sub = Cast<ISubscriptor>(naveEnemiga);
		if (Sub)
		{
			Sub->update();
		}
	}

}

//void APublisher::actualizarSuscribers()
//{
//	for (ANaveEnemiga* naveEnemiga : listaSuscriptores)
//	{
//		//Cast each of them to a concrete Subscriber
//		ISubscriptor* Sub = Cast<ISubscriptor>(naveEnemiga);
//		if (Sub)
//		{
//			Sub->(this);
//		}
//	}
//
//}
