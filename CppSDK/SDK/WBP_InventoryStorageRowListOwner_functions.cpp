#pragma once

 

// Package: WBP_InventoryStorageRowListOwner

#include "Basic.hpp"

#include "WBP_InventoryStorageRowListOwner_classes.hpp"
#include "WBP_InventoryStorageRowListOwner_parameters.hpp"


namespace SDK
{

// Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.OnItemClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryData                   Param_OnItemClick                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_InventoryStorageRowListOwner_C::OnItemClick__DelegateSignature(const struct FInventoryData& Param_OnItemClick)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryStorageRowListOwner_C", "OnItemClick__DelegateSignature");

	Params::WBP_InventoryStorageRowListOwner_C_OnItemClick__DelegateSignature Parms{};

	Parms.Param_OnItemClick = std::move(Param_OnItemClick);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.OnItemClickRight__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_InventoryStorageRowListOwner_C::OnItemClickRight__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryStorageRowListOwner_C", "OnItemClickRight__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.ExecuteUbergraph_WBP_InventoryStorageRowListOwner
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryStorageRowListOwner_C::ExecuteUbergraph_WBP_InventoryStorageRowListOwner(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryStorageRowListOwner_C", "ExecuteUbergraph_WBP_InventoryStorageRowListOwner");

	Params::WBP_InventoryStorageRowListOwner_C_ExecuteUbergraph_WBP_InventoryStorageRowListOwner Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.ScrollVisibleUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Offset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryStorageRowListOwner_C::ScrollVisibleUpdate(float Offset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryStorageRowListOwner_C", "ScrollVisibleUpdate");

	Params::WBP_InventoryStorageRowListOwner_C_ScrollVisibleUpdate Parms{};

	Parms.Offset = Offset;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.BndEvt__WBP_InventoryStorageRowListOwner_ScrollBox_0_K2Node_ComponentBoundEvent_4_OnUserScrolledEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   CurrentOffset                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryStorageRowListOwner_C::BndEvt__WBP_InventoryStorageRowListOwner_ScrollBox_0_K2Node_ComponentBoundEvent_4_OnUserScrolledEvent__DelegateSignature(float CurrentOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryStorageRowListOwner_C", "BndEvt__WBP_InventoryStorageRowListOwner_ScrollBox_0_K2Node_ComponentBoundEvent_4_OnUserScrolledEvent__DelegateSignature");

	Params::WBP_InventoryStorageRowListOwner_C_BndEvt__WBP_InventoryStorageRowListOwner_ScrollBox_0_K2Node_ComponentBoundEvent_4_OnUserScrolledEvent__DelegateSignature Parms{};

	Parms.CurrentOffset = CurrentOffset;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.UpdateFilterButton
// (BlueprintCallable, BlueprintEvent)

void UWBP_InventoryStorageRowListOwner_C::UpdateFilterButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryStorageRowListOwner_C", "UpdateFilterButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.UpdateFilterCombo
// (BlueprintCallable, BlueprintEvent)

void UWBP_InventoryStorageRowListOwner_C::UpdateFilterCombo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryStorageRowListOwner_C", "UpdateFilterCombo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.UpdateSortCombo
// (BlueprintCallable, BlueprintEvent)

void UWBP_InventoryStorageRowListOwner_C::UpdateSortCombo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryStorageRowListOwner_C", "UpdateSortCombo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.BndEvt__WBP_InventoryStorageRowListOwner_FilterButton_K2Node_ComponentBoundEvent_3_OnApplyFilter__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// TArray<struct FFilterGroup>             Param_Filters                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_InventoryStorageRowListOwner_C::BndEvt__WBP_InventoryStorageRowListOwner_FilterButton_K2Node_ComponentBoundEvent_3_OnApplyFilter__DelegateSignature(TArray<struct FFilterGroup>& Param_Filters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryStorageRowListOwner_C", "BndEvt__WBP_InventoryStorageRowListOwner_FilterButton_K2Node_ComponentBoundEvent_3_OnApplyFilter__DelegateSignature");

	Params::WBP_InventoryStorageRowListOwner_C_BndEvt__WBP_InventoryStorageRowListOwner_FilterButton_K2Node_ComponentBoundEvent_3_OnApplyFilter__DelegateSignature Parms{};

	Parms.Param_Filters = std::move(Param_Filters);

	UObject::ProcessEvent(Func, &Parms);

	Param_Filters = std::move(Parms.Param_Filters);
}


// Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.Update
// (BlueprintCallable, BlueprintEvent)

void UWBP_InventoryStorageRowListOwner_C::Update()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryStorageRowListOwner_C", "Update");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.Open
// (BlueprintCallable, BlueprintEvent)

void UWBP_InventoryStorageRowListOwner_C::Open()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryStorageRowListOwner_C", "Open");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESelectInfo                             SelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryStorageRowListOwner_C::BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryStorageRowListOwner_C", "BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature");

	Params::WBP_InventoryStorageRowListOwner_C_BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature Parms{};

	Parms.SelectedItem = std::move(SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESelectInfo                             SelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryStorageRowListOwner_C::BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryStorageRowListOwner_C", "BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");

	Params::WBP_InventoryStorageRowListOwner_C_BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature Parms{};

	Parms.SelectedItem = std::move(SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.InitializeComboBox
// (BlueprintCallable, BlueprintEvent)

void UWBP_InventoryStorageRowListOwner_C::InitializeComboBox()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryStorageRowListOwner_C", "InitializeComboBox");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.CustomEvent_3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryData                   ItemData                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UWBP_InventoryStorageRowListItem_C*UpdetaListItem                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryStorageRowListOwner_C::CustomEvent_3(const struct FInventoryData& ItemData, class UWBP_InventoryStorageRowListItem_C* UpdetaListItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryStorageRowListOwner_C", "CustomEvent_3");

	Params::WBP_InventoryStorageRowListOwner_C_CustomEvent_3 Parms{};

	Parms.ItemData = std::move(ItemData);
	Parms.UpdetaListItem = UpdetaListItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryData                   ItemData                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UWBP_InventoryStorageRowListItem_C*UpdetaListItem                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryStorageRowListOwner_C::CustomEvent_2(const struct FInventoryData& ItemData, class UWBP_InventoryStorageRowListItem_C* UpdetaListItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryStorageRowListOwner_C", "CustomEvent_2");

	Params::WBP_InventoryStorageRowListOwner_C_CustomEvent_2 Parms{};

	Parms.ItemData = std::move(ItemData);
	Parms.UpdetaListItem = UpdetaListItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.MultiStart
// (BlueprintCallable, BlueprintEvent)

void UWBP_InventoryStorageRowListOwner_C::MultiStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryStorageRowListOwner_C", "MultiStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.IconAllSelectfalse
// (BlueprintCallable, BlueprintEvent)

void UWBP_InventoryStorageRowListOwner_C::IconAllSelectfalse()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryStorageRowListOwner_C", "IconAllSelectfalse");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.LockIconUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           UniqueId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    bLock                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_InventoryStorageRowListOwner_C::LockIconUpdate(const class FString& UniqueId, bool bLock)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryStorageRowListOwner_C", "LockIconUpdate");

	Params::WBP_InventoryStorageRowListOwner_C_LockIconUpdate Parms{};

	Parms.UniqueId = std::move(UniqueId);
	Parms.bLock = bLock;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.UpdetaItemList
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBItemSortType                         InSortType                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EItemFilterType                         Param_FilterType                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryStorageRowListOwner_C::UpdetaItemList(const ESBItemSortType InSortType, EItemFilterType Param_FilterType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryStorageRowListOwner_C", "UpdetaItemList");

	Params::WBP_InventoryStorageRowListOwner_C_UpdetaItemList Parms{};

	Parms.InSortType = InSortType;
	Parms.Param_FilterType = Param_FilterType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.ResettingStorageListItem
// (BlueprintCallable, BlueprintEvent)

void UWBP_InventoryStorageRowListOwner_C::ResettingStorageListItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryStorageRowListOwner_C", "ResettingStorageListItem");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.BndEvt__SBButton_C_80_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_InventoryStorageRowListOwner_C::BndEvt__SBButton_C_80_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryStorageRowListOwner_C", "BndEvt__SBButton_C_80_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.AddStorageListItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   CreateDelay                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryStorageRowListOwner_C::AddStorageListItem(float CreateDelay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryStorageRowListOwner_C", "AddStorageListItem");

	Params::WBP_InventoryStorageRowListOwner_C_AddStorageListItem Parms{};

	Parms.CreateDelay = CreateDelay;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.StorageItemGet
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBItemSortType                         InSortType                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EItemFilterType                         InFilter                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryStorageRowListOwner_C::StorageItemGet(const ESBItemSortType InSortType, EItemFilterType InFilter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryStorageRowListOwner_C", "StorageItemGet");

	Params::WBP_InventoryStorageRowListOwner_C_StorageItemGet Parms{};

	Parms.InSortType = InSortType;
	Parms.InFilter = InFilter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_InventoryStorageRowListOwner_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryStorageRowListOwner_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.SetScrollBoxSizeX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   SizeX                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryStorageRowListOwner_C::SetScrollBoxSizeX(float SizeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryStorageRowListOwner_C", "SetScrollBoxSizeX");

	Params::WBP_InventoryStorageRowListOwner_C_SetScrollBoxSizeX Parms{};

	Parms.SizeX = SizeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.RemoveSelectListItems
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_InventoryStorageRowListOwner_C::RemoveSelectListItems()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryStorageRowListOwner_C", "RemoveSelectListItems");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.On_ComboBoxString_Sort_GenerateWidget_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_InventoryStorageRowListOwner_C::On_ComboBoxString_Sort_GenerateWidget_0(const class FString& Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryStorageRowListOwner_C", "On_ComboBoxString_Sort_GenerateWidget_0");

	Params::WBP_InventoryStorageRowListOwner_C_On_ComboBoxString_Sort_GenerateWidget_0 Parms{};

	Parms.Item = std::move(Item);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.SetInventoryUpdeta
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_InventoryStorageRowListOwner_C::SetInventoryUpdeta()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryStorageRowListOwner_C", "SetInventoryUpdeta");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.Create List
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_InventoryStorageRowListOwner_C::Create_List()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryStorageRowListOwner_C", "Create List");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.GetSortMode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   ModeNum                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryStorageRowListOwner_C::GetSortMode(int32* ModeNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryStorageRowListOwner_C", "GetSortMode");

	Params::WBP_InventoryStorageRowListOwner_C_GetSortMode Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ModeNum != nullptr)
		*ModeNum = Parms.ModeNum;
}


// Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.GetFilterType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EItemFilterType                         Param_FilterType                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryStorageRowListOwner_C::GetFilterType(EItemFilterType* Param_FilterType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryStorageRowListOwner_C", "GetFilterType");

	Params::WBP_InventoryStorageRowListOwner_C_GetFilterType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_FilterType != nullptr)
		*Param_FilterType = Parms.Param_FilterType;
}


// Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.GetSortRule
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBItemSortType                         Param_SortType                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryStorageRowListOwner_C::GetSortRule(ESBItemSortType* Param_SortType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryStorageRowListOwner_C", "GetSortRule");

	Params::WBP_InventoryStorageRowListOwner_C_GetSortRule Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_SortType != nullptr)
		*Param_SortType = Parms.Param_SortType;
}

}

