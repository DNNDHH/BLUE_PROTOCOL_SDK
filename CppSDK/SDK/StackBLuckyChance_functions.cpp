#pragma once

 

// Package: StackBLuckyChance

#include "Basic.hpp"

#include "StackBLuckyChance_classes.hpp"
#include "StackBLuckyChance_parameters.hpp"


namespace SDK
{

// Function StackBLuckyChance.StackBLuckyChance_C.ExecuteUbergraph_StackBLuckyChance
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStackBLuckyChance_C::ExecuteUbergraph_StackBLuckyChance(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackBLuckyChance_C", "ExecuteUbergraph_StackBLuckyChance");

	Params::StackBLuckyChance_C_ExecuteUbergraph_StackBLuckyChance Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StackBLuckyChance.StackBLuckyChance_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UStackBLuckyChance_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackBLuckyChance_C", "PreConstruct");

	Params::StackBLuckyChance_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StackBLuckyChance.StackBLuckyChance_C.SetData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     InfoData                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UStackBLuckyChance_C::SetData(const struct FOwnItemInfo& InfoData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackBLuckyChance_C", "SetData");

	Params::StackBLuckyChance_C_SetData Parms{};

	Parms.InfoData = std::move(InfoData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function StackBLuckyChance.StackBLuckyChance_C.SetLuckyChanceNum
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ChanceNum                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStackBLuckyChance_C::SetLuckyChanceNum(int32 ChanceNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackBLuckyChance_C", "SetLuckyChanceNum");

	Params::StackBLuckyChance_C_SetLuckyChanceNum Parms{};

	Parms.ChanceNum = ChanceNum;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StackBLuckyChance.StackBLuckyChance_C.UpdateColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UStackBLuckyChance_C::UpdateColor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackBLuckyChance_C", "UpdateColor");

	UObject::ProcessEvent(Func, nullptr);
}

}

