#pragma once

 

// Package: CommonIconToolTipContent_LiquidMemory

#include "Basic.hpp"

#include "CommonIconToolTipContent_LiquidMemory_classes.hpp"
#include "CommonIconToolTipContent_LiquidMemory_parameters.hpp"


namespace SDK
{

// Function CommonIconToolTipContent_LiquidMemory.CommonIconToolTipContent_LiquidMemory_C.SetLiquidMemory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InLiquidMemoryId                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIconToolTipContent_LiquidMemory_C::SetLiquidMemory(int32 InLiquidMemoryId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTipContent_LiquidMemory_C", "SetLiquidMemory");

	Params::CommonIconToolTipContent_LiquidMemory_C_SetLiquidMemory Parms{};

	Parms.InLiquidMemoryId = InLiquidMemoryId;

	UObject::ProcessEvent(Func, &Parms);
}

}

