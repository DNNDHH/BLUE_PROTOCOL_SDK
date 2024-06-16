#pragma once

 

// Package: CmnClose01

#include "Basic.hpp"

#include "CmnClose01_classes.hpp"
#include "CmnClose01_parameters.hpp"


namespace SDK
{

// Function CmnClose01.CmnClose01_C.OnClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCmnClose01_C::OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnClose01_C", "OnClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnClose01.CmnClose01_C.ExecuteUbergraph_CmnClose01
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCmnClose01_C::ExecuteUbergraph_CmnClose01(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnClose01_C", "ExecuteUbergraph_CmnClose01");

	Params::CmnClose01_C_ExecuteUbergraph_CmnClose01 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnClose01.CmnClose01_C.BndEvt__CmnClose01_BtnClose_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCmnClose01_C::BndEvt__CmnClose01_BtnClose_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnClose01_C", "BndEvt__CmnClose01_BtnClose_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnClose01.CmnClose01_C.SetEnableBtn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInIsEnabled                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCmnClose01_C::SetEnableBtn(bool bInIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnClose01_C", "SetEnableBtn");

	Params::CmnClose01_C_SetEnableBtn Parms{};

	Parms.bInIsEnabled = bInIsEnabled;

	UObject::ProcessEvent(Func, &Parms);
}

}

