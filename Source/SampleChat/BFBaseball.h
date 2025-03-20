// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BFBaseball.generated.h"

/**
 * 
 */
UCLASS()
class SAMPLECHAT_API UBFBaseball : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintCallable, Category = "BaseBall")
	static FString BaseBallRule(FString InputText, FString AnswerNumber);

	static bool CheckNumbers(FString& str);

};
