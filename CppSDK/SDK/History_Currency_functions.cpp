#pragma once

 

// Package: History_Currency

#include "Basic.hpp"

#include "History_Currency_classes.hpp"
#include "History_Currency_parameters.hpp"


namespace SDK
{

// Function History_Currency.History_Currency_C.ExecuteUbergraph_History_Currency
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHistory_Currency_C::ExecuteUbergraph_History_Currency(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("History_Currency_C", "ExecuteUbergraph_History_Currency");

	Params::History_Currency_C_ExecuteUbergraph_History_Currency Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function History_Currency.History_Currency_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHistory_Currency_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("History_Currency_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function History_Currency.History_Currency_C.SwitchShopType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBHistoryType                          Param_HistoryType                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHistory_Currency_C::SwitchShopType(ESBHistoryType Param_HistoryType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("History_Currency_C", "SwitchShopType");

	Params::History_Currency_C_SwitchShopType Parms{};

	Parms.Param_HistoryType = Param_HistoryType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function History_Currency.History_Currency_C.SetAmount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Paid                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Free                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHistory_Currency_C::SetAmount(int32 Paid, int32 Free)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("History_Currency_C", "SetAmount");

	Params::History_Currency_C_SetAmount Parms{};

	Parms.Paid = Paid;
	Parms.Free = Free;

	UObject::ProcessEvent(Func, &Parms);
}

}

