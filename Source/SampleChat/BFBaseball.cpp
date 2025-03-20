// Fill out your copyright notice in the Description page of Project Settings.


#include "BFBaseball.h"
#include "Kismet/KismetStringLibrary.h"
FString UBFBaseball::BaseBallRule(FString InputText, FString AnswerNumber)
{
	int32 Ball=0;
	int32 Strike=0;
	int32 Out=0;
	TArray<FString::ElementType> UniqueArray;
	//FString ConvertToString = InputText.ToString();
	FString ExceptionString = FString(TEXT("0S 0B 3OUT"));
	FString MakeResultString = "";
	TArray<int32> InputArray;

	if (!CheckNumbers(InputText))
	{
		return ExceptionString + FString(TEXT(" ( Input Error Only Number Plz)"));
	}

	if (InputText.Len() == AnswerNumber.Len())
	{
		


		for (int i = 0; i < InputText.Len(); i++)
		{

			UniqueArray.AddUnique(InputText[i]);


		}

		if (UniqueArray.Num() < AnswerNumber.Len() )
		{
			return ExceptionString + FString(TEXT(" ( Detect duplicate numbers! Input three different numbers)"));
		}

		int Number = UKismetStringLibrary::Conv_StringToInt(InputText);
		while (Number > 0)
		{
			int32 digit = Number % 10;
			InputArray.Add(digit);
			Number /= 10;
		}

		InputArray.Swap(0, 2);


		for (int i = 0; i < AnswerNumber.Len(); i++)
		{
			FString Digits = FString::FromInt(InputArray[i]);
			if (InputText[i] == AnswerNumber[i])
			{
				Strike++;
			}
			else if (InputText[i] != AnswerNumber[i] && AnswerNumber.Contains(Digits, ESearchCase::IgnoreCase, ESearchDir::FromStart))
			{
				Ball++;
			}
			
			else
			{
				Out++;
			}

		}


		
	}
	else
	{
		return ExceptionString + FString(TEXT(" ( Input three different numbers Plz)"));
	}


	MakeResultString += FString::FromInt(Strike);
	MakeResultString += "S ";

	MakeResultString += FString::FromInt(Ball);
	MakeResultString += "B ";

	MakeResultString += FString::FromInt(Out);
	MakeResultString += "OUT";


	return MakeResultString;
}


bool UBFBaseball::CheckNumbers(FString& str)
{
	FString StringTemp = str;
	//TArray<int32> arrays;
	for (int i = 0; i < str.Len(); i++)
	{
		if (str[i] > '9')
		{
			return false;

		}
	}

	
	return true;
}
