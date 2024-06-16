#pragma once

 

// Package: QuestDetailForMap

#include "Basic.hpp"

#include "QuestDetailForMap_classes.hpp"
#include "QuestDetailForMap_parameters.hpp"


namespace SDK
{

// Function QuestDetailForMap.QuestDetailForMap_C.OnFinish__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EQuestDetail_FinishStatus               FinishStatus                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_QuestIndex                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestDetailForMap_C::OnFinish__DelegateSignature(EQuestDetail_FinishStatus FinishStatus, int32 Param_QuestIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetailForMap_C", "OnFinish__DelegateSignature");

	Params::QuestDetailForMap_C_OnFinish__DelegateSignature Parms{};

	Parms.FinishStatus = FinishStatus;
	Parms.Param_QuestIndex = Param_QuestIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestDetailForMap.QuestDetailForMap_C.ExecuteUbergraph_QuestDetailForMap
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestDetailForMap_C::ExecuteUbergraph_QuestDetailForMap(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetailForMap_C", "ExecuteUbergraph_QuestDetailForMap");

	Params::QuestDetailForMap_C_ExecuteUbergraph_QuestDetailForMap Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestDetailForMap.QuestDetailForMap_C.BndEvt__QuestDetailForMap_MoveToQuestListBtn_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UQuestDetailForMap_C::BndEvt__QuestDetailForMap_MoveToQuestListBtn_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetailForMap_C", "BndEvt__QuestDetailForMap_MoveToQuestListBtn_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestDetailForMap.QuestDetailForMap_C.BndEvt__QuestDetailForMap_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature
// (BlueprintEvent)

void UQuestDetailForMap_C::BndEvt__QuestDetailForMap_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetailForMap_C", "BndEvt__QuestDetailForMap_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestDetailForMap.QuestDetailForMap_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UQuestDetailForMap_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetailForMap_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestDetailForMap.QuestDetailForMap_C.OnMenuFinish
// (BlueprintCallable, BlueprintEvent)

void UQuestDetailForMap_C::OnMenuFinish()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetailForMap_C", "OnMenuFinish");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestDetailForMap.QuestDetailForMap_C.BndEvt__QuestConfirmationMenuEx_BtnScreen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UQuestDetailForMap_C::BndEvt__QuestConfirmationMenuEx_BtnScreen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetailForMap_C", "BndEvt__QuestConfirmationMenuEx_BtnScreen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestDetailForMap.QuestDetailForMap_C.WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_1
// (BlueprintEvent)

void UQuestDetailForMap_C::WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetailForMap_C", "WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestDetailForMap.QuestDetailForMap_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UQuestDetailForMap_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetailForMap_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestDetailForMap.QuestDetailForMap_C.SetMoveButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InShowButton                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestDetailForMap_C::SetMoveButton(bool InShowButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetailForMap_C", "SetMoveButton");

	Params::QuestDetailForMap_C_SetMoveButton Parms{};

	Parms.InShowButton = InShowButton;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestDetailForMap.QuestDetailForMap_C.IsShowMoveButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    OutParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestDetailForMap_C::IsShowMoveButton(bool* OutParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetailForMap_C", "IsShowMoveButton");

	Params::QuestDetailForMap_C_IsShowMoveButton Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutParam != nullptr)
		*OutParam = Parms.OutParam;
}

}

