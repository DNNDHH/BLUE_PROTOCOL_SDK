#pragma once

 

// Package: QuestBoard

#include "Basic.hpp"

#include "QuestBoard_classes.hpp"
#include "QuestBoard_parameters.hpp"


namespace SDK
{

// Function QuestBoard.QuestBoard_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UQuestBoard_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestBoard_C", "OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestBoard.QuestBoard_C.ExecuteUbergraph_QuestBoard
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestBoard_C::ExecuteUbergraph_QuestBoard(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestBoard_C", "ExecuteUbergraph_QuestBoard");

	Params::QuestBoard_C_ExecuteUbergraph_QuestBoard Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestBoard.QuestBoard_C.WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UQuestBoard_C::WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestBoard_C", "WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestBoard.QuestBoard_C.onAnimTimer
// (BlueprintCallable, BlueprintEvent)

void UQuestBoard_C::OnAnimTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestBoard_C", "onAnimTimer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestBoard.QuestBoard_C.BndEvt__CmnBack01_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature
// (BlueprintEvent)

void UQuestBoard_C::BndEvt__CmnBack01_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestBoard_C", "BndEvt__CmnBack01_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestBoard.QuestBoard_C.RefreshDisplay
// (BlueprintCallable, BlueprintEvent)

void UQuestBoard_C::RefreshDisplay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestBoard_C", "RefreshDisplay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestBoard.QuestBoard_C.BuildListItem
// (BlueprintCallable, BlueprintEvent)

void UQuestBoard_C::BuildListItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestBoard_C", "BuildListItem");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestBoard.QuestBoard_C.BndEvt__FilterButton_K2Node_ComponentBoundEvent_4_OnApplyFilter__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// TArray<struct FFilterGroup>             Filters                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UQuestBoard_C::BndEvt__FilterButton_K2Node_ComponentBoundEvent_4_OnApplyFilter__DelegateSignature(TArray<struct FFilterGroup>& Filters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestBoard_C", "BndEvt__FilterButton_K2Node_ComponentBoundEvent_4_OnApplyFilter__DelegateSignature");

	Params::QuestBoard_C_BndEvt__FilterButton_K2Node_ComponentBoundEvent_4_OnApplyFilter__DelegateSignature Parms{};

	Parms.Filters = std::move(Filters);

	UObject::ProcessEvent(Func, &Parms);

	Filters = std::move(Parms.Filters);
}


// Function QuestBoard.QuestBoard_C.OnListItemSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQuestBoard_ListItem_C*           Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestBoard_C::OnListItemSelected(class UQuestBoard_ListItem_C* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestBoard_C", "OnListItemSelected");

	Params::QuestBoard_C_OnListItemSelected Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestBoard.QuestBoard_C.OnPress_Cancel
// (Event, Public, BlueprintEvent)

void UQuestBoard_C::OnPress_Cancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestBoard_C", "OnPress_Cancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestBoard.QuestBoard_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestBoard_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestBoard_C", "OnAnimationFinished");

	Params::QuestBoard_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestBoard.QuestBoard_C.BndEvt__QuestDetail_Accepted_K2Node_ComponentBoundEvent_103_OnFinish__DelegateSignature
// (BlueprintEvent)
// Parameters:
// EQuestDetail_FinishStatus               FinishStatus                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   QuestIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestBoard_C::BndEvt__QuestDetail_Accepted_K2Node_ComponentBoundEvent_103_OnFinish__DelegateSignature(EQuestDetail_FinishStatus FinishStatus, int32 QuestIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestBoard_C", "BndEvt__QuestDetail_Accepted_K2Node_ComponentBoundEvent_103_OnFinish__DelegateSignature");

	Params::QuestBoard_C_BndEvt__QuestDetail_Accepted_K2Node_ComponentBoundEvent_103_OnFinish__DelegateSignature Parms{};

	Parms.FinishStatus = FinishStatus;
	Parms.QuestIndex = QuestIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestBoard.QuestBoard_C.OnClick_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   QuestIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestBoard_C::OnClick_Event_0(int32 QuestIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestBoard_C", "OnClick_Event_0");

	Params::QuestBoard_C_OnClick_Event_0 Parms{};

	Parms.QuestIndex = QuestIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestBoard.QuestBoard_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UQuestBoard_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestBoard_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestBoard.QuestBoard_C.CreateListItem
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FQuestBoardQuestData>     InQuestList                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UQuestBoard_C::CreateListItem(const TArray<struct FQuestBoardQuestData>& InQuestList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestBoard_C", "CreateListItem");

	Params::QuestBoard_C_CreateListItem Parms{};

	Parms.InQuestList = std::move(InQuestList);

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestBoard.QuestBoard_C.CreateQuestList
// (BlueprintCallable, BlueprintEvent)

void UQuestBoard_C::CreateQuestList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestBoard_C", "CreateQuestList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestBoard.QuestBoard_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UQuestBoard_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestBoard_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestBoard.QuestBoard_C.ChangeQuestStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   QuestIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestBoard_C::ChangeQuestStatus(int32 QuestIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestBoard_C", "ChangeQuestStatus");

	Params::QuestBoard_C_ChangeQuestStatus Parms{};

	Parms.QuestIndex = QuestIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestBoard.QuestBoard_C.RemoveListItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InQuestIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestBoard_C::RemoveListItem(int32 InQuestIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestBoard_C", "RemoveListItem");

	Params::QuestBoard_C_RemoveListItem Parms{};

	Parms.InQuestIndex = InQuestIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestBoard.QuestBoard_C.FindListItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InQuestIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OutListIndex                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestBoard_C::FindListItem(int32 InQuestIndex, int32* OutListIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestBoard_C", "FindListItem");

	Params::QuestBoard_C_FindListItem Parms{};

	Parms.InQuestIndex = InQuestIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (OutListIndex != nullptr)
		*OutListIndex = Parms.OutListIndex;
}


// Function QuestBoard.QuestBoard_C.RandomPlayAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UQuestBoard_C::RandomPlayAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestBoard_C", "RandomPlayAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestBoard.QuestBoard_C.RandomPlayAnimation2
// (Public, BlueprintCallable, BlueprintEvent)

void UQuestBoard_C::RandomPlayAnimation2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestBoard_C", "RandomPlayAnimation2");

	UObject::ProcessEvent(Func, nullptr);
}

}

