#pragma once

 

// Package: UMG_LiquidMemoryUnfilledIcon

#include "Basic.hpp"

#include "UMG_LiquidMemoryUnfilledIcon_classes.hpp"
#include "UMG_LiquidMemoryUnfilledIcon_parameters.hpp"


namespace SDK
{

// Function UMG_LiquidMemoryUnfilledIcon.UMG_LiquidMemoryUnfilledIcon_C.ExecuteUbergraph_UMG_LiquidMemoryUnfilledIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LiquidMemoryUnfilledIcon_C::ExecuteUbergraph_UMG_LiquidMemoryUnfilledIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryUnfilledIcon_C", "ExecuteUbergraph_UMG_LiquidMemoryUnfilledIcon");

	Params::UMG_LiquidMemoryUnfilledIcon_C_ExecuteUbergraph_UMG_LiquidMemoryUnfilledIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LiquidMemoryUnfilledIcon.UMG_LiquidMemoryUnfilledIcon_C.SetLiquidMemory
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InLiquidMemoryId                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   InAccumulatedRate                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LiquidMemoryUnfilledIcon_C::SetLiquidMemory(int32 InLiquidMemoryId, float InAccumulatedRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryUnfilledIcon_C", "SetLiquidMemory");

	Params::UMG_LiquidMemoryUnfilledIcon_C_SetLiquidMemory Parms{};

	Parms.InLiquidMemoryId = InLiquidMemoryId;
	Parms.InAccumulatedRate = InAccumulatedRate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LiquidMemoryUnfilledIcon.UMG_LiquidMemoryUnfilledIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_LiquidMemoryUnfilledIcon_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryUnfilledIcon_C", "PreConstruct");

	Params::UMG_LiquidMemoryUnfilledIcon_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LiquidMemoryUnfilledIcon.UMG_LiquidMemoryUnfilledIcon_C.SetAccumulatedRate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InAccumulatedRate                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LiquidMemoryUnfilledIcon_C::SetAccumulatedRate(float InAccumulatedRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryUnfilledIcon_C", "SetAccumulatedRate");

	Params::UMG_LiquidMemoryUnfilledIcon_C_SetAccumulatedRate Parms{};

	Parms.InAccumulatedRate = InAccumulatedRate;

	UObject::ProcessEvent(Func, &Parms);
}

}

