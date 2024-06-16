#pragma once

 

// Package: DebugCommand

#include "Basic.hpp"

#include "DebugCommand_classes.hpp"
#include "DebugCommand_parameters.hpp"


namespace SDK
{

// Function DebugCommand.DebugCommand_C.OnExecutedConsoleCommand__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UDebugCommand_C::OnExecutedConsoleCommand__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugCommand_C", "OnExecutedConsoleCommand__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugCommand.DebugCommand_C.ExecuteUbergraph_DebugCommand
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDebugCommand_C::ExecuteUbergraph_DebugCommand(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugCommand_C", "ExecuteUbergraph_DebugCommand");

	Params::DebugCommand_C_ExecuteUbergraph_DebugCommand Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugCommand.DebugCommand_C.BndEvt__EditableTextBox_Command_K2Node_ComponentBoundEvent_20_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ETextCommit                             CommitMethod                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDebugCommand_C::BndEvt__EditableTextBox_Command_K2Node_ComponentBoundEvent_20_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugCommand_C", "BndEvt__EditableTextBox_Command_K2Node_ComponentBoundEvent_20_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::DebugCommand_C_BndEvt__EditableTextBox_Command_K2Node_ComponentBoundEvent_20_OnEditableTextBoxCommittedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugCommand.DebugCommand_C.OnLostFocus
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UDebugCommand_C::OnLostFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugCommand_C", "OnLostFocus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugCommand.DebugCommand_C.OnGetFocus
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UDebugCommand_C::OnGetFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugCommand_C", "OnGetFocus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugCommand.DebugCommand_C.OnPressOk
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UDebugCommand_C::OnPressOk()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugCommand_C", "OnPressOk");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugCommand.DebugCommand_C.ExecCommand
// (BlueprintCallable, BlueprintEvent)

void UDebugCommand_C::ExecCommand()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugCommand_C", "ExecCommand");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugCommand.DebugCommand_C.BndEvt__Button_Command_K2Node_ComponentBoundEvent_185_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UDebugCommand_C::BndEvt__Button_Command_K2Node_ComponentBoundEvent_185_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugCommand_C", "BndEvt__Button_Command_K2Node_ComponentBoundEvent_185_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugCommand.DebugCommand_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDebugCommand_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugCommand_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugCommand.DebugCommand_C.Set Menu Focus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bFocus                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDebugCommand_C::Set_Menu_Focus(bool bFocus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugCommand_C", "Set Menu Focus");

	Params::DebugCommand_C_Set_Menu_Focus Parms{};

	Parms.bFocus = bFocus;

	UObject::ProcessEvent(Func, &Parms);
}

}

