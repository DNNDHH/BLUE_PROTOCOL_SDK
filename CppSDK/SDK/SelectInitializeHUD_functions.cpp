#pragma once

 

// Package: SelectInitializeHUD

#include "Basic.hpp"

#include "SelectInitializeHUD_classes.hpp"
#include "SelectInitializeHUD_parameters.hpp"


namespace SDK
{

// Function SelectInitializeHUD.SelectInitializeHUD_C.OnSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ELayoutPresetTypes                      Preset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USelectInitializeHUD_C::OnSelected__DelegateSignature(ELayoutPresetTypes Preset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectInitializeHUD_C", "OnSelected__DelegateSignature");

	Params::SelectInitializeHUD_C_OnSelected__DelegateSignature Parms{};

	Parms.Preset = Preset;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SelectInitializeHUD.SelectInitializeHUD_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void USelectInitializeHUD_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectInitializeHUD_C", "OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectInitializeHUD.SelectInitializeHUD_C.ExecuteUbergraph_SelectInitializeHUD
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USelectInitializeHUD_C::ExecuteUbergraph_SelectInitializeHUD(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectInitializeHUD_C", "ExecuteUbergraph_SelectInitializeHUD");

	Params::SelectInitializeHUD_C_ExecuteUbergraph_SelectInitializeHUD Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SelectInitializeHUD.SelectInitializeHUD_C.OnSelectedHUD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USelectInitializeHUD_C::OnSelectedHUD(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectInitializeHUD_C", "OnSelectedHUD");

	Params::SelectInitializeHUD_C_OnSelectedHUD Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SelectInitializeHUD.SelectInitializeHUD_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void USelectInitializeHUD_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectInitializeHUD_C", "WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectInitializeHUD.SelectInitializeHUD_C.BndEvt__CmnBtn16_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void USelectInitializeHUD_C::BndEvt__CmnBtn16_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectInitializeHUD_C", "BndEvt__CmnBtn16_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectInitializeHUD.SelectInitializeHUD_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USelectInitializeHUD_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectInitializeHUD_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectInitializeHUD.SelectInitializeHUD_C.BndEvt__Btn_MMO_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void USelectInitializeHUD_C::BndEvt__Btn_MMO_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectInitializeHUD_C", "BndEvt__Btn_MMO_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectInitializeHUD.SelectInitializeHUD_C.BndEvt__Btn_Act_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void USelectInitializeHUD_C::BndEvt__Btn_Act_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectInitializeHUD_C", "BndEvt__Btn_Act_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectInitializeHUD.SelectInitializeHUD_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USelectInitializeHUD_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectInitializeHUD_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

