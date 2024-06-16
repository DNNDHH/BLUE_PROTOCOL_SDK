#pragma once

 

// Package: UMG_LiquidMemoryBottleStatus

#include "Basic.hpp"

#include "UMG_LiquidMemoryBottleStatus_classes.hpp"
#include "UMG_LiquidMemoryBottleStatus_parameters.hpp"


namespace SDK
{

// Function UMG_LiquidMemoryBottleStatus.UMG_LiquidMemoryBottleStatus_C.ExecuteUbergraph_UMG_LiquidMemoryBottleStatus
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LiquidMemoryBottleStatus_C::ExecuteUbergraph_UMG_LiquidMemoryBottleStatus(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryBottleStatus_C", "ExecuteUbergraph_UMG_LiquidMemoryBottleStatus");

	Params::UMG_LiquidMemoryBottleStatus_C_ExecuteUbergraph_UMG_LiquidMemoryBottleStatus Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LiquidMemoryBottleStatus.UMG_LiquidMemoryBottleStatus_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_LiquidMemoryBottleStatus_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryBottleStatus_C", "PreConstruct");

	Params::UMG_LiquidMemoryBottleStatus_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LiquidMemoryBottleStatus.UMG_LiquidMemoryBottleStatus_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_LiquidMemoryBottleStatus_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryBottleStatus_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LiquidMemoryBottleStatus.UMG_LiquidMemoryBottleStatus_C.SetBottleStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBLiquidMemoryInfo              InLiquidMemoryInfo                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UUMG_LiquidMemoryBottleStatus_C::SetBottleStatus(const struct FSBLiquidMemoryInfo& InLiquidMemoryInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryBottleStatus_C", "SetBottleStatus");

	Params::UMG_LiquidMemoryBottleStatus_C_SetBottleStatus Parms{};

	Parms.InLiquidMemoryInfo = std::move(InLiquidMemoryInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LiquidMemoryBottleStatus.UMG_LiquidMemoryBottleStatus_C.SetBottleAccumulatedRate_One
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InBottleId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   AccumlatedRate                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LiquidMemoryBottleStatus_C::SetBottleAccumulatedRate_One(int32 InBottleId, float AccumlatedRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryBottleStatus_C", "SetBottleAccumulatedRate_One");

	Params::UMG_LiquidMemoryBottleStatus_C_SetBottleAccumulatedRate_One Parms{};

	Parms.InBottleId = InBottleId;
	Parms.AccumlatedRate = AccumlatedRate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LiquidMemoryBottleStatus.UMG_LiquidMemoryBottleStatus_C.SetBottleLiquidMemory_One
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InBottleId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InLiquidMemoryId                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   InAccumulatedRate                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LiquidMemoryBottleStatus_C::SetBottleLiquidMemory_One(int32 InBottleId, int32 InLiquidMemoryId, float InAccumulatedRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryBottleStatus_C", "SetBottleLiquidMemory_One");

	Params::UMG_LiquidMemoryBottleStatus_C_SetBottleLiquidMemory_One Parms{};

	Parms.InBottleId = InBottleId;
	Parms.InLiquidMemoryId = InLiquidMemoryId;
	Parms.InAccumulatedRate = InAccumulatedRate;

	UObject::ProcessEvent(Func, &Parms);
}

}

