// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MyPawn.generated.h"

UCLASS()
class TEST_API AMyPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMyPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void UpDown(float Value);
	void LeftRight(float Vallue);
	// Called to bind functionality to input �Է��� �޾� �����δ�
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
private:
	//���÷���: �����Ϸ��� �������ִ� �ּ�
	UPROPERTY(VisibleAnyWhere)
	UStaticMeshComponent* Mesh;
	class UFloatingPawnMovement* Movement;
};
