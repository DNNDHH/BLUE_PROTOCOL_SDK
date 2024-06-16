#pragma once

 

// Package: MyCharaMenu_MountImagineList

#include "Basic.hpp"

#include "MyCharaMenu_MountImagineList_classes.hpp"
#include "MyCharaMenu_MountImagineList_parameters.hpp"


namespace SDK
{

// Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.MountImagineChangeClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InUEquipniqueId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UMyCharaMenu_MountImagineList_C::MountImagineChangeClicked__DelegateSignature(const class FString& InUEquipniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_MountImagineList_C", "MountImagineChangeClicked__DelegateSignature");

	Params::MyCharaMenu_MountImagineList_C_MountImagineChangeClicked__DelegateSignature Parms{};

	Parms.InUEquipniqueId = std::move(InUEquipniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.MountImagineChangeRequest__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           UniqueId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UMyCharaMenu_MountImagineList_C::MountImagineChangeRequest__DelegateSignature(const class FString& UniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_MountImagineList_C", "MountImagineChangeRequest__DelegateSignature");

	Params::MyCharaMenu_MountImagineList_C_MountImagineChangeRequest__DelegateSignature Parms{};

	Parms.UniqueId = std::move(UniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.OnHideWindow__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_MountImagineList_C::OnHideWindow__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_MountImagineList_C", "OnHideWindow__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.OnHideFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsChangeRequest                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_MountImagineList_C::OnHideFinished__DelegateSignature(bool IsChangeRequest)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_MountImagineList_C", "OnHideFinished__DelegateSignature");

	Params::MyCharaMenu_MountImagineList_C_OnHideFinished__DelegateSignature Parms{};

	Parms.IsChangeRequest = IsChangeRequest;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.OnMountImagineSelectReleased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_MountImagineList_C::OnMountImagineSelectReleased__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_MountImagineList_C", "OnMountImagineSelectReleased__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.ExecuteUbergraph_MyCharaMenu_MountImagineList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_MountImagineList_C::ExecuteUbergraph_MyCharaMenu_MountImagineList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_MountImagineList_C", "ExecuteUbergraph_MyCharaMenu_MountImagineList");

	Params::MyCharaMenu_MountImagineList_C_ExecuteUbergraph_MyCharaMenu_MountImagineList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMyCharaMenu_MountImagineList_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_MountImagineList_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.BndEvt__MyCharaMenu_MountImagineList_BtnScreenForFilterSelector_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMyCharaMenu_MountImagineList_C::BndEvt__MyCharaMenu_MountImagineList_BtnScreenForFilterSelector_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_MountImagineList_C", "BndEvt__MyCharaMenu_MountImagineList_BtnScreenForFilterSelector_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.BndEvt__MyCharaMenu_MountImagineList_FilterSelector_K2Node_ComponentBoundEvent_6_OnClose__DelegateSignature
// (BlueprintEvent)

void UMyCharaMenu_MountImagineList_C::BndEvt__MyCharaMenu_MountImagineList_FilterSelector_K2Node_ComponentBoundEvent_6_OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_MountImagineList_C", "BndEvt__MyCharaMenu_MountImagineList_FilterSelector_K2Node_ComponentBoundEvent_6_OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.BndEvt__MyCharaMenu_MountImagineList_FilterSelector_K2Node_ComponentBoundEvent_5_OnFilterApply__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// TArray<struct FFilterGroup>             Filters                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMyCharaMenu_MountImagineList_C::BndEvt__MyCharaMenu_MountImagineList_FilterSelector_K2Node_ComponentBoundEvent_5_OnFilterApply__DelegateSignature(TArray<struct FFilterGroup>& Filters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_MountImagineList_C", "BndEvt__MyCharaMenu_MountImagineList_FilterSelector_K2Node_ComponentBoundEvent_5_OnFilterApply__DelegateSignature");

	Params::MyCharaMenu_MountImagineList_C_BndEvt__MyCharaMenu_MountImagineList_FilterSelector_K2Node_ComponentBoundEvent_5_OnFilterApply__DelegateSignature Parms{};

	Parms.Filters = std::move(Filters);

	UObject::ProcessEvent(Func, &Parms);

	Filters = std::move(Parms.Filters);
}


// Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.BndEvt__MyCharaMenu_MountImagineList_FilterSelectorBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMyCharaMenu_MountImagineList_C::BndEvt__MyCharaMenu_MountImagineList_FilterSelectorBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_MountImagineList_C", "BndEvt__MyCharaMenu_MountImagineList_FilterSelectorBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.BndEvt__MyCharaMenu_MountImagineList_CmnClose02_K2Node_ComponentBoundEvent_8_OnClosed__DelegateSignature
// (BlueprintEvent)

void UMyCharaMenu_MountImagineList_C::BndEvt__MyCharaMenu_MountImagineList_CmnClose02_K2Node_ComponentBoundEvent_8_OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_MountImagineList_C", "BndEvt__MyCharaMenu_MountImagineList_CmnClose02_K2Node_ComponentBoundEvent_8_OnClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.EndUsingUnusedEquipConfirmDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EYesNoDialogResult                      InYesNoResult                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_MountImagineList_C::EndUsingUnusedEquipConfirmDialog(EYesNoDialogResult InYesNoResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_MountImagineList_C", "EndUsingUnusedEquipConfirmDialog");

	Params::MyCharaMenu_MountImagineList_C_EndUsingUnusedEquipConfirmDialog Parms{};

	Parms.InYesNoResult = InYesNoResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.BndEvt__SortBox_K2Node_ComponentBoundEvent_4_OnSelectSortType__DelegateSignature
// (BlueprintEvent)
// Parameters:
// ESBItemSortType                         Param_SortType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_MountImagineList_C::BndEvt__SortBox_K2Node_ComponentBoundEvent_4_OnSelectSortType__DelegateSignature(ESBItemSortType Param_SortType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_MountImagineList_C", "BndEvt__SortBox_K2Node_ComponentBoundEvent_4_OnSelectSortType__DelegateSignature");

	Params::MyCharaMenu_MountImagineList_C_BndEvt__SortBox_K2Node_ComponentBoundEvent_4_OnSelectSortType__DelegateSignature Parms{};

	Parms.Param_SortType = Param_SortType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.OnPress_Cancel
// (Event, Public, BlueprintEvent)

void UMyCharaMenu_MountImagineList_C::OnPress_Cancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_MountImagineList_C", "OnPress_Cancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.BndEvt__BtnRemove_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UMyCharaMenu_MountImagineList_C::BndEvt__BtnRemove_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_MountImagineList_C", "BndEvt__BtnRemove_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.OnSelect_ItemIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemIconBtn_C*                   SelectIcon                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_MountImagineList_C::OnSelect_ItemIcon(class UItemIconBtn_C* SelectIcon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_MountImagineList_C", "OnSelect_ItemIcon");

	Params::MyCharaMenu_MountImagineList_C_OnSelect_ItemIcon Parms{};

	Parms.SelectIcon = SelectIcon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.BndEvt__BtnScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMyCharaMenu_MountImagineList_C::BndEvt__BtnScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_MountImagineList_C", "BndEvt__BtnScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UMyCharaMenu_MountImagineList_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_MountImagineList_C", "WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.BndEvt__BtnChange_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UMyCharaMenu_MountImagineList_C::BndEvt__BtnChange_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_MountImagineList_C", "BndEvt__BtnChange_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMyCharaMenu_MountImagineList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_MountImagineList_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.ShowUsingUnusedEquipConfirmDialog
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_MountImagineList_C::ShowUsingUnusedEquipConfirmDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_MountImagineList_C", "ShowUsingUnusedEquipConfirmDialog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.ShowImagineUnchangeableMessageDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValuesInUnchangeableRetValue                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_MountImagineList_C::ShowImagineUnchangeableMessageDialog(ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValues InUnchangeableRetValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_MountImagineList_C", "ShowImagineUnchangeableMessageDialog");

	Params::MyCharaMenu_MountImagineList_C_ShowImagineUnchangeableMessageDialog Parms{};

	Parms.InUnchangeableRetValue = InUnchangeableRetValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.ShowWindow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InUniqueId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UMyCharaMenu_MountImagineList_C::ShowWindow(const class FString& InUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_MountImagineList_C", "ShowWindow");

	Params::MyCharaMenu_MountImagineList_C_ShowWindow Parms{};

	Parms.InUniqueId = std::move(InUniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.HideWindow
// (Public, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_MountImagineList_C::HideWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_MountImagineList_C", "HideWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.CreateSlotList
// (Public, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_MountImagineList_C::CreateSlotList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_MountImagineList_C", "CreateSlotList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.SelectAll
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsSelected                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InDoToAllCreatedItems                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_MountImagineList_C::SelectAll(bool InIsSelected, bool InDoToAllCreatedItems)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_MountImagineList_C", "SelectAll");

	Params::MyCharaMenu_MountImagineList_C_SelectAll Parms{};

	Parms.InIsSelected = InIsSelected;
	Parms.InDoToAllCreatedItems = InDoToAllCreatedItems;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.CreateItemList
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBOwnItemListContainer*          InInventory                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBItemSortType                         InSortType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFilterGroup>             InSortFilters                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMyCharaMenu_MountImagineList_C::CreateItemList(class USBOwnItemListContainer* InInventory, ESBItemSortType InSortType, TArray<struct FFilterGroup>& InSortFilters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_MountImagineList_C", "CreateItemList");

	Params::MyCharaMenu_MountImagineList_C_CreateItemList Parms{};

	Parms.InInventory = InInventory;
	Parms.InSortType = InSortType;
	Parms.InSortFilters = std::move(InSortFilters);

	UObject::ProcessEvent(Func, &Parms);

	InSortFilters = std::move(Parms.InSortFilters);
}


// Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.IsAddMountImagine
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryData                   InInventoryData                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    IsAdd                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_MountImagineList_C::IsAddMountImagine(const struct FInventoryData& InInventoryData, bool* IsAdd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_MountImagineList_C", "IsAddMountImagine");

	Params::MyCharaMenu_MountImagineList_C_IsAddMountImagine Parms{};

	Parms.InInventoryData = std::move(InInventoryData);

	UObject::ProcessEvent(Func, &Parms);

	if (IsAdd != nullptr)
		*IsAdd = Parms.IsAdd;
}


// Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.SetItemIconBtn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryData                   InInventoryData                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                                   InSlotItemId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OutIsIconSet                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_MountImagineList_C::SetItemIconBtn(const struct FInventoryData& InInventoryData, int32 InSlotItemId, bool* OutIsIconSet)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_MountImagineList_C", "SetItemIconBtn");

	Params::MyCharaMenu_MountImagineList_C_SetItemIconBtn Parms{};

	Parms.InInventoryData = std::move(InInventoryData);
	Parms.InSlotItemId = InSlotItemId;

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsIconSet != nullptr)
		*OutIsIconSet = Parms.OutIsIconSet;
}


// Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.CreateInventoryData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     InItemInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FInventoryData                   OutInventryData                                        (Parm, OutParm, HasGetValueTypeHash)
// bool                                    OutIsAdd                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_MountImagineList_C::CreateInventoryData(const struct FOwnItemInfo& InItemInfo, struct FInventoryData* OutInventryData, bool* OutIsAdd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_MountImagineList_C", "CreateInventoryData");

	Params::MyCharaMenu_MountImagineList_C_CreateInventoryData Parms{};

	Parms.InItemInfo = std::move(InItemInfo);

	UObject::ProcessEvent(Func, &Parms);

	if (OutInventryData != nullptr)
		*OutInventryData = std::move(Parms.OutInventryData);

	if (OutIsAdd != nullptr)
		*OutIsAdd = Parms.OutIsAdd;
}


// Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.Update_RemoveBtn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InUniqueId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UMyCharaMenu_MountImagineList_C::Update_RemoveBtn(const class FString& InUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_MountImagineList_C", "Update_RemoveBtn");

	Params::MyCharaMenu_MountImagineList_C_Update_RemoveBtn Parms{};

	Parms.InUniqueId = std::move(InUniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.Update_ChangeBtn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InUniqueId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UMyCharaMenu_MountImagineList_C::Update_ChangeBtn(const class FString& InUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_MountImagineList_C", "Update_ChangeBtn");

	Params::MyCharaMenu_MountImagineList_C_Update_ChangeBtn Parms{};

	Parms.InUniqueId = std::move(InUniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.ChangeMountImagine
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEquip                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InIgnoreUnsusedEquipConfirm                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_MountImagineList_C::ChangeMountImagine(bool IsEquip, bool InIgnoreUnsusedEquipConfirm)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_MountImagineList_C", "ChangeMountImagine");

	Params::MyCharaMenu_MountImagineList_C_ChangeMountImagine Parms{};

	Parms.IsEquip = IsEquip;
	Parms.InIgnoreUnsusedEquipConfirm = InIgnoreUnsusedEquipConfirm;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.IsCloseAnimePlaying
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsPlaying                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_MountImagineList_C::IsCloseAnimePlaying(bool* IsPlaying)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_MountImagineList_C", "IsCloseAnimePlaying");

	Params::MyCharaMenu_MountImagineList_C_IsCloseAnimePlaying Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsPlaying != nullptr)
		*IsPlaying = Parms.IsPlaying;
}


// Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.IsChangeEquip
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValuesResult                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_MountImagineList_C::IsChangeEquip(ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValues* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_MountImagineList_C", "IsChangeEquip");

	Params::MyCharaMenu_MountImagineList_C_IsChangeEquip Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.ChangeEquip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEquip                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_MountImagineList_C::ChangeEquip(bool IsEquip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_MountImagineList_C", "ChangeEquip");

	Params::MyCharaMenu_MountImagineList_C_ChangeEquip Parms{};

	Parms.IsEquip = IsEquip;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.InitSortBox
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_MountImagineList_C::InitSortBox()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_MountImagineList_C", "InitSortBox");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.SortList
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBOwnItemListContainer*          InOwnItemListContainer                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBItemSortType                         InSortType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFilterGroup>             InSortFilters                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   OutCandidateItemCnt                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_MountImagineList_C::SortList(class USBOwnItemListContainer* InOwnItemListContainer, ESBItemSortType InSortType, TArray<struct FFilterGroup>& InSortFilters, int32* OutCandidateItemCnt)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_MountImagineList_C", "SortList");

	Params::MyCharaMenu_MountImagineList_C_SortList Parms{};

	Parms.InOwnItemListContainer = InOwnItemListContainer;
	Parms.InSortType = InSortType;
	Parms.InSortFilters = std::move(InSortFilters);

	UObject::ProcessEvent(Func, &Parms);

	InSortFilters = std::move(Parms.InSortFilters);

	if (OutCandidateItemCnt != nullptr)
		*OutCandidateItemCnt = Parms.OutCandidateItemCnt;
}


// Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.HideAllSlotListItem
// (Public, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_MountImagineList_C::HideAllSlotListItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_MountImagineList_C", "HideAllSlotListItem");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.ChangeActiveWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsFilterSelectorWindowActive                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InDoAnimation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_MountImagineList_C::ChangeActiveWindow(bool InIsFilterSelectorWindowActive, bool InDoAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_MountImagineList_C", "ChangeActiveWindow");

	Params::MyCharaMenu_MountImagineList_C_ChangeActiveWindow Parms{};

	Parms.InIsFilterSelectorWindowActive = InIsFilterSelectorWindowActive;
	Parms.InDoAnimation = InDoAnimation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.PlayFilterSelectorAnimInOrOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InPlayAnimIn                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_MountImagineList_C::PlayFilterSelectorAnimInOrOut(bool InPlayAnimIn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_MountImagineList_C", "PlayFilterSelectorAnimInOrOut");

	Params::MyCharaMenu_MountImagineList_C_PlayFilterSelectorAnimInOrOut Parms{};

	Parms.InPlayAnimIn = InPlayAnimIn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.ClearSlotList
// (Public, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_MountImagineList_C::ClearSlotList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_MountImagineList_C", "ClearSlotList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.SetBtnChangeEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInIsEnabled                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_MountImagineList_C::SetBtnChangeEnabled(bool bInIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_MountImagineList_C", "SetBtnChangeEnabled");

	Params::MyCharaMenu_MountImagineList_C_SetBtnChangeEnabled Parms{};

	Parms.bInIsEnabled = bInIsEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.SetBtnRemoveEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInIsEnabled                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_MountImagineList_C::SetBtnRemoveEnabled(bool bInIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_MountImagineList_C", "SetBtnRemoveEnabled");

	Params::MyCharaMenu_MountImagineList_C_SetBtnRemoveEnabled Parms{};

	Parms.bInIsEnabled = bInIsEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.ResetUiSupportKye
// (Public, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_MountImagineList_C::ResetUiSupportKye()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_MountImagineList_C", "ResetUiSupportKye");

	UObject::ProcessEvent(Func, nullptr);
}

}

