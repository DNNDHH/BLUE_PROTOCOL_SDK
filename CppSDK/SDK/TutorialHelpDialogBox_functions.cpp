#pragma once

 

// Package: TutorialHelpDialogBox

#include "Basic.hpp"

#include "TutorialHelpDialogBox_classes.hpp"
#include "TutorialHelpDialogBox_parameters.hpp"


namespace SDK
{

// Function TutorialHelpDialogBox.TutorialHelpDialogBox_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTutorialHelpDialogBox_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TutorialHelpDialogBox_C", "OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TutorialHelpDialogBox.TutorialHelpDialogBox_C.ExecuteUbergraph_TutorialHelpDialogBox
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTutorialHelpDialogBox_C::ExecuteUbergraph_TutorialHelpDialogBox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TutorialHelpDialogBox_C", "ExecuteUbergraph_TutorialHelpDialogBox");

	Params::TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TutorialHelpDialogBox.TutorialHelpDialogBox_C.EventClose
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTutorialHelpDialogBox_C::EventClose(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TutorialHelpDialogBox_C", "EventClose");

	Params::TutorialHelpDialogBox_C_EventClose Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TutorialHelpDialogBox.TutorialHelpDialogBox_C.OnContinueOpen
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Param_TutorialHelpId                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_IsContinue                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTutorialHelpDialogBox_C::OnContinueOpen(class FName Param_TutorialHelpId, bool Param_IsContinue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TutorialHelpDialogBox_C", "OnContinueOpen");

	Params::TutorialHelpDialogBox_C_OnContinueOpen Parms{};

	Parms.Param_TutorialHelpId = Param_TutorialHelpId;
	Parms.Param_IsContinue = Param_IsContinue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TutorialHelpDialogBox.TutorialHelpDialogBox_C.OnPress_Ok
// (Event, Public, BlueprintEvent)

void UTutorialHelpDialogBox_C::OnPress_Ok()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TutorialHelpDialogBox_C", "OnPress_Ok");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TutorialHelpDialogBox.TutorialHelpDialogBox_C.BndEvt__BtnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTutorialHelpDialogBox_C::BndEvt__BtnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TutorialHelpDialogBox_C", "BndEvt__BtnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TutorialHelpDialogBox.TutorialHelpDialogBox_C.OnPress_Cancel
// (Event, Public, BlueprintEvent)

void UTutorialHelpDialogBox_C::OnPress_Cancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TutorialHelpDialogBox_C", "OnPress_Cancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TutorialHelpDialogBox.TutorialHelpDialogBox_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTutorialHelpDialogBox_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TutorialHelpDialogBox_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TutorialHelpDialogBox.TutorialHelpDialogBox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTutorialHelpDialogBox_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TutorialHelpDialogBox_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TutorialHelpDialogBox.TutorialHelpDialogBox_C.AnimetionFinished
// (BlueprintCallable, BlueprintEvent)

void UTutorialHelpDialogBox_C::AnimetionFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TutorialHelpDialogBox_C", "AnimetionFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TutorialHelpDialogBox.TutorialHelpDialogBox_C.OnDialogBoxClose_Event
// (BlueprintCallable, BlueprintEvent)

void UTutorialHelpDialogBox_C::OnDialogBoxClose_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TutorialHelpDialogBox_C", "OnDialogBoxClose_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TutorialHelpDialogBox.TutorialHelpDialogBox_C.SaveReadHelpId
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTutorialHelpDialogBox_C::SaveReadHelpId()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TutorialHelpDialogBox_C", "SaveReadHelpId");

	UObject::ProcessEvent(Func, nullptr);
}

}

