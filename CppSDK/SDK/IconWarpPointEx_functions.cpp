#pragma once

 

// Package: IconWarpPointEx

#include "Basic.hpp"

#include "IconWarpPointEx_classes.hpp"
#include "IconWarpPointEx_parameters.hpp"


namespace SDK
{

// Function IconWarpPointEx.IconWarpPointEx_C.Set Icon Image
// (Public, BlueprintCallable, BlueprintEvent)

void UIconWarpPointEx_C::Set_Icon_Image()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconWarpPointEx_C", "Set Icon Image");

	UObject::ProcessEvent(Func, nullptr);
}

}

