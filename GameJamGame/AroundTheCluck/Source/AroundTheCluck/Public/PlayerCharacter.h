// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseCharacter.h"
#include "PlayerCharacter.generated.h"

/**
 * 
 */
UCLASS()
class AROUNDTHECLUCK_API APlayerCharacter : public ABaseCharacter
{
	GENERATED_BODY()
public:
	// Sets default values for this character's properties
	APlayerCharacter();

	/** Moves the player upward when the specified axis is moved. 
	* @param value The amount to move.
	*/
	void MoveUp(float value);

	/** Moves the player right when the specified axis is moved.
	* @param value The amount to move.
	*/	
	void MoveRight(float value);

	/** Rotates the player Up when the specified axis is moved.
	* @param value The amount to move.
	*/
	void LookUp(float value);

	/** Rotates the player right when the specified axis is moved.
	* @param value The amount to move.
	*/
	void LookRight(float value);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};