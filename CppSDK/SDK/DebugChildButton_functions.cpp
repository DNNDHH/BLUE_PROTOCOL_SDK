#pragma once

 

// Package: DebugChildButton

#include "Basic.hpp"

#include "DebugChildButton_classes.hpp"
#include "DebugChildButton_parameters.hpp"


namespace SDK
{

// Function DebugChildButton.DebugChildButton_C.EventDispatcher_OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDebugChildButton_C*              DebugButton                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDebugChildButton_C::EventDispatcher_OnClicked__DelegateSignature(class UDebugChildButton_C* DebugButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugChildButton_C", "EventDispatcher_OnClicked__DelegateSignature");

	Params::DebugChildButton_C_EventDispatcher_OnClicked__DelegateSignature Parms{};

	Parms.DebugButton = DebugButton;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugChildButton.DebugChildButton_C.ExecuteUbergraph_DebugChildButton
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDebugChildButton_C::ExecuteUbergraph_DebugChildButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugChildButton_C", "ExecuteUbergraph_DebugChildButton");

	Params::DebugChildButton_C_ExecuteUbergraph_DebugChildButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugChildButton.DebugChildButton_C.OnPressOk
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UDebugChildButton_C::OnPressOk()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugChildButton_C", "OnPressOk");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugChildButton.DebugChildButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_454_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UDebugChildButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_454_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugChildButton_C", "BndEvt__Button_K2Node_ComponentBoundEvent_454_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugChildButton.DebugChildButton_C.ExecFunc
// (BlueprintCallable, BlueprintEvent)

void UDebugChildButton_C::ExecFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugChildButton_C", "ExecFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugChildButton.DebugChildButton_C.OnLostFocus
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UDebugChildButton_C::OnLostFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugChildButton_C", "OnLostFocus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugChildButton.DebugChildButton_C.OnGetFocus
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UDebugChildButton_C::OnGetFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugChildButton_C", "OnGetFocus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugChildButton.DebugChildButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDebugChildButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugChildButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugChildButton.DebugChildButton_C.Set Menu Focus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bFocus                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDebugChildButton_C::Set_Menu_Focus(bool bFocus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugChildButton_C", "Set Menu Focus");

	Params::DebugChildButton_C_Set_Menu_Focus Parms{};

	Parms.bFocus = bFocus;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugChildButton.DebugChildButton_C.GetText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (Parm, OutParm)

void UDebugChildButton_C::GetText(class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugChildButton_C", "GetText");

	Params::DebugChildButton_C_GetText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = std::move(Parms.Text);
}


// Function DebugChildButton.DebugChildButton_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UDebugChildButton_C::SetText(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugChildButton_C", "SetText");

	Params::DebugChildButton_C_SetText Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugChildButton.DebugChildButton_C.CalcChildMenuPosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector2D                        Position                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDebugChildButton_C::CalcChildMenuPosition(struct FVector2D* Position) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugChildButton_C", "CalcChildMenuPosition");

	Params::DebugChildButton_C_CalcChildMenuPosition Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Position != nullptr)
		*Position = std::move(Parms.Position);
}

}

