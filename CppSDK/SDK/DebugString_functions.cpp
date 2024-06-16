#pragma once

 

// Package: DebugString

#include "Basic.hpp"

#include "DebugString_classes.hpp"
#include "DebugString_parameters.hpp"


namespace SDK
{

// Function DebugString.DebugString_C.ExecuteUbergraph_DebugString
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDebugString_C::ExecuteUbergraph_DebugString(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugString_C", "ExecuteUbergraph_DebugString");

	Params::DebugString_C_ExecuteUbergraph_DebugString Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugString.DebugString_C.OnLostFocus
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UDebugString_C::OnLostFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugString_C", "OnLostFocus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugString.DebugString_C.OnGetFocus
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UDebugString_C::OnGetFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugString_C", "OnGetFocus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugString.DebugString_C.OnPressOk
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UDebugString_C::OnPressOk()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugString_C", "OnPressOk");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugString.DebugString_C.BndEvt__EditableTextBox_String_K2Node_ComponentBoundEvent_423_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ETextCommit                             CommitMethod                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDebugString_C::BndEvt__EditableTextBox_String_K2Node_ComponentBoundEvent_423_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugString_C", "BndEvt__EditableTextBox_String_K2Node_ComponentBoundEvent_423_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::DebugString_C_BndEvt__EditableTextBox_String_K2Node_ComponentBoundEvent_423_OnEditableTextBoxCommittedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugString.DebugString_C.BndEvt__Button_String_K2Node_ComponentBoundEvent_413_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UDebugString_C::BndEvt__Button_String_K2Node_ComponentBoundEvent_413_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugString_C", "BndEvt__Button_String_K2Node_ComponentBoundEvent_413_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugString.DebugString_C.Set Menu Focus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bFocus                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDebugString_C::Set_Menu_Focus(bool bFocus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugString_C", "Set Menu Focus");

	Params::DebugString_C_Set_Menu_Focus Parms{};

	Parms.bFocus = bFocus;

	UObject::ProcessEvent(Func, &Parms);
}

}

