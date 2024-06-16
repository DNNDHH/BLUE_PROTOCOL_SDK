#pragma once

 

// Package: UMG_ShopAdventurerRank

#include "Basic.hpp"

#include "UMG_ShopAdventurerRank_classes.hpp"
#include "UMG_ShopAdventurerRank_parameters.hpp"


namespace SDK
{

// Function UMG_ShopAdventurerRank.UMG_ShopAdventurerRank_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUMG_ShopAdventurerRank_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ShopAdventurerRank_C", "OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ShopAdventurerRank.UMG_ShopAdventurerRank_C.OnBattleStart__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUMG_ShopAdventurerRank_C::OnBattleStart__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ShopAdventurerRank_C", "OnBattleStart__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ShopAdventurerRank.UMG_ShopAdventurerRank_C.ExecuteUbergraph_UMG_ShopAdventurerRank
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ShopAdventurerRank_C::ExecuteUbergraph_UMG_ShopAdventurerRank(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ShopAdventurerRank_C", "ExecuteUbergraph_UMG_ShopAdventurerRank");

	Params::UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ShopAdventurerRank.UMG_ShopAdventurerRank_C.OnCancelRecruit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasSuccessful                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   IRetCode                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ShopAdventurerRank_C::OnCancelRecruit(const bool bWasSuccessful, const int32 IRetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ShopAdventurerRank_C", "OnCancelRecruit");

	Params::UMG_ShopAdventurerRank_C_OnCancelRecruit Parms{};

	Parms.bWasSuccessful = bWasSuccessful;
	Parms.IRetCode = IRetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ShopAdventurerRank.UMG_ShopAdventurerRank_C.PartyRecruitCancel_YesNoDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EYesNoDialogResult                      Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ShopAdventurerRank_C::PartyRecruitCancel_YesNoDialog(const EYesNoDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ShopAdventurerRank_C", "PartyRecruitCancel_YesNoDialog");

	Params::UMG_ShopAdventurerRank_C_PartyRecruitCancel_YesNoDialog Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ShopAdventurerRank.UMG_ShopAdventurerRank_C.StartBattle
// (BlueprintCallable, BlueprintEvent)

void UUMG_ShopAdventurerRank_C::StartBattle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ShopAdventurerRank_C", "StartBattle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ShopAdventurerRank.UMG_ShopAdventurerRank_C.PartyRecruitCancel
// (BlueprintCallable, BlueprintEvent)

void UUMG_ShopAdventurerRank_C::PartyRecruitCancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ShopAdventurerRank_C", "PartyRecruitCancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ShopAdventurerRank.UMG_ShopAdventurerRank_C.OnClose_Event_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_MatchingMenu_C*              Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ShopAdventurerRank_C::OnClose_Event_2(class UUMG_MatchingMenu_C* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ShopAdventurerRank_C", "OnClose_Event_2");

	Params::UMG_ShopAdventurerRank_C_OnClose_Event_2 Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ShopAdventurerRank.UMG_ShopAdventurerRank_C.BndEvt__UMG_ShopAdventurerRank_BattleStartBtn_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UUMG_ShopAdventurerRank_C::BndEvt__UMG_ShopAdventurerRank_BattleStartBtn_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ShopAdventurerRank_C", "BndEvt__UMG_ShopAdventurerRank_BattleStartBtn_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ShopAdventurerRank.UMG_ShopAdventurerRank_C.OnGuideMessageVisibility_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisibility                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ShopAdventurerRank_C::OnGuideMessageVisibility_Event(bool InVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ShopAdventurerRank_C", "OnGuideMessageVisibility_Event");

	Params::UMG_ShopAdventurerRank_C_OnGuideMessageVisibility_Event Parms{};

	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ShopAdventurerRank.UMG_ShopAdventurerRank_C.Close
// (BlueprintCallable, BlueprintEvent)

void UUMG_ShopAdventurerRank_C::Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ShopAdventurerRank_C", "Close");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ShopAdventurerRank.UMG_ShopAdventurerRank_C.OnPress_Cancel
// (Event, Public, BlueprintEvent)

void UUMG_ShopAdventurerRank_C::OnPress_Cancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ShopAdventurerRank_C", "OnPress_Cancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ShopAdventurerRank.UMG_ShopAdventurerRank_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UUMG_ShopAdventurerRank_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ShopAdventurerRank_C", "WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ShopAdventurerRank.UMG_ShopAdventurerRank_C.BndEvt__CmnBtnBack_1_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature
// (BlueprintEvent)

void UUMG_ShopAdventurerRank_C::BndEvt__CmnBtnBack_1_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ShopAdventurerRank_C", "BndEvt__CmnBtnBack_1_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ShopAdventurerRank.UMG_ShopAdventurerRank_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_ShopAdventurerRank_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ShopAdventurerRank_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ShopAdventurerRank.UMG_ShopAdventurerRank_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_ShopAdventurerRank_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ShopAdventurerRank_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ShopAdventurerRank.UMG_ShopAdventurerRank_C.InAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_ShopAdventurerRank_C::InAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ShopAdventurerRank_C", "InAnimation");

	UObject::ProcessEvent(Func, nullptr);
}

}

