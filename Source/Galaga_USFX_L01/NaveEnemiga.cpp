// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemiga.h"

// Sets default values
ANaveEnemiga::ANaveEnemiga()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	// Create the mesh component
	mallaNaveEnemiga = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	//mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
	mallaNaveEnemiga->SetupAttachment(RootComponent);
	RootComponent = mallaNaveEnemiga;
	velocidad = 1;
	energia = 100;
}

// Called when the game starts or when spawned
void ANaveEnemiga::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANaveEnemiga::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ANaveEnemiga::setRadar(ARadarEnemigo* _radarEnemigo)
{
	if (!_radarEnemigo) {
		UE_LOG(LogTemp, Error, TEXT("Radar no existe")); 
		return; 
	}
	radarEnemigo = _radarEnemigo;
	radarEnemigo->suscribe(this);
}

void ANaveEnemiga::moverA(FVector _destino)
{
	FVector PosicionActual = GetActorLocation();

	// Genera nuevas coordenadas X e Y aleatorias
	//float NuevaX = FMath::RandRange(-1000.0f, 1000.0f) * DeltaTime * velocidad;
	//float NuevaY = FMath::RandRange(-1000.0f, 1000.0f) * DeltaTime * velocidad;
	//float NuevaZ = 
	//// Crea un nuevo vector de posición con las coordenadas aleatorias y la misma Z que la posición actual
	//FVector NuevaPosicion = FVector(PosicionActual.X + NuevaX, PosicionActual.Y + NuevaY, PosicionActual.Z);

	// Establece la nueva posición del actor
	SetActorLocation(_destino);
	
}

void ANaveEnemiga::Destroyed()
{
	Super::Destroyed();
	if (!radarEnemigo) {
		UE_LOG(LogTemp, Error, TEXT("No hay radar enemigo.")); 
		return; 
	}
	
	radarEnemigo->unsuscribe(this);
}




void ANaveEnemiga::update(FString _accion)
{
	//Log Error if its Clock Tower is NULL
	if (!radarEnemigo) {
		UE_LOG(LogTemp, Error, TEXT("No hay radar.")); 
		return; 
	}
	
	if (_accion.Compare("reabastecer")) {
		moverA(radarEnemigo->posicionReabastecimiento);
	}
		


	//Get the current time of the Clock Tower
	/*float promedioEnergiaNavesEnemigas = radar->getPromedioEnergiaNavesEnemigas();
		if (!promedioEnergiaNavesEnemigas < 10.0f)
		{
			moverA(radar->posicionReabastecimiento);
		}
	*/	//else if (!Time.Compare("Midday"))
		//{
		//	//Execute the Midday routine
		//	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,
		//		FString::Printf(TEXT("It is %s, so FreakyAllen's right eye starts to twitch"),
		//			*Time));
		//}
		//else if (!Time.Compare("Evening"))
		//{
		//	//Execute the Evening routine
		//	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,
		//		FString::Printf(TEXT("It is %s, so FreakyAllen morphs into a blood sucking
		//			wogglesnort"), *Time));
		//}


}

