#pragma once

 

// Package: LayoutMenu

#include "Basic.hpp"

#include "LayoutMenu_classes.hpp"
#include "LayoutMenu_parameters.hpp"


namespace SDK
{

// Function LayoutMenu.LayoutMenu_C.OnExitEditMode__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ULayoutMenu_C::OnExitEditMode__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutMenu_C", "OnExitEditMode__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutMenu.LayoutMenu_C.OnInitLayout__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ULayoutMenu_C::OnInitLayout__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutMenu_C", "OnInitLayout__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutMenu.LayoutMenu_C.OnApplyLayout__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ULayoutMenu_C::OnApplyLayout__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutMenu_C", "OnApplyLayout__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutMenu.LayoutMenu_C.OnClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ULayoutMenu_C::OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutMenu_C", "OnClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutMenu.LayoutMenu_C.OnPresetLoad__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ULayoutMenu_C::OnPresetLoad__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutMenu_C", "OnPresetLoad__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutMenu.LayoutMenu_C.OnCustomSlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ULayoutMenu_C::OnCustomSlot__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutMenu_C", "OnCustomSlot__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutMenu.LayoutMenu_C.ExecuteUbergraph_LayoutMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULayoutMenu_C::ExecuteUbergraph_LayoutMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutMenu_C", "ExecuteUbergraph_LayoutMenu");

	Params::LayoutMenu_C_ExecuteUbergraph_LayoutMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LayoutMenu.LayoutMenu_C.ApplyCheck
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsCancel                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULayoutMenu_C::ApplyCheck(bool bIsCancel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutMenu_C", "ApplyCheck");

	Params::LayoutMenu_C_ApplyCheck Parms{};

	Parms.bIsCancel = bIsCancel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LayoutMenu.LayoutMenu_C.EventEnd
// (BlueprintCallable, BlueprintEvent)

void ULayoutMenu_C::EventEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutMenu_C", "EventEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutMenu.LayoutMenu_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_2
// (BlueprintEvent)

void ULayoutMenu_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutMenu_C", "WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutMenu.LayoutMenu_C.BndEvt__BtnCancel_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void ULayoutMenu_C::BndEvt__BtnCancel_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutMenu_C", "BndEvt__BtnCancel_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutMenu.LayoutMenu_C.BndEvt__BtnExit_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void ULayoutMenu_C::BndEvt__BtnExit_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutMenu_C", "BndEvt__BtnExit_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutMenu.LayoutMenu_C.BndEvt__BtnApply_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void ULayoutMenu_C::BndEvt__BtnApply_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutMenu_C", "BndEvt__BtnApply_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutMenu.LayoutMenu_C.BndEvt__CmnBtn05_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void ULayoutMenu_C::BndEvt__CmnBtn05_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutMenu_C", "BndEvt__CmnBtn05_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutMenu.LayoutMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULayoutMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutMenu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutMenu.LayoutMenu_C.SelectedInitialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULayoutMenu_C::SelectedInitialize(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutMenu_C", "SelectedInitialize");

	Params::LayoutMenu_C_SelectedInitialize Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}

}

