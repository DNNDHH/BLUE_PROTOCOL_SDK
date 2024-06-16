#pragma once

 

// Package: GuildDissolutionCheckDialog

#include "Basic.hpp"

#include "GuildDissolutionCheckDialog_classes.hpp"
#include "GuildDissolutionCheckDialog_parameters.hpp"


namespace SDK
{

// Function GuildDissolutionCheckDialog.GuildDissolutionCheckDialog_C.OnDissolution__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UGuildDissolutionCheckDialog_C::OnDissolution__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDissolutionCheckDialog_C", "OnDissolution__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildDissolutionCheckDialog.GuildDissolutionCheckDialog_C.ExecuteUbergraph_GuildDissolutionCheckDialog
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildDissolutionCheckDialog_C::ExecuteUbergraph_GuildDissolutionCheckDialog(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDissolutionCheckDialog_C", "ExecuteUbergraph_GuildDissolutionCheckDialog");

	Params::GuildDissolutionCheckDialog_C_ExecuteUbergraph_GuildDissolutionCheckDialog Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildDissolutionCheckDialog.GuildDissolutionCheckDialog_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UGuildDissolutionCheckDialog_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDissolutionCheckDialog_C", "WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildDissolutionCheckDialog.GuildDissolutionCheckDialog_C.BndEvt__ButtonYes_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUserWidget*                      InButtonWidget                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildDissolutionCheckDialog_C::BndEvt__ButtonYes_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(class UUserWidget* InButtonWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDissolutionCheckDialog_C", "BndEvt__ButtonYes_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");

	Params::GuildDissolutionCheckDialog_C_BndEvt__ButtonYes_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature Parms{};

	Parms.InButtonWidget = InButtonWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildDissolutionCheckDialog.GuildDissolutionCheckDialog_C.BndEvt__ButtonNo_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUserWidget*                      InButtonWidget                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildDissolutionCheckDialog_C::BndEvt__ButtonNo_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(class UUserWidget* InButtonWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDissolutionCheckDialog_C", "BndEvt__ButtonNo_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");

	Params::GuildDissolutionCheckDialog_C_BndEvt__ButtonNo_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature Parms{};

	Parms.InButtonWidget = InButtonWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildDissolutionCheckDialog.GuildDissolutionCheckDialog_C.BndEvt__Btn_OutDisplay_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UGuildDissolutionCheckDialog_C::BndEvt__Btn_OutDisplay_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDissolutionCheckDialog_C", "BndEvt__Btn_OutDisplay_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildDissolutionCheckDialog.GuildDissolutionCheckDialog_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGuildDissolutionCheckDialog_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDissolutionCheckDialog_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildDissolutionCheckDialog.GuildDissolutionCheckDialog_C.BndEvt__CB_Agree_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildDissolutionCheckDialog_C::BndEvt__CB_Agree_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDissolutionCheckDialog_C", "BndEvt__CB_Agree_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::GuildDissolutionCheckDialog_C_BndEvt__CB_Agree_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildDissolutionCheckDialog.GuildDissolutionCheckDialog_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGuildDissolutionCheckDialog_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDissolutionCheckDialog_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

