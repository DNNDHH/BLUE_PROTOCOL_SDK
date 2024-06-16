#pragma once

 

// Package: UMG_LiquidMemory_ForInventory

#include "Basic.hpp"

#include "UMG_LiquidMemory_ForInventory_classes.hpp"
#include "UMG_LiquidMemory_ForInventory_parameters.hpp"


namespace SDK
{

// Function UMG_LiquidMemory_ForInventory.UMG_LiquidMemory_ForInventory_C.ExecuteUbergraph_UMG_LiquidMemory_ForInventory
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LiquidMemory_ForInventory_C::ExecuteUbergraph_UMG_LiquidMemory_ForInventory(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemory_ForInventory_C", "ExecuteUbergraph_UMG_LiquidMemory_ForInventory");

	Params::UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LiquidMemory_ForInventory.UMG_LiquidMemory_ForInventory_C.RewardBoostUpdateComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InRetCode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LiquidMemory_ForInventory_C::RewardBoostUpdateComplete(int32 InRetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemory_ForInventory_C", "RewardBoostUpdateComplete");

	Params::UMG_LiquidMemory_ForInventory_C_RewardBoostUpdateComplete Parms{};

	Parms.InRetCode = InRetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LiquidMemory_ForInventory.UMG_LiquidMemory_ForInventory_C.RewardBoostUpdate
// (BlueprintCallable, BlueprintEvent)

void UUMG_LiquidMemory_ForInventory_C::RewardBoostUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemory_ForInventory_C", "RewardBoostUpdate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LiquidMemory_ForInventory.UMG_LiquidMemory_ForInventory_C.ExecOpen
// (BlueprintCallable, BlueprintEvent)

void UUMG_LiquidMemory_ForInventory_C::ExecOpen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemory_ForInventory_C", "ExecOpen");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LiquidMemory_ForInventory.UMG_LiquidMemory_ForInventory_C.OnAccumulateLiquidMemory_Event
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InRetCode                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FSBLiquidMemoryInfo>      InUpdatedLiquidMemoryInfos                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_LiquidMemory_ForInventory_C::OnAccumulateLiquidMemory_Event(const int32 InRetCode, const TArray<struct FSBLiquidMemoryInfo>& InUpdatedLiquidMemoryInfos)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemory_ForInventory_C", "OnAccumulateLiquidMemory_Event");

	Params::UMG_LiquidMemory_ForInventory_C_OnAccumulateLiquidMemory_Event Parms{};

	Parms.InRetCode = InRetCode;
	Parms.InUpdatedLiquidMemoryInfos = std::move(InUpdatedLiquidMemoryInfos);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LiquidMemory_ForInventory.UMG_LiquidMemory_ForInventory_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_LiquidMemory_ForInventory_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemory_ForInventory_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LiquidMemory_ForInventory.UMG_LiquidMemory_ForInventory_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_LiquidMemory_ForInventory_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemory_ForInventory_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LiquidMemory_ForInventory.UMG_LiquidMemory_ForInventory_C.Open
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_LiquidMemory_ForInventory_C::Open()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemory_ForInventory_C", "Open");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LiquidMemory_ForInventory.UMG_LiquidMemory_ForInventory_C.SetLiquidMemoryListItemNum
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InItemNum                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LiquidMemory_ForInventory_C::SetLiquidMemoryListItemNum(int32 InItemNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemory_ForInventory_C", "SetLiquidMemoryListItemNum");

	Params::UMG_LiquidMemory_ForInventory_C_SetLiquidMemoryListItemNum Parms{};

	Parms.InItemNum = InItemNum;

	UObject::ProcessEvent(Func, &Parms);
}

}

