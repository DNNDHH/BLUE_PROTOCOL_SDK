#pragma once

 

// Package: HudPresetSelect

#include "Basic.hpp"

#include "HudPresetSelect_classes.hpp"
#include "HudPresetSelect_parameters.hpp"


namespace SDK
{

// Function HudPresetSelect.HudPresetSelect_C.ApplyPreset__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ELayoutPresetTypes                      ELayoutPreset                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHudPresetSelect_C::ApplyPreset__DelegateSignature(ELayoutPresetTypes ELayoutPreset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HudPresetSelect_C", "ApplyPreset__DelegateSignature");

	Params::HudPresetSelect_C_ApplyPreset__DelegateSignature Parms{};

	Parms.ELayoutPreset = ELayoutPreset;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HudPresetSelect.HudPresetSelect_C.LoadCustomSlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBCustomHudLayoutSlot                  Param_LoadCustomSlot                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHudPresetSelect_C::LoadCustomSlot__DelegateSignature(ESBCustomHudLayoutSlot Param_LoadCustomSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HudPresetSelect_C", "LoadCustomSlot__DelegateSignature");

	Params::HudPresetSelect_C_LoadCustomSlot__DelegateSignature Parms{};

	Parms.Param_LoadCustomSlot = Param_LoadCustomSlot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HudPresetSelect.HudPresetSelect_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bIsCancel                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHudPresetSelect_C::OnClose__DelegateSignature(bool Param_bIsCancel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HudPresetSelect_C", "OnClose__DelegateSignature");

	Params::HudPresetSelect_C_OnClose__DelegateSignature Parms{};

	Parms.Param_bIsCancel = Param_bIsCancel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HudPresetSelect.HudPresetSelect_C.ExecuteUbergraph_HudPresetSelect
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHudPresetSelect_C::ExecuteUbergraph_HudPresetSelect(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HudPresetSelect_C", "ExecuteUbergraph_HudPresetSelect");

	Params::HudPresetSelect_C_ExecuteUbergraph_HudPresetSelect Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HudPresetSelect.HudPresetSelect_C.RequestClose
// (BlueprintCallable, BlueprintEvent)

void UHudPresetSelect_C::RequestClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HudPresetSelect_C", "RequestClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HudPresetSelect.HudPresetSelect_C.WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1
// (BlueprintEvent)

void UHudPresetSelect_C::WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HudPresetSelect_C", "WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HudPresetSelect.HudPresetSelect_C.PlayCloseAnimation
// (BlueprintCallable, BlueprintEvent)

void UHudPresetSelect_C::PlayCloseAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HudPresetSelect_C", "PlayCloseAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HudPresetSelect.HudPresetSelect_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UHudPresetSelect_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HudPresetSelect_C", "WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HudPresetSelect.HudPresetSelect_C.BndEvt__BtnCS3_K2Node_ComponentBoundEvent_13_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UHudPresetSelect_C::BndEvt__BtnCS3_K2Node_ComponentBoundEvent_13_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HudPresetSelect_C", "BndEvt__BtnCS3_K2Node_ComponentBoundEvent_13_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HudPresetSelect.HudPresetSelect_C.BndEvt__BtnCS2_K2Node_ComponentBoundEvent_12_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UHudPresetSelect_C::BndEvt__BtnCS2_K2Node_ComponentBoundEvent_12_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HudPresetSelect_C", "BndEvt__BtnCS2_K2Node_ComponentBoundEvent_12_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HudPresetSelect.HudPresetSelect_C.BndEvt__BtnCS1_K2Node_ComponentBoundEvent_11_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UHudPresetSelect_C::BndEvt__BtnCS1_K2Node_ComponentBoundEvent_11_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HudPresetSelect_C", "BndEvt__BtnCS1_K2Node_ComponentBoundEvent_11_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HudPresetSelect.HudPresetSelect_C.BndEvt__BtnCancel_K2Node_ComponentBoundEvent_10_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UHudPresetSelect_C::BndEvt__BtnCancel_K2Node_ComponentBoundEvent_10_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HudPresetSelect_C", "BndEvt__BtnCancel_K2Node_ComponentBoundEvent_10_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HudPresetSelect.HudPresetSelect_C.BndEvt__BtnPreset3_K2Node_ComponentBoundEvent_9_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UHudPresetSelect_C::BndEvt__BtnPreset3_K2Node_ComponentBoundEvent_9_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HudPresetSelect_C", "BndEvt__BtnPreset3_K2Node_ComponentBoundEvent_9_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HudPresetSelect.HudPresetSelect_C.BndEvt__BtnPreset2_K2Node_ComponentBoundEvent_8_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UHudPresetSelect_C::BndEvt__BtnPreset2_K2Node_ComponentBoundEvent_8_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HudPresetSelect_C", "BndEvt__BtnPreset2_K2Node_ComponentBoundEvent_8_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HudPresetSelect.HudPresetSelect_C.BndEvt__BtnPreset1_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UHudPresetSelect_C::BndEvt__BtnPreset1_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HudPresetSelect_C", "BndEvt__BtnPreset1_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HudPresetSelect.HudPresetSelect_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHudPresetSelect_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HudPresetSelect_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HudPresetSelect.HudPresetSelect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHudPresetSelect_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HudPresetSelect_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HudPresetSelect.HudPresetSelect_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHudPresetSelect_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HudPresetSelect_C", "PreConstruct");

	Params::HudPresetSelect_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HudPresetSelect.HudPresetSelect_C.LoadCustomSaveName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UHudPresetSelect_C::LoadCustomSaveName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HudPresetSelect_C", "LoadCustomSaveName");

	UObject::ProcessEvent(Func, nullptr);
}

}

