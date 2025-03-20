// Fill out your copyright notice in the Description page of Project Settings.


#include "BFRandomNumber.h"
#include "Kismet/KismetMathLibrary.h"
#include<vector>

FString UBFRandomNumber::RandNum()
{
	TArray<int32> array;
	FString str = "";
	while (array.Num() < 3)
	{		
		array.AddUnique(UKismetMathLibrary::RandomIntegerInRange(0, 9));
	
		UE_LOG(LogTemp, Warning, TEXT("%d"),array.Num());
	}

	for (auto it : array)
	{
		str += FString::FromInt(it);
	}

	return str;
}
