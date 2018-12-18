// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine.h"
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ForceSeatMIController.generated.h"

UCLASS(Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class JOYTEST_API UForceSeatMIController : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UForceSeatMIController();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, Category = "MotionControl")
	void	UpdatePlatform(float vPitch, float vYaw, float vRoll);

	UFUNCTION(BlueprintCallable, Category = "MotionControl")
	void	Start();

	UFUNCTION(BlueprintCallable, Category = "MotionControl")
	void	End();

    
private:
    float   mCurrentRoll;
    float   mCurrentYaw;
    float   mCurrentPitch;
};

