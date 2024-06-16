#pragma once

 

// Package: UMG_MultipleSelectDialog_Button

#include "Basic.hpp"

#include "UMG_MultipleSelectDialog_Button_classes.hpp"
#include "UMG_MultipleSelectDialog_Button_parameters.hpp"


namespace SDK
{

// Function UMG_MultipleSelectDialog_Button.UMG_MultipleSelectDialog_Button_C.OnSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SelectIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MultipleSelectDialog_Button_C::OnSelected__DelegateSignature(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MultipleSelectDialog_Button_C", "OnSelected__DelegateSignature");

	Params::UMG_MultipleSelectDialog_Button_C_OnSelected__DelegateSignature Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MultipleSelectDialog_Button.UMG_MultipleSelectDialog_Button_C.ExecuteUbergraph_UMG_MultipleSelectDialog_Button
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MultipleSelectDialog_Button_C::ExecuteUbergraph_UMG_MultipleSelectDialog_Button(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MultipleSelectDialog_Button_C", "ExecuteUbergraph_UMG_MultipleSelectDialog_Button");

	Params::UMG_MultipleSelectDialog_Button_C_ExecuteUbergraph_UMG_MultipleSelectDialog_Button Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MultipleSelectDialog_Button.UMG_MultipleSelectDialog_Button_C.BndEvt__Button_K2Node_ComponentBoundEvent_48_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_MultipleSelectDialog_Button_C::BndEvt__Button_K2Node_ComponentBoundEvent_48_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MultipleSelectDialog_Button_C", "BndEvt__Button_K2Node_ComponentBoundEvent_48_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MultipleSelectDialog_Button.UMG_MultipleSelectDialog_Button_C.BndEvt__Button_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_MultipleSelectDialog_Button_C::BndEvt__Button_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MultipleSelectDialog_Button_C", "BndEvt__Button_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MultipleSelectDialog_Button.UMG_MultipleSelectDialog_Button_C.BndEvt__Button_K2Node_ComponentBoundEvent_67_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_MultipleSelectDialog_Button_C::BndEvt__Button_K2Node_ComponentBoundEvent_67_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MultipleSelectDialog_Button_C", "BndEvt__Button_K2Node_ComponentBoundEvent_67_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}

