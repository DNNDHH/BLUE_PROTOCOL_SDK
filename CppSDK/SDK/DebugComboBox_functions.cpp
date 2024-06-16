#pragma once

 

// Package: DebugComboBox

#include "Basic.hpp"

#include "DebugComboBox_classes.hpp"
#include "DebugComboBox_parameters.hpp"


namespace SDK
{

// Function DebugComboBox.DebugComboBox_C.ExecuteUbergraph_DebugComboBox
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDebugComboBox_C::ExecuteUbergraph_DebugComboBox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugComboBox_C", "ExecuteUbergraph_DebugComboBox");

	Params::DebugComboBox_C_ExecuteUbergraph_DebugComboBox Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugComboBox.DebugComboBox_C.BndEvt__ComboBoxString_K2Node_ComponentBoundEvent_403_OnOpeningEvent__DelegateSignature
// (BlueprintEvent)

void UDebugComboBox_C::BndEvt__ComboBoxString_K2Node_ComponentBoundEvent_403_OnOpeningEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugComboBox_C", "BndEvt__ComboBoxString_K2Node_ComponentBoundEvent_403_OnOpeningEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugComboBox.DebugComboBox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDebugComboBox_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugComboBox_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugComboBox.DebugComboBox_C.OnLostFocus
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UDebugComboBox_C::OnLostFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugComboBox_C", "OnLostFocus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugComboBox.DebugComboBox_C.OnGetFocus
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UDebugComboBox_C::OnGetFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugComboBox_C", "OnGetFocus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugComboBox.DebugComboBox_C.OnPressOk
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UDebugComboBox_C::OnPressOk()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugComboBox_C", "OnPressOk");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugComboBox.DebugComboBox_C.BndEvt__ComboBoxString_K2Node_ComponentBoundEvent_443_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESelectInfo                             SelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDebugComboBox_C::BndEvt__ComboBoxString_K2Node_ComponentBoundEvent_443_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugComboBox_C", "BndEvt__ComboBoxString_K2Node_ComponentBoundEvent_443_OnSelectionChangedEvent__DelegateSignature");

	Params::DebugComboBox_C_BndEvt__ComboBoxString_K2Node_ComponentBoundEvent_443_OnSelectionChangedEvent__DelegateSignature Parms{};

	Parms.SelectedItem = std::move(SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugComboBox.DebugComboBox_C.BndEvt__Button_ComboBox_K2Node_ComponentBoundEvent_433_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UDebugComboBox_C::BndEvt__Button_ComboBox_K2Node_ComponentBoundEvent_433_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugComboBox_C", "BndEvt__Button_ComboBox_K2Node_ComponentBoundEvent_433_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugComboBox.DebugComboBox_C.Set Menu Focus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bFocus                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDebugComboBox_C::Set_Menu_Focus(bool bFocus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugComboBox_C", "Set Menu Focus");

	Params::DebugComboBox_C_Set_Menu_Focus Parms{};

	Parms.bFocus = bFocus;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugComboBox.DebugComboBox_C.SetSpacerWidthFromStringLength
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Length                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDebugComboBox_C::SetSpacerWidthFromStringLength(int32 Length)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugComboBox_C", "SetSpacerWidthFromStringLength");

	Params::DebugComboBox_C_SetSpacerWidthFromStringLength Parms{};

	Parms.Length = Length;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugComboBox.DebugComboBox_C.SetComboBoxStringFocus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bFocus                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDebugComboBox_C::SetComboBoxStringFocus(bool bFocus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugComboBox_C", "SetComboBoxStringFocus");

	Params::DebugComboBox_C_SetComboBoxStringFocus Parms{};

	Parms.bFocus = bFocus;

	UObject::ProcessEvent(Func, &Parms);
}

}

