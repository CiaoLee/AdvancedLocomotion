


#include "ALS_NativeBaseCharacter.h"

// Sets default values
AALS_NativeBaseCharacter::AALS_NativeBaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AALS_NativeBaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AALS_NativeBaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AALS_NativeBaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

