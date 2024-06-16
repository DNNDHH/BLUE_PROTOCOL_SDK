#pragma once

 

// Package: CmnClose02

#include "Basic.hpp"

#include "CmnClose02_classes.hpp"
#include "CmnClose02_parameters.hpp"


namespace SDK
{

// Function CmnClose02.CmnClose02_C.OnClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCmnClose02_C::OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnClose02_C", "OnClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnClose02.CmnClose02_C.ExecuteUbergraph_CmnClose02
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCmnClose02_C::ExecuteUbergraph_CmnClose02(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnClose02_C", "ExecuteUbergraph_CmnClose02");

	Params::CmnClose02_C_ExecuteUbergraph_CmnClose02 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnClose02.CmnClose02_C.BndEvt__CmnClose01_BtnClose_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCmnClose02_C::BndEvt__CmnClose01_BtnClose_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnClose02_C", "BndEvt__CmnClose01_BtnClose_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}

