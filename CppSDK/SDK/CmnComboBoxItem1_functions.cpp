#pragma once

 

// Package: CmnComboBoxItem1

#include "Basic.hpp"

#include "CmnComboBoxItem1_classes.hpp"
#include "CmnComboBoxItem1_parameters.hpp"


namespace SDK
{

// Function CmnComboBoxItem1.CmnComboBoxItem1_C.ExecuteUbergraph_CmnComboBoxItem1
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCmnComboBoxItem1_C::ExecuteUbergraph_CmnComboBoxItem1(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnComboBoxItem1_C", "ExecuteUbergraph_CmnComboBoxItem1");

	Params::CmnComboBoxItem1_C_ExecuteUbergraph_CmnComboBoxItem1 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnComboBoxItem1.CmnComboBoxItem1_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCmnComboBoxItem1_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnComboBoxItem1_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

