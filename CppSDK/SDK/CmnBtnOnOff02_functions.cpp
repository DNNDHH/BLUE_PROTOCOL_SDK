#pragma once

 

// Package: CmnBtnOnOff02

#include "Basic.hpp"

#include "CmnBtnOnOff02_classes.hpp"
#include "CmnBtnOnOff02_parameters.hpp"


namespace SDK
{

// Function CmnBtnOnOff02.CmnBtnOnOff02_C.EventOnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCmnBtnOnOff02_C::EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBtnOnOff02_C", "EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnBtnOnOff02.CmnBtnOnOff02_C.ExecuteUbergraph_CmnBtnOnOff02
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCmnBtnOnOff02_C::ExecuteUbergraph_CmnBtnOnOff02(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBtnOnOff02_C", "ExecuteUbergraph_CmnBtnOnOff02");

	Params::CmnBtnOnOff02_C_ExecuteUbergraph_CmnBtnOnOff02 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnBtnOnOff02.CmnBtnOnOff02_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_140_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCmnBtnOnOff02_C::BndEvt__Btn1_K2Node_ComponentBoundEvent_140_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBtnOnOff02_C", "BndEvt__Btn1_K2Node_ComponentBoundEvent_140_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnBtnOnOff02.CmnBtnOnOff02_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_130_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCmnBtnOnOff02_C::BndEvt__Btn1_K2Node_ComponentBoundEvent_130_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBtnOnOff02_C", "BndEvt__Btn1_K2Node_ComponentBoundEvent_130_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnBtnOnOff02.CmnBtnOnOff02_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_113_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCmnBtnOnOff02_C::BndEvt__Btn1_K2Node_ComponentBoundEvent_113_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBtnOnOff02_C", "BndEvt__Btn1_K2Node_ComponentBoundEvent_113_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnBtnOnOff02.CmnBtnOnOff02_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCmnBtnOnOff02_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBtnOnOff02_C", "PreConstruct");

	Params::CmnBtnOnOff02_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnBtnOnOff02.CmnBtnOnOff02_C.SetBtnSelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSelected                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCmnBtnOnOff02_C::SetBtnSelected(bool bSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBtnOnOff02_C", "SetBtnSelected");

	Params::CmnBtnOnOff02_C_SetBtnSelected Parms{};

	Parms.bSelected = bSelected;

	UObject::ProcessEvent(Func, &Parms);
}

}

