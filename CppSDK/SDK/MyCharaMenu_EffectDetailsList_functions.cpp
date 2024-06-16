#pragma once

 

// Package: MyCharaMenu_EffectDetailsList

#include "Basic.hpp"

#include "MyCharaMenu_EffectDetailsList_classes.hpp"
#include "MyCharaMenu_EffectDetailsList_parameters.hpp"


namespace SDK
{

// Function MyCharaMenu_EffectDetailsList.MyCharaMenu_EffectDetailsList_C.ExecuteUbergraph_MyCharaMenu_EffectDetailsList
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_EffectDetailsList_C::ExecuteUbergraph_MyCharaMenu_EffectDetailsList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EffectDetailsList_C", "ExecuteUbergraph_MyCharaMenu_EffectDetailsList");

	Params::MyCharaMenu_EffectDetailsList_C_ExecuteUbergraph_MyCharaMenu_EffectDetailsList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_EffectDetailsList.MyCharaMenu_EffectDetailsList_C.BndEvt__MyCharaMenu_EffectDetailsList_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature
// (BlueprintEvent)

void UMyCharaMenu_EffectDetailsList_C::BndEvt__MyCharaMenu_EffectDetailsList_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EffectDetailsList_C", "BndEvt__MyCharaMenu_EffectDetailsList_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_EffectDetailsList.MyCharaMenu_EffectDetailsList_C.OnPress_Cancel
// (Event, Public, BlueprintEvent)

void UMyCharaMenu_EffectDetailsList_C::OnPress_Cancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EffectDetailsList_C", "OnPress_Cancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_EffectDetailsList.MyCharaMenu_EffectDetailsList_C.BndEvt__BtnFullScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMyCharaMenu_EffectDetailsList_C::BndEvt__BtnFullScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EffectDetailsList_C", "BndEvt__BtnFullScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_EffectDetailsList.MyCharaMenu_EffectDetailsList_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_EffectDetailsList_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EffectDetailsList_C", "OnAnimationFinished");

	Params::MyCharaMenu_EffectDetailsList_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_EffectDetailsList.MyCharaMenu_EffectDetailsList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMyCharaMenu_EffectDetailsList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EffectDetailsList_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_EffectDetailsList.MyCharaMenu_EffectDetailsList_C.ShowWindow
// (Public, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_EffectDetailsList_C::ShowWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EffectDetailsList_C", "ShowWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_EffectDetailsList.MyCharaMenu_EffectDetailsList_C.HideWindow
// (Public, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_EffectDetailsList_C::HideWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EffectDetailsList_C", "HideWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_EffectDetailsList.MyCharaMenu_EffectDetailsList_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_EffectDetailsList_C::Setup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EffectDetailsList_C", "Setup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_EffectDetailsList.MyCharaMenu_EffectDetailsList_C.AddEffectDetailItemToList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InEffectNameText                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             InEffectDescText                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UMyCharaMenu_EffectDetailsList_C::AddEffectDetailItemToList(const class FText& InEffectNameText, const class FText& InEffectDescText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EffectDetailsList_C", "AddEffectDetailItemToList");

	Params::MyCharaMenu_EffectDetailsList_C_AddEffectDetailItemToList Parms{};

	Parms.InEffectNameText = std::move(InEffectNameText);
	Parms.InEffectDescText = std::move(InEffectDescText);

	UObject::ProcessEvent(Func, &Parms);
}

}

