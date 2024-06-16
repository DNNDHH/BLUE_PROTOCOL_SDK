#pragma once

 

// Package: DebugFloat

#include "Basic.hpp"

#include "DebugFloat_classes.hpp"
#include "DebugFloat_parameters.hpp"


namespace SDK
{

// Function DebugFloat.DebugFloat_C.ExecuteUbergraph_DebugFloat
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDebugFloat_C::ExecuteUbergraph_DebugFloat(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugFloat_C", "ExecuteUbergraph_DebugFloat");

	Params::DebugFloat_C_ExecuteUbergraph_DebugFloat Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugFloat.DebugFloat_C.OnLostFocus
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UDebugFloat_C::OnLostFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugFloat_C", "OnLostFocus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugFloat.DebugFloat_C.OnGetFocus
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UDebugFloat_C::OnGetFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugFloat_C", "OnGetFocus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugFloat.DebugFloat_C.OnPressOk
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UDebugFloat_C::OnPressOk()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugFloat_C", "OnPressOk");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugFloat.DebugFloat_C.BndEvt__Button_Float_K2Node_ComponentBoundEvent_378_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UDebugFloat_C::BndEvt__Button_Float_K2Node_ComponentBoundEvent_378_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugFloat_C", "BndEvt__Button_Float_K2Node_ComponentBoundEvent_378_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugFloat.DebugFloat_C.BndEvt__EditableTextBox_Float_K2Node_ComponentBoundEvent_363_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ETextCommit                             CommitMethod                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDebugFloat_C::BndEvt__EditableTextBox_Float_K2Node_ComponentBoundEvent_363_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugFloat_C", "BndEvt__EditableTextBox_Float_K2Node_ComponentBoundEvent_363_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::DebugFloat_C_BndEvt__EditableTextBox_Float_K2Node_ComponentBoundEvent_363_OnEditableTextBoxCommittedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugFloat.DebugFloat_C.Set Menu Focus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bFocus                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDebugFloat_C::Set_Menu_Focus(bool bFocus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugFloat_C", "Set Menu Focus");

	Params::DebugFloat_C_Set_Menu_Focus Parms{};

	Parms.bFocus = bFocus;

	UObject::ProcessEvent(Func, &Parms);
}

}

