#pragma once

 

// Package: EquipmentListForBattleSet

#include "Basic.hpp"

#include "EquipmentListForBattleSet_classes.hpp"
#include "EquipmentListForBattleSet_parameters.hpp"


namespace SDK
{

// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.OnListItemSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemIconBtn_C*                   InSelectedListItem                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentListForBattleSet_C::OnListItemSelected__DelegateSignature(class UItemIconBtn_C* InSelectedListItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentListForBattleSet_C", "OnListItemSelected__DelegateSignature");

	Params::EquipmentListForBattleSet_C_OnListItemSelected__DelegateSignature Parms{};

	Parms.InSelectedListItem = InSelectedListItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.OnEquipChangeBtnPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BattleSetInfoType                     InInfoType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           InEquipmentUniqueId                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UEquipmentListForBattleSet_C::OnEquipChangeBtnPressed__DelegateSignature(E_BattleSetInfoType InInfoType, const class FString& InEquipmentUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentListForBattleSet_C", "OnEquipChangeBtnPressed__DelegateSignature");

	Params::EquipmentListForBattleSet_C_OnEquipChangeBtnPressed__DelegateSignature Parms{};

	Parms.InInfoType = InInfoType;
	Parms.InEquipmentUniqueId = std::move(InEquipmentUniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.OnFilterApply__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UEquipmentListForBattleSet_C::OnFilterApply__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentListForBattleSet_C", "OnFilterApply__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.OnSortTypeSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBItemSortType                         InSelectedSortType                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentListForBattleSet_C::OnSortTypeSelected__DelegateSignature(ESBItemSortType InSelectedSortType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentListForBattleSet_C", "OnSortTypeSelected__DelegateSignature");

	Params::EquipmentListForBattleSet_C_OnSortTypeSelected__DelegateSignature Parms{};

	Parms.InSelectedSortType = InSelectedSortType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.OnFilterBtnBagOrStoragePressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsFilterBtnStoragePressed                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentListForBattleSet_C::OnFilterBtnBagOrStoragePressed__DelegateSignature(bool InIsFilterBtnStoragePressed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentListForBattleSet_C", "OnFilterBtnBagOrStoragePressed__DelegateSignature");

	Params::EquipmentListForBattleSet_C_OnFilterBtnBagOrStoragePressed__DelegateSignature Parms{};

	Parms.InIsFilterBtnStoragePressed = InIsFilterBtnStoragePressed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.OnCancelBtnPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UEquipmentListForBattleSet_C::OnCancelBtnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentListForBattleSet_C", "OnCancelBtnPressed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.ExecuteUbergraph_EquipmentListForBattleSet
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentListForBattleSet_C::ExecuteUbergraph_EquipmentListForBattleSet(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentListForBattleSet_C", "ExecuteUbergraph_EquipmentListForBattleSet");

	Params::EquipmentListForBattleSet_C_ExecuteUbergraph_EquipmentListForBattleSet Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UEquipmentListForBattleSet_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentListForBattleSet_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.BndEvt__EquipmentListForBattleSet_BtnScreenForFilterSelector_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UEquipmentListForBattleSet_C::BndEvt__EquipmentListForBattleSet_BtnScreenForFilterSelector_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentListForBattleSet_C", "BndEvt__EquipmentListForBattleSet_BtnScreenForFilterSelector_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.BndEvt__EquipmentListForBattleSet_CancelBtn_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UEquipmentListForBattleSet_C::BndEvt__EquipmentListForBattleSet_CancelBtn_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentListForBattleSet_C", "BndEvt__EquipmentListForBattleSet_CancelBtn_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.BndEvt__EquipmentListForBattleSet_FilterButton_Storage_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UEquipmentListForBattleSet_C::BndEvt__EquipmentListForBattleSet_FilterButton_Storage_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentListForBattleSet_C", "BndEvt__EquipmentListForBattleSet_FilterButton_Storage_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.BndEvt__EquipmentListForBattleSet_FilterButton_Bag_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UEquipmentListForBattleSet_C::BndEvt__EquipmentListForBattleSet_FilterButton_Bag_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentListForBattleSet_C", "BndEvt__EquipmentListForBattleSet_FilterButton_Bag_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.BndEvt__EquipmentListForBattleSet_FilterSelector_K2Node_ComponentBoundEvent_4_OnClose__DelegateSignature
// (BlueprintEvent)

void UEquipmentListForBattleSet_C::BndEvt__EquipmentListForBattleSet_FilterSelector_K2Node_ComponentBoundEvent_4_OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentListForBattleSet_C", "BndEvt__EquipmentListForBattleSet_FilterSelector_K2Node_ComponentBoundEvent_4_OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.BndEvt__EquipmentListForBattleSet_FilterSelector_K2Node_ComponentBoundEvent_3_OnFilterApply__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// TArray<struct FFilterGroup>             Filters                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UEquipmentListForBattleSet_C::BndEvt__EquipmentListForBattleSet_FilterSelector_K2Node_ComponentBoundEvent_3_OnFilterApply__DelegateSignature(TArray<struct FFilterGroup>& Filters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentListForBattleSet_C", "BndEvt__EquipmentListForBattleSet_FilterSelector_K2Node_ComponentBoundEvent_3_OnFilterApply__DelegateSignature");

	Params::EquipmentListForBattleSet_C_BndEvt__EquipmentListForBattleSet_FilterSelector_K2Node_ComponentBoundEvent_3_OnFilterApply__DelegateSignature Parms{};

	Parms.Filters = std::move(Filters);

	UObject::ProcessEvent(Func, &Parms);

	Filters = std::move(Parms.Filters);
}


// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.BndEvt__EquipmentListForBattleSet_BtnEquipChange_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UEquipmentListForBattleSet_C::BndEvt__EquipmentListForBattleSet_BtnEquipChange_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentListForBattleSet_C", "BndEvt__EquipmentListForBattleSet_BtnEquipChange_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.BndEvt__EquipmentListForBattleSet_BtnFilter_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UEquipmentListForBattleSet_C::BndEvt__EquipmentListForBattleSet_BtnFilter_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentListForBattleSet_C", "BndEvt__EquipmentListForBattleSet_BtnFilter_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UEquipmentListForBattleSet_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentListForBattleSet_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.OnItemIconBtnSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemIconBtn_C*                   SelectItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentListForBattleSet_C::OnItemIconBtnSelected(class UItemIconBtn_C* SelectItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentListForBattleSet_C", "OnItemIconBtnSelected");

	Params::EquipmentListForBattleSet_C_OnItemIconBtnSelected Parms{};

	Parms.SelectItem = SelectItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.BndEvt__EquipmentListForBattleSet_SortBox_K2Node_ComponentBoundEvent_0_OnSelectSortType__DelegateSignature
// (BlueprintEvent)
// Parameters:
// ESBItemSortType                         Param_SortType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentListForBattleSet_C::BndEvt__EquipmentListForBattleSet_SortBox_K2Node_ComponentBoundEvent_0_OnSelectSortType__DelegateSignature(ESBItemSortType Param_SortType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentListForBattleSet_C", "BndEvt__EquipmentListForBattleSet_SortBox_K2Node_ComponentBoundEvent_0_OnSelectSortType__DelegateSignature");

	Params::EquipmentListForBattleSet_C_BndEvt__EquipmentListForBattleSet_SortBox_K2Node_ComponentBoundEvent_0_OnSelectSortType__DelegateSignature Parms{};

	Parms.Param_SortType = Param_SortType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BattleSetInfoType                     InBattleSetInfoType                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBCharaEquipType                       InEquipType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InIsStorageMode                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentListForBattleSet_C::Init(E_BattleSetInfoType InBattleSetInfoType, ESBCharaEquipType InEquipType, bool InIsStorageMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentListForBattleSet_C", "Init");

	Params::EquipmentListForBattleSet_C_Init Parms{};

	Parms.InBattleSetInfoType = InBattleSetInfoType;
	Parms.InEquipType = InEquipType;
	Parms.InIsStorageMode = InIsStorageMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.UpdateOwnItemListContainer
// (Public, BlueprintCallable, BlueprintEvent)

void UEquipmentListForBattleSet_C::UpdateOwnItemListContainer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentListForBattleSet_C", "UpdateOwnItemListContainer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.CreateList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BattleSetInfoType                     InInfoType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentListForBattleSet_C::CreateList(E_BattleSetInfoType InInfoType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentListForBattleSet_C", "CreateList");

	Params::EquipmentListForBattleSet_C_CreateList Parms{};

	Parms.InInfoType = InInfoType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.InitListSetting
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BattleSetInfoType                     InInfoType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InIgnoreSortAndFilterInit                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentListForBattleSet_C::InitListSetting(E_BattleSetInfoType InInfoType, bool InIgnoreSortAndFilterInit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentListForBattleSet_C", "InitListSetting");

	Params::EquipmentListForBattleSet_C_InitListSetting Parms{};

	Parms.InInfoType = InInfoType;
	Parms.InIgnoreSortAndFilterInit = InIgnoreSortAndFilterInit;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.SortList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UEquipmentListForBattleSet_C::SortList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentListForBattleSet_C", "SortList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.HideListItemAll
// (Public, BlueprintCallable, BlueprintEvent)

void UEquipmentListForBattleSet_C::HideListItemAll()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentListForBattleSet_C", "HideListItemAll");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.ResetSelectedIconAll
// (Public, BlueprintCallable, BlueprintEvent)

void UEquipmentListForBattleSet_C::ResetSelectedIconAll()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentListForBattleSet_C", "ResetSelectedIconAll");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.SetIsEquipChangeBtnEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsEnabled                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentListForBattleSet_C::SetIsEquipChangeBtnEnabled(bool InIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentListForBattleSet_C", "SetIsEquipChangeBtnEnabled");

	Params::EquipmentListForBattleSet_C_SetIsEquipChangeBtnEnabled Parms{};

	Parms.InIsEnabled = InIsEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.ChangeFilterType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFilter_Type                            InFilterType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentListForBattleSet_C::ChangeFilterType(EFilter_Type InFilterType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentListForBattleSet_C", "ChangeFilterType");

	Params::EquipmentListForBattleSet_C_ChangeFilterType Parms{};

	Parms.InFilterType = InFilterType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.SetListVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility                        InVisibility                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentListForBattleSet_C::SetListVisibility(ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentListForBattleSet_C", "SetListVisibility");

	Params::EquipmentListForBattleSet_C_SetListVisibility Parms{};

	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.SetStorageMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsForStorage                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentListForBattleSet_C::SetStorageMode(bool InIsForStorage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentListForBattleSet_C", "SetStorageMode");

	Params::EquipmentListForBattleSet_C_SetStorageMode Parms{};

	Parms.InIsForStorage = InIsForStorage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.PlayListInAnimForward
// (Public, BlueprintCallable, BlueprintEvent)

void UEquipmentListForBattleSet_C::PlayListInAnimForward()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentListForBattleSet_C", "PlayListInAnimForward");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.PlayListInAnimReverse
// (Public, BlueprintCallable, BlueprintEvent)

void UEquipmentListForBattleSet_C::PlayListInAnimReverse()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentListForBattleSet_C", "PlayListInAnimReverse");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.ChangeActiveWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsFilterSelectorWindowActive                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InDoAnimation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentListForBattleSet_C::ChangeActiveWindow(bool InIsFilterSelectorWindowActive, bool InDoAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentListForBattleSet_C", "ChangeActiveWindow");

	Params::EquipmentListForBattleSet_C_ChangeActiveWindow Parms{};

	Parms.InIsFilterSelectorWindowActive = InIsFilterSelectorWindowActive;
	Parms.InDoAnimation = InDoAnimation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.IsFilterSelectorOpened
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    OutIsOpened                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentListForBattleSet_C::IsFilterSelectorOpened(bool* OutIsOpened)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentListForBattleSet_C", "IsFilterSelectorOpened");

	Params::EquipmentListForBattleSet_C_IsFilterSelectorOpened Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsOpened != nullptr)
		*OutIsOpened = Parms.OutIsOpened;
}


// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.SetInfoType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BattleSetInfoType                     InInfoType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentListForBattleSet_C::SetInfoType(E_BattleSetInfoType InInfoType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentListForBattleSet_C", "SetInfoType");

	Params::EquipmentListForBattleSet_C_SetInfoType Parms{};

	Parms.InInfoType = InInfoType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.SetEquipType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBCharaEquipType                       InEquipType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentListForBattleSet_C::SetEquipType(ESBCharaEquipType InEquipType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentListForBattleSet_C", "SetEquipType");

	Params::EquipmentListForBattleSet_C_SetEquipType Parms{};

	Parms.InEquipType = InEquipType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.GetEquipType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBCharaEquipType                       OutEquipType                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentListForBattleSet_C::GetEquipType(ESBCharaEquipType* OutEquipType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentListForBattleSet_C", "GetEquipType");

	Params::EquipmentListForBattleSet_C_GetEquipType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutEquipType != nullptr)
		*OutEquipType = Parms.OutEquipType;
}


// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.ExtractInnerImagineEquipPositionFlagByEquipType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBCharaEquipType                       InEquipType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InEquipPosition1                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InEquipPosition2                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InEquipPosition3                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InEquipPosition4                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InEquipPosition5                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    OutEquipPositionMatch                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentListForBattleSet_C::ExtractInnerImagineEquipPositionFlagByEquipType(ESBCharaEquipType InEquipType, bool InEquipPosition1, bool InEquipPosition2, bool InEquipPosition3, bool InEquipPosition4, bool InEquipPosition5, bool* OutEquipPositionMatch)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentListForBattleSet_C", "ExtractInnerImagineEquipPositionFlagByEquipType");

	Params::EquipmentListForBattleSet_C_ExtractInnerImagineEquipPositionFlagByEquipType Parms{};

	Parms.InEquipType = InEquipType;
	Parms.InEquipPosition1 = InEquipPosition1;
	Parms.InEquipPosition2 = InEquipPosition2;
	Parms.InEquipPosition3 = InEquipPosition3;
	Parms.InEquipPosition4 = InEquipPosition4;
	Parms.InEquipPosition5 = InEquipPosition5;

	UObject::ProcessEvent(Func, &Parms);

	if (OutEquipPositionMatch != nullptr)
		*OutEquipPositionMatch = Parms.OutEquipPositionMatch;
}


// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.SetFilterBtnSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsFilterBtnStorageSelected                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentListForBattleSet_C::SetFilterBtnSelected(bool InIsFilterBtnStorageSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentListForBattleSet_C", "SetFilterBtnSelected");

	Params::EquipmentListForBattleSet_C_SetFilterBtnSelected Parms{};

	Parms.InIsFilterBtnStorageSelected = InIsFilterBtnStorageSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.SwitchEquipmentIconListBody
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsEquipmentIconListBodyEmpty                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentListForBattleSet_C::SwitchEquipmentIconListBody(bool InIsEquipmentIconListBodyEmpty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentListForBattleSet_C", "SwitchEquipmentIconListBody");

	Params::EquipmentListForBattleSet_C_SwitchEquipmentIconListBody Parms{};

	Parms.InIsEquipmentIconListBodyEmpty = InIsEquipmentIconListBodyEmpty;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.SetEquipmentIconSelectedByUniqueId
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InEquipmentUinqueId                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UEquipmentListForBattleSet_C::SetEquipmentIconSelectedByUniqueId(const class FString& InEquipmentUinqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentListForBattleSet_C", "SetEquipmentIconSelectedByUniqueId");

	Params::EquipmentListForBattleSet_C_SetEquipmentIconSelectedByUniqueId Parms{};

	Parms.InEquipmentUinqueId = std::move(InEquipmentUinqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.CheckIfSelectedEquipmentIsEquipped
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           InEquipmentUniqueId                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESBCharaEquipType                       InEquipType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OutIsEquipped                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentListForBattleSet_C::CheckIfSelectedEquipmentIsEquipped(const class FString& InEquipmentUniqueId, ESBCharaEquipType InEquipType, bool* OutIsEquipped)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentListForBattleSet_C", "CheckIfSelectedEquipmentIsEquipped");

	Params::EquipmentListForBattleSet_C_CheckIfSelectedEquipmentIsEquipped Parms{};

	Parms.InEquipmentUniqueId = std::move(InEquipmentUniqueId);
	Parms.InEquipType = InEquipType;

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsEquipped != nullptr)
		*OutIsEquipped = Parms.OutIsEquipped;
}


// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.PlayFilterSelectorAnimInOrOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InPlayAnimIn                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentListForBattleSet_C::PlayFilterSelectorAnimInOrOut(bool InPlayAnimIn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentListForBattleSet_C", "PlayFilterSelectorAnimInOrOut");

	Params::EquipmentListForBattleSet_C_PlayFilterSelectorAnimInOrOut Parms{};

	Parms.InPlayAnimIn = InPlayAnimIn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.IsFilterSelectorAnimInfOutPlaying
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    OutIsPlaying                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentListForBattleSet_C::IsFilterSelectorAnimInfOutPlaying(bool* OutIsPlaying)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentListForBattleSet_C", "IsFilterSelectorAnimInfOutPlaying");

	Params::EquipmentListForBattleSet_C_IsFilterSelectorAnimInfOutPlaying Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsPlaying != nullptr)
		*OutIsPlaying = Parms.OutIsPlaying;
}


// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.SetFilterPosition
// (Public, BlueprintCallable, BlueprintEvent)

void UEquipmentListForBattleSet_C::SetFilterPosition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentListForBattleSet_C", "SetFilterPosition");

	UObject::ProcessEvent(Func, nullptr);
}

}

