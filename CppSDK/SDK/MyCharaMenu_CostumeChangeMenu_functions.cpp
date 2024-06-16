#pragma once

 

// Package: MyCharaMenu_CostumeChangeMenu

#include "Basic.hpp"

#include "MyCharaMenu_CostumeChangeMenu_classes.hpp"
#include "MyCharaMenu_CostumeChangeMenu_parameters.hpp"


namespace SDK
{

// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.OnSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InItemUniqueId                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UMyCharaMenu_CostumeChangeMenu_C::OnSelected__DelegateSignature(const class FString& InItemUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeChangeMenu_C", "OnSelected__DelegateSignature");

	Params::MyCharaMenu_CostumeChangeMenu_C_OnSelected__DelegateSignature Parms{};

	Parms.InItemUniqueId = std::move(InItemUniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.OnOpenEquipRingHandSelectDialog__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InRingUniqueId                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UMyCharaMenu_CostumeChangeMenu_C::OnOpenEquipRingHandSelectDialog__DelegateSignature(const class FString& InRingUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeChangeMenu_C", "OnOpenEquipRingHandSelectDialog__DelegateSignature");

	Params::MyCharaMenu_CostumeChangeMenu_C_OnOpenEquipRingHandSelectDialog__DelegateSignature Parms{};

	Parms.InRingUniqueId = std::move(InRingUniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.OnOpenUsingUnusedEquipConfirmDialog__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_CostumeChangeMenu_C::OnOpenUsingUnusedEquipConfirmDialog__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeChangeMenu_C", "OnOpenUsingUnusedEquipConfirmDialog__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.OnEndUsingUnusedEquipConfirmDialog__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_CostumeChangeMenu_C::OnEndUsingUnusedEquipConfirmDialog__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeChangeMenu_C", "OnEndUsingUnusedEquipConfirmDialog__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_CostumeChangeMenu_C::ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeChangeMenu_C", "ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu");

	Params::MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.EndUsingUnusedEquipConfirmDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EYesNoDialogResult                      InYesNoResult                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_CostumeChangeMenu_C::EndUsingUnusedEquipConfirmDialog(EYesNoDialogResult InYesNoResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeChangeMenu_C", "EndUsingUnusedEquipConfirmDialog");

	Params::MyCharaMenu_CostumeChangeMenu_C_EndUsingUnusedEquipConfirmDialog Parms{};

	Parms.InYesNoResult = InYesNoResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.BndEvt__AccessoryCategoryTab_K2Node_ComponentBoundEvent_2_OnAccessoryCategoryIconBtnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// E_MyCharaMenu_AccessoryCategory         InAccessoryCategory                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_CostumeChangeMenu_C::BndEvt__AccessoryCategoryTab_K2Node_ComponentBoundEvent_2_OnAccessoryCategoryIconBtnClicked__DelegateSignature(E_MyCharaMenu_AccessoryCategory InAccessoryCategory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeChangeMenu_C", "BndEvt__AccessoryCategoryTab_K2Node_ComponentBoundEvent_2_OnAccessoryCategoryIconBtnClicked__DelegateSignature");

	Params::MyCharaMenu_CostumeChangeMenu_C_BndEvt__AccessoryCategoryTab_K2Node_ComponentBoundEvent_2_OnAccessoryCategoryIconBtnClicked__DelegateSignature Parms{};

	Parms.InAccessoryCategory = InAccessoryCategory;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.OnPress_Cancel
// (Event, Public, BlueprintEvent)

void UMyCharaMenu_CostumeChangeMenu_C::OnPress_Cancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeChangeMenu_C", "OnPress_Cancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.BndEvt__BtnScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMyCharaMenu_CostumeChangeMenu_C::BndEvt__BtnScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeChangeMenu_C", "BndEvt__BtnScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.BndEvt__CostumeCategoryTab_K2Node_ComponentBoundEvent_9_OnCostumeCategoryIconBtnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// E_MyCharaMenu_CostumeCategory           InCostumeCategory                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_CostumeChangeMenu_C::BndEvt__CostumeCategoryTab_K2Node_ComponentBoundEvent_9_OnCostumeCategoryIconBtnClicked__DelegateSignature(E_MyCharaMenu_CostumeCategory InCostumeCategory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeChangeMenu_C", "BndEvt__CostumeCategoryTab_K2Node_ComponentBoundEvent_9_OnCostumeCategoryIconBtnClicked__DelegateSignature");

	Params::MyCharaMenu_CostumeChangeMenu_C_BndEvt__CostumeCategoryTab_K2Node_ComponentBoundEvent_9_OnCostumeCategoryIconBtnClicked__DelegateSignature Parms{};

	Parms.InCostumeCategory = InCostumeCategory;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_CostumeChangeMenu_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeChangeMenu_C", "PreConstruct");

	Params::MyCharaMenu_CostumeChangeMenu_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.BndEvt__SortBox_K2Node_ComponentBoundEvent_8_OnSelectSortType__DelegateSignature
// (BlueprintEvent)
// Parameters:
// ESBItemSortType                         Param_SortType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_CostumeChangeMenu_C::BndEvt__SortBox_K2Node_ComponentBoundEvent_8_OnSelectSortType__DelegateSignature(ESBItemSortType Param_SortType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeChangeMenu_C", "BndEvt__SortBox_K2Node_ComponentBoundEvent_8_OnSelectSortType__DelegateSignature");

	Params::MyCharaMenu_CostumeChangeMenu_C_BndEvt__SortBox_K2Node_ComponentBoundEvent_8_OnSelectSortType__DelegateSignature Parms{};

	Parms.Param_SortType = Param_SortType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.BndEvt__FilterSelectorAccessory_K2Node_ComponentBoundEvent_7_OnClose__DelegateSignature
// (BlueprintEvent)

void UMyCharaMenu_CostumeChangeMenu_C::BndEvt__FilterSelectorAccessory_K2Node_ComponentBoundEvent_7_OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeChangeMenu_C", "BndEvt__FilterSelectorAccessory_K2Node_ComponentBoundEvent_7_OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.BndEvt__FilterSelectorAccessory_K2Node_ComponentBoundEvent_6_OnFilterApply__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// TArray<struct FFilterGroup>             Filters                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMyCharaMenu_CostumeChangeMenu_C::BndEvt__FilterSelectorAccessory_K2Node_ComponentBoundEvent_6_OnFilterApply__DelegateSignature(TArray<struct FFilterGroup>& Filters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeChangeMenu_C", "BndEvt__FilterSelectorAccessory_K2Node_ComponentBoundEvent_6_OnFilterApply__DelegateSignature");

	Params::MyCharaMenu_CostumeChangeMenu_C_BndEvt__FilterSelectorAccessory_K2Node_ComponentBoundEvent_6_OnFilterApply__DelegateSignature Parms{};

	Parms.Filters = std::move(Filters);

	UObject::ProcessEvent(Func, &Parms);

	Filters = std::move(Parms.Filters);
}


// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.BndEvt__FilterSelectorCostume_K2Node_ComponentBoundEvent_5_OnClose__DelegateSignature
// (BlueprintEvent)

void UMyCharaMenu_CostumeChangeMenu_C::BndEvt__FilterSelectorCostume_K2Node_ComponentBoundEvent_5_OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeChangeMenu_C", "BndEvt__FilterSelectorCostume_K2Node_ComponentBoundEvent_5_OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.BndEvt__FilterSelectorCostume_K2Node_ComponentBoundEvent_4_OnFilterApply__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// TArray<struct FFilterGroup>             Filters                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMyCharaMenu_CostumeChangeMenu_C::BndEvt__FilterSelectorCostume_K2Node_ComponentBoundEvent_4_OnFilterApply__DelegateSignature(TArray<struct FFilterGroup>& Filters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeChangeMenu_C", "BndEvt__FilterSelectorCostume_K2Node_ComponentBoundEvent_4_OnFilterApply__DelegateSignature");

	Params::MyCharaMenu_CostumeChangeMenu_C_BndEvt__FilterSelectorCostume_K2Node_ComponentBoundEvent_4_OnFilterApply__DelegateSignature Parms{};

	Parms.Filters = std::move(Filters);

	UObject::ProcessEvent(Func, &Parms);

	Filters = std::move(Parms.Filters);
}


// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.BndEvt__BtnFilter_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMyCharaMenu_CostumeChangeMenu_C::BndEvt__BtnFilter_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeChangeMenu_C", "BndEvt__BtnFilter_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.OnSelect_CandidateItemIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemIconBtn_C*                   InSelectedIcon                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_CostumeChangeMenu_C::OnSelect_CandidateItemIcon(class UItemIconBtn_C* InSelectedIcon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeChangeMenu_C", "OnSelect_CandidateItemIcon");

	Params::MyCharaMenu_CostumeChangeMenu_C_OnSelect_CandidateItemIcon Parms{};

	Parms.InSelectedIcon = InSelectedIcon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMyCharaMenu_CostumeChangeMenu_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeChangeMenu_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMyCharaMenu_CostumeChangeMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeChangeMenu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.ShowUsingUnusedEquipConfirmDialog
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_CostumeChangeMenu_C::ShowUsingUnusedEquipConfirmDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeChangeMenu_C", "ShowUsingUnusedEquipConfirmDialog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.ShowUnchangeableMessageDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValuesInUnchangeableRetValue                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InIsAccessory                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_CostumeChangeMenu_C::ShowUnchangeableMessageDialog(ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValues InUnchangeableRetValue, bool InIsAccessory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeChangeMenu_C", "ShowUnchangeableMessageDialog");

	Params::MyCharaMenu_CostumeChangeMenu_C_ShowUnchangeableMessageDialog Parms{};

	Parms.InUnchangeableRetValue = InUnchangeableRetValue;
	Parms.InIsAccessory = InIsAccessory;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.Close
// (Public, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_CostumeChangeMenu_C::Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeChangeMenu_C", "Close");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.CreateEmptySlotList
// (Public, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_CostumeChangeMenu_C::CreateEmptySlotList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeChangeMenu_C", "CreateEmptySlotList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.Setup List
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBItemSortType                         InSortType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBCharaEquipType                       InEquipType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBCharacterGender                      InGenderType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBClassType                            InClassType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFilterGroup>             InSortFilters                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// E_MyCharaMenu_CostumeCategory           InCostumeCategory                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_MyCharaMenu_AccessoryCategory         InAccessoryCategory                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_CostumeChangeMenu_C::Setup_List(ESBItemSortType InSortType, ESBCharaEquipType InEquipType, ESBCharacterGender InGenderType, ESBClassType InClassType, TArray<struct FFilterGroup>& InSortFilters, E_MyCharaMenu_CostumeCategory InCostumeCategory, E_MyCharaMenu_AccessoryCategory InAccessoryCategory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeChangeMenu_C", "Setup List");

	Params::MyCharaMenu_CostumeChangeMenu_C_Setup_List Parms{};

	Parms.InSortType = InSortType;
	Parms.InEquipType = InEquipType;
	Parms.InGenderType = InGenderType;
	Parms.InClassType = InClassType;
	Parms.InSortFilters = std::move(InSortFilters);
	Parms.InCostumeCategory = InCostumeCategory;
	Parms.InAccessoryCategory = InAccessoryCategory;

	UObject::ProcessEvent(Func, &Parms);

	InSortFilters = std::move(Parms.InSortFilters);
}


// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.CreateInventoryItemData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     InOwnItemInfo                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FInventoryItemData               OutInventoryItemData                                   (Parm, OutParm, HasGetValueTypeHash)

void UMyCharaMenu_CostumeChangeMenu_C::CreateInventoryItemData(const struct FOwnItemInfo& InOwnItemInfo, struct FInventoryItemData* OutInventoryItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeChangeMenu_C", "CreateInventoryItemData");

	Params::MyCharaMenu_CostumeChangeMenu_C_CreateInventoryItemData Parms{};

	Parms.InOwnItemInfo = std::move(InOwnItemInfo);

	UObject::ProcessEvent(Func, &Parms);

	if (OutInventoryItemData != nullptr)
		*OutInventoryItemData = std::move(Parms.OutInventoryItemData);
}


// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.HideAllSlotListItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_CostumeChangeMenu_C::HideAllSlotListItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeChangeMenu_C", "HideAllSlotListItem");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.IsCostumeTypeAccessory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBCharaEquipType                       InEquipType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OutIsAccessory                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_CostumeChangeMenu_C::IsCostumeTypeAccessory(ESBCharaEquipType InEquipType, bool* OutIsAccessory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeChangeMenu_C", "IsCostumeTypeAccessory");

	Params::MyCharaMenu_CostumeChangeMenu_C_IsCostumeTypeAccessory Parms{};

	Parms.InEquipType = InEquipType;

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsAccessory != nullptr)
		*OutIsAccessory = Parms.OutIsAccessory;
}


// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.SetInventory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBOwnItemListContainer*          InOwnItemListContainer                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_CostumeChangeMenu_C::SetInventory(class USBOwnItemListContainer* InOwnItemListContainer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeChangeMenu_C", "SetInventory");

