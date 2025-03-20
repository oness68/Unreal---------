// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintFunctionLibrary.h"

FString UMyBlueprintFunctionLibrary::GetMyFirstCPP()
{
    return FString(TEXT("Hello CPP lib in BP"));
}