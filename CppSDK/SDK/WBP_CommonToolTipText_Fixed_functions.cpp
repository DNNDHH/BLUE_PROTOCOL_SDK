#pragma once

 

// Package: WBP_CommonToolTipText_Fixed

#include "Basic.hpp"

#include "WBP_CommonToolTipText_Fixed_classes.hpp"
#include "WBP_CommonToolTipText_Fixed_parameters.hpp"


namespace SDK
{

// Function WBP_CommonToolTipText_Fixed.WBP_CommonToolTipText_Fixed_C.ExecuteUbergraph_WBP_CommonToolTipText_Fixed
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CommonToolTipText_Fixed_C::ExecuteUbergraph_WBP_CommonToolTipText_Fixed(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonToolTipText_Fixed_C", "ExecuteUbergraph_WBP_CommonToolTipText_Fixed");

	Params::WBP_CommonToolTipText_Fixed_C_ExecuteUbergraph_WBP_CommonToolTipText_Fixed Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CommonToolTipText_Fixed.WBP_CommonToolTipText_Fixed_C.SetText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_CommonToolTipText_Fixed_C::SetText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonToolTipText_Fixed_C", "SetText");

	Params::WBP_CommonToolTipText_Fixed_C_SetText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}

}

