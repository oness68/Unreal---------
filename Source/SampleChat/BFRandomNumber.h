// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BFRandomNumber.generated.h"

/**
 * 
 */
UCLASS()
class SAMPLECHAT_API UBFRandomNumber : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable)
	static FString RandNum();

};
