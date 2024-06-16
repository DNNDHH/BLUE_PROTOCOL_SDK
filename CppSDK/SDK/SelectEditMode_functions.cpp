#pragma once

 

// Package: SelectEditMode

#include "Basic.hpp"

#include "SelectEditMode_classes.hpp"
#include "SelectEditMode_parameters.hpp"


namespace SDK
{

// Function SelectEditMode.SelectEditMode_C.OnPresetLoad__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void USelectEditMode_C::OnPresetLoad__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectEditMode_C", "OnPresetLoad__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectEditMode.SelectEditMode_C.EditNow__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void USelectEditMode_C::EditNow__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectEditMode_C", "EditNow__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectEditMode.SelectEditMode_C.OnExitEditMode__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void USelectEditMode_C::OnExitEditMode__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectEditMode_C", "OnExitEditMode__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectEditMode.SelectEditMode_C.ExecuteUbergraph_SelectEditMode
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USelectEditMode_C::ExecuteUbergraph_SelectEditMode(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectEditMode_C", "ExecuteUbergraph_SelectEditMode");

	Params::SelectEditMode_C_ExecuteUbergraph_SelectEditMode Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SelectEditMode.SelectEditMode_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void USelectEditMode_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectEditMode_C", "WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectEditMode.SelectEditMode_C.BndEvt__BtnEnd_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void USelectEditMode_C::BndEvt__BtnEnd_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectEditMode_C", "BndEvt__BtnEnd_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectEditMode.SelectEditMode_C.BndEvt__BtnPreset_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void USelectEditMode_C::BndEvt__BtnPreset_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectEditMode_C", "BndEvt__BtnPreset_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectEditMode.SelectEditMode_C.BndEvt__BtnEdit_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void USelectEditMode_C::BndEvt__BtnEdit_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectEditMode_C", "BndEvt__BtnEdit_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectEditMode.SelectEditMode_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USelectEditMode_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectEditMode_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