	Params::MyCharaMenu_CostumeChangeMenu_C_SetInventory Parms{};

	Parms.InOwnItemListContainer = InOwnItemListContainer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.GetCurrentSortType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBItemSortType                         OutSortType                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_CostumeChangeMenu_C::GetCurrentSortType(ESBItemSortType* OutSortType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeChangeMenu_C", "GetCurrentSortType");

	Params::MyCharaMenu_CostumeChangeMenu_C_GetCurrentSortType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutSortType != nullptr)
		*OutSortType = Parms.OutSortType;
}


// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.Get Filter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBCharaEquipType                       InCostumeType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFilterGroup>             OutSortFilter                                          (Parm, OutParm)

void UMyCharaMenu_CostumeChangeMenu_C::Get_Filter(ESBCharaEquipType InCostumeType, TArray<struct FFilterGroup>* OutSortFilter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeChangeMenu_C", "Get Filter");

	Params::MyCharaMenu_CostumeChangeMenu_C_Get_Filter Parms{};

	Parms.InCostumeType = InCostumeType;

	UObject::ProcessEvent(Func, &Parms);

	if (OutSortFilter != nullptr)
		*OutSortFilter = std::move(Parms.OutSortFilter);
}


// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.InitSortBox
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_CostumeChangeMenu_C::InitSortBox()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeChangeMenu_C", "InitSortBox");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.ChangeActiveWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsFilterSelectorWindowActive                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InDoAnimation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_CostumeChangeMenu_C::ChangeActiveWindow(bool InIsFilterSelectorWindowActive, bool InDoAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeChangeMenu_C", "ChangeActiveWindow");

	Params::MyCharaMenu_CostumeChangeMenu_C_ChangeActiveWindow Parms{};

	Parms.InIsFilterSelectorWindowActive = InIsFilterSelectorWindowActive;
	Parms.InDoAnimation = InDoAnimation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.SetSelectedCostumeCategory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_MyCharaMenu_CostumeCategory           InCostumeCategory                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_CostumeChangeMenu_C::SetSelectedCostumeCategory(E_MyCharaMenu_CostumeCategory InCostumeCategory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeChangeMenu_C", "SetSelectedCostumeCategory");

	Params::MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategory Parms{};

	Parms.InCostumeCategory = InCostumeCategory;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.GetSelectedCostumeCategory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// E_MyCharaMenu_CostumeCategory           OutCostumeCategory                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_CostumeChangeMenu_C::GetSelectedCostumeCategory(E_MyCharaMenu_CostumeCategory* OutCostumeCategory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeChangeMenu_C", "GetSelectedCostumeCategory");

	Params::MyCharaMenu_CostumeChangeMenu_C_GetSelectedCostumeCategory Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutCostumeCategory != nullptr)
		*OutCostumeCategory = Parms.OutCostumeCategory;
}


// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.GetCostumeTypeFromProtectorCategory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EProtectorCategory                      InProtectorCategory                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsValid                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// ESBCharaEquipType                       OutCostumeType                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_CostumeChangeMenu_C::GetCostumeTypeFromProtectorCategory(EProtectorCategory InProtectorCategory, bool* IsValid, ESBCharaEquipType* OutCostumeType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeChangeMenu_C", "GetCostumeTypeFromProtectorCategory");

	Params::MyCharaMenu_CostumeChangeMenu_C_GetCostumeTypeFromProtectorCategory Parms{};

	Parms.InProtectorCategory = InProtectorCategory;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	if (OutCostumeType != nullptr)
		*OutCostumeType = Parms.OutCostumeType;
}


// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.GetAccessoryCostumeTypeFromAccessoryCategory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// E_MyCharaMenu_AccessoryCategory         InAccessoryCategory                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsValid                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// ESBCharaEquipType                       OutCostumeType                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_CostumeChangeMenu_C::GetAccessoryCostumeTypeFromAccessoryCategory(E_MyCharaMenu_AccessoryCategory InAccessoryCategory, bool* IsValid, ESBCharaEquipType* OutCostumeType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeChangeMenu_C", "GetAccessoryCostumeTypeFromAccessoryCategory");

	Params::MyCharaMenu_CostumeChangeMenu_C_GetAccessoryCostumeTypeFromAccessoryCategory Parms{};

	Parms.InAccessoryCategory = InAccessoryCategory;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	if (OutCostumeType != nullptr)
		*OutCostumeType = Parms.OutCostumeType;
}


// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.SetSelectedCostumeCategoryTitleText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_MyCharaMenu_CostumeCategory           InCostumeCategory                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_MyCharaMenu_AccessoryCategory         InAccessoryCategory                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_CostumeChangeMenu_C::SetSelectedCostumeCategoryTitleText(E_MyCharaMenu_CostumeCategory InCostumeCategory, E_MyCharaMenu_AccessoryCategory InAccessoryCategory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeChangeMenu_C", "SetSelectedCostumeCategoryTitleText");

	Params::MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategoryTitleText Parms{};

	Parms.InCostumeCategory = InCostumeCategory;
	Parms.InAccessoryCategory = InAccessoryCategory;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.UpdateIconSelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCharaEquipInfo                  EquipInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UMyCharaMenu_CostumeChangeMenu_C::UpdateIconSelected(const struct FCharaEquipInfo& EquipInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeChangeMenu_C", "UpdateIconSelected");

	Params::MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected Parms{};

	Parms.EquipInfo = std::move(EquipInfo);

	UObject::ProcessEvent(Func, &Parms);
}

}

