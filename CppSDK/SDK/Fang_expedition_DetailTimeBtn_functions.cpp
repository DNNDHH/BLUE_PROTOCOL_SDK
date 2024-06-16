#pragma once

 

// Package: Fang_expedition_DetailTimeBtn

#include "Basic.hpp"

#include "Fang_expedition_DetailTimeBtn_classes.hpp"
#include "Fang_expedition_DetailTimeBtn_parameters.hpp"


namespace SDK
{

// Function Fang_expedition_DetailTimeBtn.Fang_expedition_DetailTimeBtn_C.EventOnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UFang_expedition_DetailTimeBtn_C::EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailTimeBtn_C", "EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DetailTimeBtn.Fang_expedition_DetailTimeBtn_C.ExecuteUbergraph_Fang_expedition_DetailTimeBtn
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_DetailTimeBtn_C::ExecuteUbergraph_Fang_expedition_DetailTimeBtn(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailTimeBtn_C", "ExecuteUbergraph_Fang_expedition_DetailTimeBtn");

	Params::Fang_expedition_DetailTimeBtn_C_ExecuteUbergraph_Fang_expedition_DetailTimeBtn Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DetailTimeBtn.Fang_expedition_DetailTimeBtn_C.BndEvt__Fang_expedition_DetailTimeBtn_TimeButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UFang_expedition_DetailTimeBtn_C::BndEvt__Fang_expedition_DetailTimeBtn_TimeButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailTimeBtn_C", "BndEvt__Fang_expedition_DetailTimeBtn_TimeButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DetailTimeBtn.Fang_expedition_DetailTimeBtn_C.BndEvt__Fang_expedition_DetailTimeBtn_TimeButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UFang_expedition_DetailTimeBtn_C::BndEvt__Fang_expedition_DetailTimeBtn_TimeButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailTimeBtn_C", "BndEvt__Fang_expedition_DetailTimeBtn_TimeButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DetailTimeBtn.Fang_expedition_DetailTimeBtn_C.BndEvt__Fang_expedition_DetailTimeBtn_TimeButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UFang_expedition_DetailTimeBtn_C::BndEvt__Fang_expedition_DetailTimeBtn_TimeButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailTimeBtn_C", "BndEvt__Fang_expedition_DetailTimeBtn_TimeButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DetailTimeBtn.Fang_expedition_DetailTimeBtn_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             TimeText                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UFang_expedition_DetailTimeBtn_C::SetText(const class FText& TimeText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailTimeBtn_C", "SetText");

	Params::Fang_expedition_DetailTimeBtn_C_SetText Parms{};

	Parms.TimeText = std::move(TimeText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DetailTimeBtn.Fang_expedition_DetailTimeBtn_C.SetBtnSelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_BtnSelected                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFang_expedition_DetailTimeBtn_C::SetBtnSelected(bool Param_BtnSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailTimeBtn_C", "SetBtnSelected");

	Params::Fang_expedition_DetailTimeBtn_C_SetBtnSelected Parms{};

	Parms.Param_BtnSelected = Param_BtnSelected;

	UObject::ProcessEvent(Func, &Parms);
}

}

