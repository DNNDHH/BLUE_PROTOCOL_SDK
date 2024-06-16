#pragma once

 

// Package: QuestConfirmationMenu

#include "Basic.hpp"

#include "QuestConfirmationMenu_classes.hpp"
#include "QuestConfirmationMenu_parameters.hpp"


namespace SDK
{

// Function QuestConfirmationMenu.QuestConfirmationMenu_C.OnFinish__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EQuestDetail_FinishStatus               FinishStatus                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_QuestIndex                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestConfirmationMenu_C::OnFinish__DelegateSignature(EQuestDetail_FinishStatus FinishStatus, int32 Param_QuestIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestConfirmationMenu_C", "OnFinish__DelegateSignature");

	Params::QuestConfirmationMenu_C_OnFinish__DelegateSignature Parms{};

	Parms.FinishStatus = FinishStatus;
	Parms.Param_QuestIndex = Param_QuestIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestConfirmationMenu.QuestConfirmationMenu_C.ExecuteUbergraph_QuestConfirmationMenu
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestConfirmationMenu_C::ExecuteUbergraph_QuestConfirmationMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestConfirmationMenu_C", "ExecuteUbergraph_QuestConfirmationMenu");

	Params::QuestConfirmationMenu_C_ExecuteUbergraph_QuestConfirmationMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestConfirmationMenu.QuestConfirmationMenu_C.WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UQuestConfirmationMenu_C::WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestConfirmationMenu_C", "WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestConfirmationMenu.QuestConfirmationMenu_C.BndEvt__QuestDetail_K2Node_ComponentBoundEvent_33_OnFinish__DelegateSignature
// (BlueprintEvent)
// Parameters:
// EQuestDetail_FinishStatus               FinishStatus                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_QuestIndex                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestConfirmationMenu_C::BndEvt__QuestDetail_K2Node_ComponentBoundEvent_33_OnFinish__DelegateSignature(EQuestDetail_FinishStatus FinishStatus, int32 Param_QuestIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestConfirmationMenu_C", "BndEvt__QuestDetail_K2Node_ComponentBoundEvent_33_OnFinish__DelegateSignature");

	Params::QuestConfirmationMenu_C_BndEvt__QuestDetail_K2Node_ComponentBoundEvent_33_OnFinish__DelegateSignature Parms{};

	Parms.FinishStatus = FinishStatus;
	Parms.Param_QuestIndex = Param_QuestIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestConfirmationMenu.QuestConfirmationMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UQuestConfirmationMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestConfirmationMenu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

