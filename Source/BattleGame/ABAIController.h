// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "BattleGame.h"
#include "AIController.h"
#include "ABAIController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLEGAME_API AABAIController : public AAIController
{
	GENERATED_BODY()
	
public:
	AABAIController();
	virtual void OnPossess(APawn* InPawn) override;
	virtual void OnUnPossess() override;

private:
	void OnReapeatTimer();

	FTimerHandle RepeatTimerHandle;
	float RepeatInterval;
};
