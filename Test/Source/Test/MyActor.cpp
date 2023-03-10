// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//L"MESH"
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MESH"));
	RootComponent = Mesh;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> SM(TEXT("StaticMesh'/Game/StarterContent/Props/SM_Couch.SM_Couch'"));
	if (SM.Succeeded()) {
		Mesh->SetStaticMesh(SM.Object);
	}
}

// Called when the game starts or when spawned 소환할때 한번실행
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
//시작햇다 카테고리,로깅수준,형식,인자
	UE_LOG(LogTemp, Warning, TEXT("BeginPlay %d"), 3);
}

// Called every frame 매프레임마다 호출
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	AddActorLocalRotation(FRotator(RotateSpeed * DeltaTime, RotateSpeed * DeltaTime, 0.f));
	//UE_LOG(LogTemp, Error, TEXT("Tick %f"), DeltaTime);
}

