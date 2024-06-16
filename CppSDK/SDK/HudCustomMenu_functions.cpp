#pragma once

 

// Package: HudCustomMenu

#include "Basic.hpp"

#include "HudCustomMenu_classes.hpp"
#include "HudCustomMenu_parameters.hpp"


namespace SDK
{

// Function HudCustomMenu.HudCustomMenu_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsCancel                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHudCustomMenu_C::OnClose__DelegateSignature(bool bIsCancel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HudCustomMenu_C", "OnClose__DelegateSignature");

	Params::HudCustomMenu_C_OnClose__DelegateSignature Parms{};

	Parms.bIsCancel = bIsCancel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HudCustomMenu.HudCustomMenu_C.OnApplied__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UHudCustomMenu_C::OnApplied__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HudCustomMenu_C", "OnApplied__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HudCustomMenu.HudCustomMenu_C.ExecuteUbergraph_HudCustomMenu
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHudCustomMenu_C::ExecuteUbergraph_HudCustomMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HudCustomMenu_C", "ExecuteUbergraph_HudCustomMenu");

	Params::HudCustomMenu_C_ExecuteUbergraph_HudCustomMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HudCustomMenu.HudCustomMenu_C.BndEvt__HudCustomMenu_BtnContinue_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UHudCustomMenu_C::BndEvt__HudCustomMenu_BtnContinue_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HudCustomMenu_C", "BndEvt__HudCustomMenu_BtnContinue_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HudCustomMenu.HudCustomMenu_C.BndEvt__HudCustomMenu_BtnAppli_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UHudCustomMenu_C::BndEvt__HudCustomMenu_BtnAppli_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HudCustomMenu_C", "BndEvt__HudCustomMenu_BtnAppli_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HudCustomMenu.HudCustomMenu_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UHudCustomMenu_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HudCustomMenu_C", "WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HudCustomMenu.HudCustomMenu_C.BndEvt__BtnCancel_K2Node_ComponentBoundEvent_10_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UHudCustomMenu_C::BndEvt__BtnCancel_K2Node_ComponentBoundEvent_10_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HudCustomMenu_C", "BndEvt__BtnCancel_K2Node_ComponentBoundEvent_10_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HudCustomMenu.HudCustomMenu_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHudCustomMenu_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HudCustomMenu_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HudCustomMenu.HudCustomMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHudCustomMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HudCustomMenu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HudCustomMenu.HudCustomMenu_C.SetApplyButtonEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enabled                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHudCustomMenu_C::SetApplyButtonEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HudCustomMenu_C", "SetApplyButtonEnabled");

	Params::HudCustomMenu_C_SetApplyButtonEnabled Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);
}

}

