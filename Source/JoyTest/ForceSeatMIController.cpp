// Fill out your copyright notice in the Description page of Project Settings.

#include "ForceSeatMIController.h"


// Sets default values for this component's properties
UForceSeatMIController::UForceSeatMIController() : mCurrentRoll(0), mCurrentPitch(0), mCurrentYaw(0)
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
    
    
    memset(&PlatformPosition, 0, sizeof(PlatformPosition));
    PlatformPosition.structSize = sizeof(PlatformPosition);
    
    // The demo program is able to provide pause, position and speed limit
    PlatformPosition.maxSpeed = PLATFORM_MAX_SPEED;
    PlatformPosition.mask     = FSMI_POS_BIT_STATE | FSMI_POS_BIT_POSITION | FSMI_POS_BIT_MAX_SPEED;
    
}


// Called when the game starts
void UForceSeatMIController::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UForceSeatMIController::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UForceSeatMIController::UpdatePlatform(float vPitch, float vYaw, float vRoll) {
	if (GEngine)	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, FString::Printf(TEXT("(%f,%F,%F)"), vPitch, vYaw, vRoll));
}

void UForceSeatMIController::Start() {
	if (GEngine)	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, "Start ForceSeatMIController");
}

void UForceSeatMIController::End() {
	if (GEngine)	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, "End ForceSeatMIController");
}
