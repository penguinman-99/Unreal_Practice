// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class TEST_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	//리플렉션: 컴파일러가 읽을수있는 주석
	UPROPERTY(VisibleAnyWhere)
	UStaticMeshComponent* Mesh;
	UPROPERTY(EditAnyWhere,Category=BattleStat)
	int32 Hp;

	UPROPERTY(EditAnyWhere, Category = BattleStat)
		int32 Mp;
	UPROPERTY(EditAnyWhere, Category = BattleStat)
	float RotateSpeed=30.f;
};
