#pragma once

 

// Package: CmnClose03

#include "Basic.hpp"

#include "CmnClose03_classes.hpp"
#include "CmnClose03_parameters.hpp"


namespace SDK
{

// Function CmnClose03.CmnClose03_C.OnClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCmnClose03_C::OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnClose03_C", "OnClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnClose03.CmnClose03_C.ExecuteUbergraph_CmnClose03
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCmnClose03_C::ExecuteUbergraph_CmnClose03(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnClose03_C", "ExecuteUbergraph_CmnClose03");

	Params::CmnClose03_C_ExecuteUbergraph_CmnClose03 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnClose03.CmnClose03_C.BndEvt__CmnClose01_BtnClose_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCmnClose03_C::BndEvt__CmnClose01_BtnClose_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnClose03_C", "BndEvt__CmnClose01_BtnClose_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnClose03.CmnClose03_C.SetEnableBtn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInIsEnabled                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCmnClose03_C::SetEnableBtn(bool bInIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnClose03_C", "SetEnableBtn");

	Params::CmnClose03_C_SetEnableBtn Parms{};

	Parms.bInIsEnabled = bInIsEnabled;

	UObject::ProcessEvent(Func, &Parms);
}

}

