#pragma once

 

// Package: HudCustomApplySelect

#include "Basic.hpp"

#include "HudCustomApplySelect_classes.hpp"
#include "HudCustomApplySelect_parameters.hpp"


namespace SDK
{

// Function HudCustomApplySelect.HudCustomApplySelect_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsCancel                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHudCustomApplySelect_C::OnClose__DelegateSignature(bool bIsCancel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HudCustomApplySelect_C", "OnClose__DelegateSignature");

	Params::HudCustomApplySelect_C_OnClose__DelegateSignature Parms{};

	Parms.bIsCancel = bIsCancel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HudCustomApplySelect.HudCustomApplySelect_C.ExecuteUbergraph_HudCustomApplySelect
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHudCustomApplySelect_C::ExecuteUbergraph_HudCustomApplySelect(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HudCustomApplySelect_C", "ExecuteUbergraph_HudCustomApplySelect");

	Params::HudCustomApplySelect_C_ExecuteUbergraph_HudCustomApplySelect Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HudCustomApplySelect.HudCustomApplySelect_C.BndEvt__HudCustomMenu_BtnContinue_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UHudCustomApplySelect_C::BndEvt__HudCustomMenu_BtnContinue_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HudCustomApplySelect_C", "BndEvt__HudCustomMenu_BtnContinue_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HudCustomApplySelect.HudCustomApplySelect_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UHudCustomApplySelect_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HudCustomApplySelect_C", "WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HudCustomApplySelect.HudCustomApplySelect_C.BndEvt__BtnCancel_K2Node_ComponentBoundEvent_10_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UHudCustomApplySelect_C::BndEvt__BtnCancel_K2Node_ComponentBoundEvent_10_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HudCustomApplySelect_C", "BndEvt__BtnCancel_K2Node_ComponentBoundEvent_10_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HudCustomApplySelect.HudCustomApplySelect_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHudCustomApplySelect_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HudCustomApplySelect_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HudCustomApplySelect.HudCustomApplySelect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHudCustomApplySelect_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HudCustomApplySelect_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

