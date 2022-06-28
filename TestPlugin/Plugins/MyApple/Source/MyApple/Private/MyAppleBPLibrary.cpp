// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyAppleBPLibrary.h"
#include "MyApple.h"

UMyAppleBPLibrary::UMyAppleBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

float UMyAppleBPLibrary::MyAppleSampleFunction(float Param)
{
	return -1;
}

