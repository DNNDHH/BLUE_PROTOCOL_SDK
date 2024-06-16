#pragma once

 

// Package: QuestBoard_ListItem

#include "Basic.hpp"

#include "QuestBoard_ListItem_classes.hpp"
#include "QuestBoard_ListItem_parameters.hpp"


namespace SDK
{

// Function QuestBoard_ListItem.QuestBoard_ListItem_C.OnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   QuestIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestBoard_ListItem_C::OnClick__DelegateSignature(int32 QuestIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestBoard_ListItem_C", "OnClick__DelegateSignature");

	Params::QuestBoard_ListItem_C_OnClick__DelegateSignature Parms{};

	Parms.QuestIndex = QuestIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestBoard_ListItem.QuestBoard_ListItem_C.OnBtnSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQuestBoard_ListItem_C*           Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestBoard_ListItem_C::OnBtnSelected__DelegateSignature(class UQuestBoard_ListItem_C* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestBoard_ListItem_C", "OnBtnSelected__DelegateSignature");

	Params::QuestBoard_ListItem_C_OnBtnSelected__DelegateSignature Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestBoard_ListItem.QuestBoard_ListItem_C.ExecuteUbergraph_QuestBoard_ListItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestBoard_ListItem_C::ExecuteUbergraph_QuestBoard_ListItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestBoard_ListItem_C", "ExecuteUbergraph_QuestBoard_ListItem");

	Params::QuestBoard_ListItem_C_ExecuteUbergraph_QuestBoard_ListItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestBoard_ListItem.QuestBoard_ListItem_C.BndEvt__SBButton_C_76_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UQuestBoard_ListItem_C::BndEvt__SBButton_C_76_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestBoard_ListItem_C", "BndEvt__SBButton_C_76_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestBoard_ListItem.QuestBoard_ListItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UQuestBoard_ListItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestBoard_ListItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestBoard_ListItem.QuestBoard_ListItem_C.SetInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UQuestBoard_ListItem_C::SetInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestBoard_ListItem_C", "SetInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestBoard_ListItem.QuestBoard_ListItem_C.SetQuestStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InQuestIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestBoard_ListItem_C::SetQuestStatus(int32 InQuestIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestBoard_ListItem_C", "SetQuestStatus");

	Params::QuestBoard_ListItem_C_SetQuestStatus Parms{};

	Parms.InQuestIndex = InQuestIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestBoard_ListItem.QuestBoard_ListItem_C.SetBtnSelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSelected                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestBoard_ListItem_C::SetBtnSelected(bool bSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestBoard_ListItem_C", "SetBtnSelected");

	Params::QuestBoard_ListItem_C_SetBtnSelected Parms{};

	Parms.bSelected = bSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestBoard_ListItem.QuestBoard_ListItem_C.HideNewIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UQuestBoard_ListItem_C::HideNewIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestBoard_ListItem_C", "HideNewIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestBoard_ListItem.QuestBoard_ListItem_C.SetVisibleNewIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestBoard_ListItem_C::SetVisibleNewIcon(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestBoard_ListItem_C", "SetVisibleNewIcon");

	Params::QuestBoard_ListItem_C_SetVisibleNewIcon Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestBoard_ListItem.QuestBoard_ListItem_C.GetQuestIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   QuestIndex                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestBoard_ListItem_C::GetQuestIndex(int32* QuestIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestBoard_ListItem_C", "GetQuestIndex");

	Params::QuestBoard_ListItem_C_GetQuestIndex Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (QuestIndex != nullptr)
		*QuestIndex = Parms.QuestIndex;
}

}

