#pragma once

 

// Package: UMG_PartyMenu_Button

#include "Basic.hpp"

#include "UMG_PartyMenu_Button_classes.hpp"
#include "UMG_PartyMenu_Button_parameters.hpp"


namespace SDK
{

// Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.OnOpenPartyMenu__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUMG_PartyMenu_Button_C::OnOpenPartyMenu__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PartyMenu_Button_C", "OnOpenPartyMenu__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.ExecuteUbergraph_UMG_PartyMenu_Button
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PartyMenu_Button_C::ExecuteUbergraph_UMG_PartyMenu_Button(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PartyMenu_Button_C", "ExecuteUbergraph_UMG_PartyMenu_Button");

	Params::UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_PartyMenu_Button_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PartyMenu_Button_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.PartyUnbindDelegates
// (BlueprintCallable, BlueprintEvent)

void UUMG_PartyMenu_Button_C::PartyUnbindDelegates()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PartyMenu_Button_C", "PartyUnbindDelegates");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_PartyMenu_Button_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PartyMenu_Button_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PartyMenu_Button_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PartyMenu_Button_C", "Tick");

	Params::UMG_PartyMenu_Button_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_PartyMenu_Button_C::BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PartyMenu_Button_C", "BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.BndEvt__ContentButton_K2Node_ComponentBoundEvent_55_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_PartyMenu_Button_C::BndEvt__ContentButton_K2Node_ComponentBoundEvent_55_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PartyMenu_Button_C", "BndEvt__ContentButton_K2Node_ComponentBoundEvent_55_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.BndEvt__ContentButton_K2Node_ComponentBoundEvent_36_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_PartyMenu_Button_C::BndEvt__ContentButton_K2Node_ComponentBoundEvent_36_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PartyMenu_Button_C", "BndEvt__ContentButton_K2Node_ComponentBoundEvent_36_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SelectIndex                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PartyMenu_Button_C::CustomEvent_1(const int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PartyMenu_Button_C", "CustomEvent_1");

	Params::UMG_PartyMenu_Button_C_CustomEvent_1 Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.ResetButtonState
// (BlueprintCallable, BlueprintEvent)

void UUMG_PartyMenu_Button_C::ResetButtonState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PartyMenu_Button_C", "ResetButtonState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EYesNoDialogResult                      Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PartyMenu_Button_C::CustomEvent_0(const EYesNoDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PartyMenu_Button_C", "CustomEvent_0");

	Params::UMG_PartyMenu_Button_C_CustomEvent_0 Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.SetButtonType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPartyButtonType                        Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PartyMenu_Button_C::SetButtonType(EPartyButtonType Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PartyMenu_Button_C", "SetButtonType");

	Params::UMG_PartyMenu_Button_C_SetButtonType Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.PlayBtnAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInActive                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_PartyMenu_Button_C::PlayBtnAnim(bool bInActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PartyMenu_Button_C", "PlayBtnAnim");

	Params::UMG_PartyMenu_Button_C_PlayBtnAnim Parms{};

	Parms.bInActive = bInActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.SetBtn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bActive                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_PartyMenu_Button_C::SetBtn(bool Param_bActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PartyMenu_Button_C", "SetBtn");

	Params::UMG_PartyMenu_Button_C_SetBtn Parms{};

	Parms.Param_bActive = Param_bActive;

	UObject::ProcessEvent(Func, &Parms);
}

}

