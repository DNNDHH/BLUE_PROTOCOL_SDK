#pragma once

 

// Package: DebugInt32

#include "Basic.hpp"

#include "DebugInt32_classes.hpp"
#include "DebugInt32_parameters.hpp"


namespace SDK
{

// Function DebugInt32.DebugInt32_C.ExecuteUbergraph_DebugInt32
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDebugInt32_C::ExecuteUbergraph_DebugInt32(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugInt32_C", "ExecuteUbergraph_DebugInt32");

	Params::DebugInt32_C_ExecuteUbergraph_DebugInt32 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugInt32.DebugInt32_C.OnLostFocus
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UDebugInt32_C::OnLostFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugInt32_C", "OnLostFocus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugInt32.DebugInt32_C.OnGetFocus
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UDebugInt32_C::OnGetFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugInt32_C", "OnGetFocus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugInt32.DebugInt32_C.OnPressOk
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UDebugInt32_C::OnPressOk()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugInt32_C", "OnPressOk");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugInt32.DebugInt32_C.BndEvt__EditableTextBox_Int32_K2Node_ComponentBoundEvent_395_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ETextCommit                             CommitMethod                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDebugInt32_C::BndEvt__EditableTextBox_Int32_K2Node_ComponentBoundEvent_395_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugInt32_C", "BndEvt__EditableTextBox_Int32_K2Node_ComponentBoundEvent_395_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::DebugInt32_C_BndEvt__EditableTextBox_Int32_K2Node_ComponentBoundEvent_395_OnEditableTextBoxCommittedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugInt32.DebugInt32_C.BndEvt__Button_Int32_K2Node_ComponentBoundEvent_169_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UDebugInt32_C::BndEvt__Button_Int32_K2Node_ComponentBoundEvent_169_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugInt32_C", "BndEvt__Button_Int32_K2Node_ComponentBoundEvent_169_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugInt32.DebugInt32_C.Set Menu Focus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bFocus                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDebugInt32_C::Set_Menu_Focus(bool bFocus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugInt32_C", "Set Menu Focus");

	Params::DebugInt32_C_Set_Menu_Focus Parms{};

	Parms.bFocus = bFocus;

	UObject::ProcessEvent(Func, &Parms);
}

}

