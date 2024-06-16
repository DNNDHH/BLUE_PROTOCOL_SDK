#pragma once

 

// Package: SelectMenuItem

#include "Basic.hpp"

#include "SelectMenuItem_classes.hpp"
#include "SelectMenuItem_parameters.hpp"


namespace SDK
{

// Function SelectMenuItem.SelectMenuItem_C.OnSelectItem__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USelectMenuItem_C*                SelectItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USelectMenuItem_C::OnSelectItem__DelegateSignature(class USelectMenuItem_C* SelectItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectMenuItem_C", "OnSelectItem__DelegateSignature");

	Params::SelectMenuItem_C_OnSelectItem__DelegateSignature Parms{};

	Parms.SelectItem = SelectItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SelectMenuItem.SelectMenuItem_C.ExecuteUbergraph_SelectMenuItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USelectMenuItem_C::ExecuteUbergraph_SelectMenuItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectMenuItem_C", "ExecuteUbergraph_SelectMenuItem");

	Params::SelectMenuItem_C_ExecuteUbergraph_SelectMenuItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SelectMenuItem.SelectMenuItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void USelectMenuItem_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectMenuItem_C", "BndEvt__Button_0_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectMenuItem.SelectMenuItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_470_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void USelectMenuItem_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_470_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectMenuItem_C", "BndEvt__Button_0_K2Node_ComponentBoundEvent_470_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectMenuItem.SelectMenuItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_349_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void USelectMenuItem_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_349_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectMenuItem_C", "BndEvt__Button_0_K2Node_ComponentBoundEvent_349_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectMenuItem.SelectMenuItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USelectMenuItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectMenuItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectMenuItem.SelectMenuItem_C.Set Menu Focus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bFocus                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USelectMenuItem_C::Set_Menu_Focus(bool bFocus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectMenuItem_C", "Set Menu Focus");

	Params::SelectMenuItem_C_Set_Menu_Focus Parms{};

	Parms.bFocus = bFocus;

	UObject::ProcessEvent(Func, &Parms);
}

}

