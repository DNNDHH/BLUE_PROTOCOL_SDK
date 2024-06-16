#pragma once

 

// Package: ChatLogWindowList

#include "Basic.hpp"

#include "ChatLogWindowList_classes.hpp"
#include "ChatLogWindowList_parameters.hpp"


namespace SDK
{

// Function ChatLogWindowList.ChatLogWindowList_C.OnChatLogWindowAddRequest__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UChatLogWindowList_C::OnChatLogWindowAddRequest__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowList_C", "OnChatLogWindowAddRequest__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatLogWindowList.ChatLogWindowList_C.OnChatLogWindowCloseRequest__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UChatLogWindowList_C::OnChatLogWindowCloseRequest__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowList_C", "OnChatLogWindowCloseRequest__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatLogWindowList.ChatLogWindowList_C.OnChangeFilterType__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InDetailType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatLogWindowList_C::OnChangeFilterType__DelegateSignature(int32 InType, int32 InDetailType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowList_C", "OnChangeFilterType__DelegateSignature");

	Params::ChatLogWindowList_C_OnChangeFilterType__DelegateSignature Parms{};

	Parms.InType = InType;
	Parms.InDetailType = InDetailType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogWindowList.ChatLogWindowList_C.OnChatLogTabAddRequest__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UChatLogWindowList_C::OnChatLogTabAddRequest__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowList_C", "OnChatLogTabAddRequest__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatLogWindowList.ChatLogWindowList_C.OnChatLogTabCloseRequest__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBChatLogWindowSlot                    RequestSlot                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatLogWindowList_C::OnChatLogTabCloseRequest__DelegateSignature(ESBChatLogWindowSlot RequestSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowList_C", "OnChatLogTabCloseRequest__DelegateSignature");

	Params::ChatLogWindowList_C_OnChatLogTabCloseRequest__DelegateSignature Parms{};

	Parms.RequestSlot = RequestSlot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogWindowList.ChatLogWindowList_C.OnChangeTab__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UChatLogWindowList_C::OnChangeTab__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowList_C", "OnChangeTab__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatLogWindowList.ChatLogWindowList_C.OnChangeChatUnreadNotify__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsChatUnreadNotify                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatLogWindowList_C::OnChangeChatUnreadNotify__DelegateSignature(bool Param_IsChatUnreadNotify)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowList_C", "OnChangeChatUnreadNotify__DelegateSignature");

	Params::ChatLogWindowList_C_OnChangeChatUnreadNotify__DelegateSignature Parms{};

	Parms.Param_IsChatUnreadNotify = Param_IsChatUnreadNotify;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogWindowList.ChatLogWindowList_C.OnChangeUnreadVisible__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatLogWindowList_C::OnChangeUnreadVisible__DelegateSignature(bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowList_C", "OnChangeUnreadVisible__DelegateSignature");

	Params::ChatLogWindowList_C_OnChangeUnreadVisible__DelegateSignature Parms{};

	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogWindowList.ChatLogWindowList_C.ExecuteUbergraph_ChatLogWindowList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatLogWindowList_C::ExecuteUbergraph_ChatLogWindowList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowList_C", "ExecuteUbergraph_ChatLogWindowList");

	Params::ChatLogWindowList_C_ExecuteUbergraph_ChatLogWindowList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__SBMainTabButton_K2Node_ComponentBoundEvent_278_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UChatLogWindowList_C::BndEvt__SBMainTabButton_K2Node_ComponentBoundEvent_278_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowList_C", "BndEvt__SBMainTabButton_K2Node_ComponentBoundEvent_278_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogWindowList_CmnClose02_K2Node_ComponentBoundEvent_8_OnClosed__DelegateSignature
// (BlueprintEvent)

void UChatLogWindowList_C::BndEvt__ChatLogWindowList_CmnClose02_K2Node_ComponentBoundEvent_8_OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowList_C", "BndEvt__ChatLogWindowList_CmnClose02_K2Node_ComponentBoundEvent_8_OnClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__BtnStoring_Sub_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UChatLogWindowList_C::BndEvt__BtnStoring_Sub_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowList_C", "BndEvt__BtnStoring_Sub_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__BtnSeparation_Main_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UChatLogWindowList_C::BndEvt__BtnSeparation_Main_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowList_C", "BndEvt__BtnSeparation_Main_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__LogListView_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUserWidget*                      Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatLogWindowList_C::BndEvt__LogListView_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowList_C", "BndEvt__LogListView_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature");

	Params::ChatLogWindowList_C_BndEvt__LogListView_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogWindowList.ChatLogWindowList_C.OnReciveMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBChatUIMessage                 InMess                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    bRecieve                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatLogWindowList_C::OnReciveMessage(const struct FSBChatUIMessage& InMess, bool bRecieve)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowList_C", "OnReciveMessage");

	Params::ChatLogWindowList_C_OnReciveMessage Parms{};

	Parms.InMess = std::move(InMess);
	Parms.bRecieve = bRecieve;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__BtnAddWindow_K2Node_ComponentBoundEvent_84_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UChatLogWindowList_C::BndEvt__BtnAddWindow_K2Node_ComponentBoundEvent_84_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowList_C", "BndEvt__BtnAddWindow_K2Node_ComponentBoundEvent_84_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogWindowList_FilterClose_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UChatLogWindowList_C::BndEvt__ChatLogWindowList_FilterClose_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowList_C", "BndEvt__ChatLogWindowList_FilterClose_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogWindowList_ChatLogFilterBattle_2_K2Node_ComponentBoundEvent_3_EventCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    IsChecked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatLogWindowList_C::BndEvt__ChatLogWindowList_ChatLogFilterBattle_2_K2Node_ComponentBoundEvent_3_EventCheckStateChanged__DelegateSignature(bool IsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowList_C", "BndEvt__ChatLogWindowList_ChatLogFilterBattle_2_K2Node_ComponentBoundEvent_3_EventCheckStateChanged__DelegateSignature");

	Params::ChatLogWindowList_C_BndEvt__ChatLogWindowList_ChatLogFilterBattle_2_K2Node_ComponentBoundEvent_3_EventCheckStateChanged__DelegateSignature Parms{};

	Parms.IsChecked = IsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogWindowList_ChatLogFilterBattle_1_K2Node_ComponentBoundEvent_3_EventCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    IsChecked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatLogWindowList_C::BndEvt__ChatLogWindowList_ChatLogFilterBattle_1_K2Node_ComponentBoundEvent_3_EventCheckStateChanged__DelegateSignature(bool IsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowList_C", "BndEvt__ChatLogWindowList_ChatLogFilterBattle_1_K2Node_ComponentBoundEvent_3_EventCheckStateChanged__DelegateSignature");

	Params::ChatLogWindowList_C_BndEvt__ChatLogWindowList_ChatLogFilterBattle_1_K2Node_ComponentBoundEvent_3_EventCheckStateChanged__DelegateSignature Parms{};

	Parms.IsChecked = IsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogWindowList.ChatLogWindowList_C.CloseFilter
// (BlueprintCallable, BlueprintEvent)

void UChatLogWindowList_C::CloseFilter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowList_C", "CloseFilter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogFilterSystem_2_K2Node_ComponentBoundEvent_5_EventCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    IsChecked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatLogWindowList_C::BndEvt__ChatLogFilterSystem_2_K2Node_ComponentBoundEvent_5_EventCheckStateChanged__DelegateSignature(bool IsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowList_C", "BndEvt__ChatLogFilterSystem_2_K2Node_ComponentBoundEvent_5_EventCheckStateChanged__DelegateSignature");

	Params::ChatLogWindowList_C_BndEvt__ChatLogFilterSystem_2_K2Node_ComponentBoundEvent_5_EventCheckStateChanged__DelegateSignature Parms{};

	Parms.IsChecked = IsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogFilterSystem_1_K2Node_ComponentBoundEvent_4_EventCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    IsChecked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatLogWindowList_C::BndEvt__ChatLogFilterSystem_1_K2Node_ComponentBoundEvent_4_EventCheckStateChanged__DelegateSignature(bool IsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowList_C", "BndEvt__ChatLogFilterSystem_1_K2Node_ComponentBoundEvent_4_EventCheckStateChanged__DelegateSignature");

	Params::ChatLogWindowList_C_BndEvt__ChatLogFilterSystem_1_K2Node_ComponentBoundEvent_4_EventCheckStateChanged__DelegateSignature Parms{};

	Parms.IsChecked = IsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogFilterSystem_0_K2Node_ComponentBoundEvent_3_EventCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    IsChecked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatLogWindowList_C::BndEvt__ChatLogFilterSystem_0_K2Node_ComponentBoundEvent_3_EventCheckStateChanged__DelegateSignature(bool IsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowList_C", "BndEvt__ChatLogFilterSystem_0_K2Node_ComponentBoundEvent_3_EventCheckStateChanged__DelegateSignature");

	Params::ChatLogWindowList_C_BndEvt__ChatLogFilterSystem_0_K2Node_ComponentBoundEvent_3_EventCheckStateChanged__DelegateSignature Parms{};

	Parms.IsChecked = IsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogFilterCommunication_1_K2Node_ComponentBoundEvent_2_EventCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    IsChecked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatLogWindowList_C::BndEvt__ChatLogFilterCommunication_1_K2Node_ComponentBoundEvent_2_EventCheckStateChanged__DelegateSignature(bool IsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowList_C", "BndEvt__ChatLogFilterCommunication_1_K2Node_ComponentBoundEvent_2_EventCheckStateChanged__DelegateSignature");

	Params::ChatLogWindowList_C_BndEvt__ChatLogFilterCommunication_1_K2Node_ComponentBoundEvent_2_EventCheckStateChanged__DelegateSignature Parms{};

	Parms.IsChecked = IsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogFilterCommunication_0_K2Node_ComponentBoundEvent_1_EventCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    IsChecked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatLogWindowList_C::BndEvt__ChatLogFilterCommunication_0_K2Node_ComponentBoundEvent_1_EventCheckStateChanged__DelegateSignature(bool IsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowList_C", "BndEvt__ChatLogFilterCommunication_0_K2Node_ComponentBoundEvent_1_EventCheckStateChanged__DelegateSignature");

	Params::ChatLogWindowList_C_BndEvt__ChatLogFilterCommunication_0_K2Node_ComponentBoundEvent_1_EventCheckStateChanged__DelegateSignature Parms{};

	Parms.IsChecked = IsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogFilterBattle_0_K2Node_ComponentBoundEvent_0_EventCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    IsChecked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatLogWindowList_C::BndEvt__ChatLogFilterBattle_0_K2Node_ComponentBoundEvent_0_EventCheckStateChanged__DelegateSignature(bool IsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowList_C", "BndEvt__ChatLogFilterBattle_0_K2Node_ComponentBoundEvent_0_EventCheckStateChanged__DelegateSignature");

	Params::ChatLogWindowList_C_BndEvt__ChatLogFilterBattle_0_K2Node_ComponentBoundEvent_0_EventCheckStateChanged__DelegateSignature Parms{};

	Parms.IsChecked = IsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogFilterItem_4_K2Node_ComponentBoundEvent_539_EventCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    IsChecked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatLogWindowList_C::BndEvt__ChatLogFilterItem_4_K2Node_ComponentBoundEvent_539_EventCheckStateChanged__DelegateSignature(bool IsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowList_C", "BndEvt__ChatLogFilterItem_4_K2Node_ComponentBoundEvent_539_EventCheckStateChanged__DelegateSignature");

	Params::ChatLogWindowList_C_BndEvt__ChatLogFilterItem_4_K2Node_ComponentBoundEvent_539_EventCheckStateChanged__DelegateSignature Parms{};

	Parms.IsChecked = IsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogFilterItem_3_K2Node_ComponentBoundEvent_523_EventCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    IsChecked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatLogWindowList_C::BndEvt__ChatLogFilterItem_3_K2Node_ComponentBoundEvent_523_EventCheckStateChanged__DelegateSignature(bool IsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowList_C", "BndEvt__ChatLogFilterItem_3_K2Node_ComponentBoundEvent_523_EventCheckStateChanged__DelegateSignature");

	Params::ChatLogWindowList_C_BndEvt__ChatLogFilterItem_3_K2Node_ComponentBoundEvent_523_EventCheckStateChanged__DelegateSignature Parms{};

	Parms.IsChecked = IsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogFilterItem_2_K2Node_ComponentBoundEvent_508_EventCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    IsChecked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatLogWindowList_C::BndEvt__ChatLogFilterItem_2_K2Node_ComponentBoundEvent_508_EventCheckStateChanged__DelegateSignature(bool IsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowList_C", "BndEvt__ChatLogFilterItem_2_K2Node_ComponentBoundEvent_508_EventCheckStateChanged__DelegateSignature");

	Params::ChatLogWindowList_C_BndEvt__ChatLogFilterItem_2_K2Node_ComponentBoundEvent_508_EventCheckStateChanged__DelegateSignature Parms{};

	Parms.IsChecked = IsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogFilterItem_1_K2Node_ComponentBoundEvent_494_EventCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    IsChecked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatLogWindowList_C::BndEvt__ChatLogFilterItem_1_K2Node_ComponentBoundEvent_494_EventCheckStateChanged__DelegateSignature(bool IsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowList_C", "BndEvt__ChatLogFilterItem_1_K2Node_ComponentBoundEvent_494_EventCheckStateChanged__DelegateSignature");

	Params::ChatLogWindowList_C_BndEvt__ChatLogFilterItem_1_K2Node_ComponentBoundEvent_494_EventCheckStateChanged__DelegateSignature Parms{};

	Parms.IsChecked = IsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogFilterItem_0_K2Node_ComponentBoundEvent_493_EventCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    IsChecked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatLogWindowList_C::BndEvt__ChatLogFilterItem_0_K2Node_ComponentBoundEvent_493_EventCheckStateChanged__DelegateSignature(bool IsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowList_C", "BndEvt__ChatLogFilterItem_0_K2Node_ComponentBoundEvent_493_EventCheckStateChanged__DelegateSignature");

	Params::ChatLogWindowList_C_BndEvt__ChatLogFilterItem_0_K2Node_ComponentBoundEvent_493_EventCheckStateChanged__DelegateSignature Parms{};

	Parms.IsChecked = IsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__FilterButton_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UChatLogWindowList_C::BndEvt__FilterButton_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowList_C", "BndEvt__FilterButton_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__MainTabButton_2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UChatLogWindowList_C::BndEvt__MainTabButton_2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowList_C", "BndEvt__MainTabButton_2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__MainTabButton_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UChatLogWindowList_C::BndEvt__MainTabButton_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowList_C", "BndEvt__MainTabButton_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatLogWindowList.ChatLogWindowList_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_ChatLogWindow_C*             InWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InFilterType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InDetailFilterType                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBChatLogTabType                       InTabType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatLogWindowList_C::Init(class UUMG_ChatLogWindow_C* InWidget, int32 InFilterType, int32 InDetailFilterType, ESBChatLogTabType InTabType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowList_C", "Init");

	Params::ChatLogWindowList_C_Init Parms{};

	Parms.InWidget = InWidget;
	Parms.InFilterType = InFilterType;
	Parms.InDetailFilterType = InDetailFilterType;
	Parms.InTabType = InTabType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogWindowList.ChatLogWindowList_C.InitFilterCheckBox
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UChatLogWindowList_C::InitFilterCheckBox()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowList_C", "InitFilterCheckBox");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatLogWindowList.ChatLogWindowList_C.Change Tab Mode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBChatLogTabType                       InTabType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInit                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatLogWindowList_C::Change_Tab_Mode(ESBChatLogTabType InTabType, bool bInit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowList_C", "Change Tab Mode");

	Params::ChatLogWindowList_C_Change_Tab_Mode Parms{};

	Parms.InTabType = InTabType;
	Parms.bInit = bInit;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogWindowList.ChatLogWindowList_C.NextTabSelection
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bPrevious                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatLogWindowList_C::NextTabSelection(bool bPrevious)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowList_C", "NextTabSelection");

	Params::ChatLogWindowList_C_NextTabSelection Parms{};

	Parms.bPrevious = bPrevious;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogWindowList.ChatLogWindowList_C.Set Filter List Visible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatLogWindowList_C::Set_Filter_List_Visible(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowList_C", "Set Filter List Visible");

	Params::ChatLogWindowList_C_Set_Filter_List_Visible Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogWindowList.ChatLogWindowList_C.CreateChatLogList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InFilterType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InDetailFilterType                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatLogWindowList_C::CreateChatLogList(int32 InFilterType, int32 InDetailFilterType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowList_C", "CreateChatLogList");

	Params::ChatLogWindowList_C_CreateChatLogList Parms{};

	Parms.InFilterType = InFilterType;
	Parms.InDetailFilterType = InDetailFilterType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogWindowList.ChatLogWindowList_C.IsDirectChatPlayer
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSBChatUIMessage                 InMess                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    Ret                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatLogWindowList_C::IsDirectChatPlayer(const struct FSBChatUIMessage& InMess, bool* Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowList_C", "IsDirectChatPlayer");

	Params::ChatLogWindowList_C_IsDirectChatPlayer Parms{};

	Parms.InMess = std::move(InMess);

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;
}


// Function ChatLogWindowList.ChatLogWindowList_C.ChangeFilter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InEnable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// ESBChatFilterType                       InFilterType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatLogWindowList_C::ChangeFilter(bool InEnable, ESBChatFilterType InFilterType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowList_C", "ChangeFilter");

	Params::ChatLogWindowList_C_ChangeFilter Parms{};

	Parms.InEnable = InEnable;
	Parms.InFilterType = InFilterType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogWindowList.ChatLogWindowList_C.ChangeDetailFilter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InEnable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// ESBChatDetailFilterType                 InDetailFilterType                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatLogWindowList_C::ChangeDetailFilter(bool InEnable, ESBChatDetailFilterType InDetailFilterType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowList_C", "ChangeDetailFilter");

	Params::ChatLogWindowList_C_ChangeDetailFilter Parms{};

	Parms.InEnable = InEnable;
	Parms.InDetailFilterType = InDetailFilterType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogWindowList.ChatLogWindowList_C.InitChidMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InTabTextId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatLogWindowList_C::InitChidMode(int32 InTabTextId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowList_C", "InitChidMode");

	Params::ChatLogWindowList_C_InitChidMode Parms{};

	Parms.InTabTextId = InTabTextId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogWindowList.ChatLogWindowList_C.RefreshLog
// (Public, BlueprintCallable, BlueprintEvent)

void UChatLogWindowList_C::RefreshLog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowList_C", "RefreshLog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatLogWindowList.ChatLogWindowList_C.SetListScrollEnd
// (Public, BlueprintCallable, BlueprintEvent)

void UChatLogWindowList_C::SetListScrollEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowList_C", "SetListScrollEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatLogWindowList.ChatLogWindowList_C.SetForceUnhover
// (Public, BlueprintCallable, BlueprintEvent)

void UChatLogWindowList_C::SetForceUnhover()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowList_C", "SetForceUnhover");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatLogWindowList.ChatLogWindowList_C.SetFullChildWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InFull                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatLogWindowList_C::SetFullChildWindow(bool InFull)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowList_C", "SetFullChildWindow");

	Params::ChatLogWindowList_C_SetFullChildWindow Parms{};

	Parms.InFull = InFull;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogWindowList.ChatLogWindowList_C.SetSeparationButtonEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InEnable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatLogWindowList_C::SetSeparationButtonEnabled(bool InEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowList_C", "SetSeparationButtonEnabled");

	Params::ChatLogWindowList_C_SetSeparationButtonEnabled Parms{};

	Parms.InEnable = InEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogWindowList.ChatLogWindowList_C.SetWindowSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                        InSize                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatLogWindowList_C::SetWindowSize(const struct FVector2D& InSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowList_C", "SetWindowSize");

	Params::ChatLogWindowList_C_SetWindowSize Parms{};

	Parms.InSize = std::move(InSize);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogWindowList.ChatLogWindowList_C.GetWindowSize
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D                        RetSize                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatLogWindowList_C::GetWindowSize(struct FVector2D* RetSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowList_C", "GetWindowSize");

	Params::ChatLogWindowList_C_GetWindowSize Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (RetSize != nullptr)
		*RetSize = std::move(Parms.RetSize);
}


// Function ChatLogWindowList.ChatLogWindowList_C.Create Message Entry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBChatUIMessage                 InMess                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    bRecieve                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatLogWindowList_C::Create_Message_Entry(const struct FSBChatUIMessage& InMess, bool bRecieve)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowList_C", "Create Message Entry");

	Params::ChatLogWindowList_C_Create_Message_Entry Parms{};

	Parms.InMess = std::move(InMess);
	Parms.bRecieve = bRecieve;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogWindowList.ChatLogWindowList_C.IsScrollEndListView
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Ret                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatLogWindowList_C::IsScrollEndListView(bool* Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowList_C", "IsScrollEndListView");

	Params::ChatLogWindowList_C_IsScrollEndListView Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;
}


// Function ChatLogWindowList.ChatLogWindowList_C.ClearLogList
// (Public, BlueprintCallable, BlueprintEvent)

void UChatLogWindowList_C::ClearLogList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowList_C", "ClearLogList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatLogWindowList.ChatLogWindowList_C.SetTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBChatLogWindowSlot                    InSlot                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bAdd                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatLogWindowList_C::SetTab(ESBChatLogWindowSlot InSlot, bool bAdd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowList_C", "SetTab");

	Params::ChatLogWindowList_C_SetTab Parms{};

	Parms.InSlot = InSlot;
	Parms.bAdd = bAdd;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogWindowList.ChatLogWindowList_C.Get Tab Type to Slot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBChatLogWindowSlot                    Param_Slot                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatLogWindowList_C::Get_Tab_Type_to_Slot(ESBChatLogWindowSlot* Param_Slot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowList_C", "Get Tab Type to Slot");

	Params::ChatLogWindowList_C_Get_Tab_Type_to_Slot Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Slot != nullptr)
		*Param_Slot = Parms.Param_Slot;
}


// Function ChatLogWindowList.ChatLogWindowList_C.SetChatLogSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBChatLogWindowSlot                    Param_Slot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatLogWindowList_C::SetChatLogSlot(ESBChatLogWindowSlot Param_Slot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowList_C", "SetChatLogSlot");

	Params::ChatLogWindowList_C_SetChatLogSlot Parms{};

	Parms.Param_Slot = Param_Slot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogWindowList.ChatLogWindowList_C.CheckUnread
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UChatLogWindowList_C::CheckUnread()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowList_C", "CheckUnread");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatLogWindowList.ChatLogWindowList_C.ChatCloseUnreadUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void UChatLogWindowList_C::ChatCloseUnreadUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowList_C", "ChatCloseUnreadUpdate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatLogWindowList.ChatLogWindowList_C.UpdateChatLogStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBChatLogWindowStatusSave       InStatus                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UChatLogWindowList_C::UpdateChatLogStatus(const struct FSBChatLogWindowStatusSave& InStatus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowList_C", "UpdateChatLogStatus");

	Params::ChatLogWindowList_C_UpdateChatLogStatus Parms{};

	Parms.InStatus = std::move(InStatus);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogWindowList.ChatLogWindowList_C.GetChatUnreadNotify
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatLogWindowList_C::GetChatUnreadNotify(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowList_C", "GetChatUnreadNotify");

	Params::ChatLogWindowList_C_GetChatUnreadNotify Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}

}

