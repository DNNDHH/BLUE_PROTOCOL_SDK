#pragma once

 

// Package: BaseInventory

#include "Basic.hpp"

#include "BaseInventory_classes.hpp"
#include "BaseInventory_parameters.hpp"


namespace SDK
{

// Function BaseInventory.BaseInventory_C.OnClickedButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EDescripionButtonType                   Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBaseInventory_C::OnClickedButton__DelegateSignature(EDescripionButtonType Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseInventory_C", "OnClickedButton__DelegateSignature");

	Params::BaseInventory_C_OnClickedButton__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BaseInventory.BaseInventory_C.OnClickedItemButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryData                   Param_InventoryData                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UBaseInventory_C::OnClickedItemButton__DelegateSignature(const struct FInventoryData& Param_InventoryData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseInventory_C", "OnClickedItemButton__DelegateSignature");

	Params::BaseInventory_C_OnClickedItemButton__DelegateSignature Parms{};

	Parms.Param_InventoryData = std::move(Param_InventoryData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BaseInventory.BaseInventory_C.OnClickedItemRightButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemIconBtn_C*                   SelectButton                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryData                   Param_InventoryData                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UBaseInventory_C::OnClickedItemRightButton__DelegateSignature(class UItemIconBtn_C* SelectButton, const struct FInventoryData& Param_InventoryData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseInventory_C", "OnClickedItemRightButton__DelegateSignature");

	Params::BaseInventory_C_OnClickedItemRightButton__DelegateSignature Parms{};

	Parms.SelectButton = SelectButton;
	Parms.Param_InventoryData = std::move(Param_InventoryData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BaseInventory.BaseInventory_C.OnPressItemButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemIconBtn_C*                   SelectButton                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryData                   Param_InventoryData                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UBaseInventory_C::OnPressItemButton__DelegateSignature(class UItemIconBtn_C* SelectButton, const struct FInventoryData& Param_InventoryData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseInventory_C", "OnPressItemButton__DelegateSignature");

	Params::BaseInventory_C_OnPressItemButton__DelegateSignature Parms{};

	Parms.SelectButton = SelectButton;
	Parms.Param_InventoryData = std::move(Param_InventoryData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BaseInventory.BaseInventory_C.OnComboChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBaseInventory_C::OnComboChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseInventory_C", "OnComboChanged__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BaseInventory.BaseInventory_C.OnRefreshRegisterRequest__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBaseInventory_C::OnRefreshRegisterRequest__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseInventory_C", "OnRefreshRegisterRequest__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BaseInventory.BaseInventory_C.ExecuteUbergraph_BaseInventory
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBaseInventory_C::ExecuteUbergraph_BaseInventory(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseInventory_C", "ExecuteUbergraph_BaseInventory");

	Params::BaseInventory_C_ExecuteUbergraph_BaseInventory Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BaseInventory.BaseInventory_C.BndEvt__BaseInventory_CommonPagerWidget_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   PageCurrent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBaseInventory_C::BndEvt__BaseInventory_CommonPagerWidget_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature(int32 PageCurrent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseInventory_C", "BndEvt__BaseInventory_CommonPagerWidget_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature");

	Params::BaseInventory_C_BndEvt__BaseInventory_CommonPagerWidget_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature Parms{};

	Parms.PageCurrent = PageCurrent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BaseInventory.BaseInventory_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void UBaseInventory_C::CustomEvent_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseInventory_C", "CustomEvent_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BaseInventory.BaseInventory_C.ScrollVisibleUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Offset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBaseInventory_C::ScrollVisibleUpdate(float Offset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseInventory_C", "ScrollVisibleUpdate");

	Params::BaseInventory_C_ScrollVisibleUpdate Parms{};

	Parms.Offset = Offset;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BaseInventory.BaseInventory_C.InventoryScrollStart
// (BlueprintCallable, BlueprintEvent)

void UBaseInventory_C::InventoryScrollStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseInventory_C", "InventoryScrollStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BaseInventory.BaseInventory_C.BndEvt__BaseInventory_ScrollBox_0_K2Node_ComponentBoundEvent_3_OnUserScrolledEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   CurrentOffset                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBaseInventory_C::BndEvt__BaseInventory_ScrollBox_0_K2Node_ComponentBoundEvent_3_OnUserScrolledEvent__DelegateSignature(float CurrentOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseInventory_C", "BndEvt__BaseInventory_ScrollBox_0_K2Node_ComponentBoundEvent_3_OnUserScrolledEvent__DelegateSignature");

	Params::BaseInventory_C_BndEvt__BaseInventory_ScrollBox_0_K2Node_ComponentBoundEvent_3_OnUserScrolledEvent__DelegateSignature Parms{};

	Parms.CurrentOffset = CurrentOffset;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BaseInventory.BaseInventory_C.UpdateSortComboBox
// (BlueprintCallable, BlueprintEvent)

void UBaseInventory_C::UpdateSortComboBox()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseInventory_C", "UpdateSortComboBox");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BaseInventory.BaseInventory_C.UpdateFilterComboBox
// (BlueprintCallable, BlueprintEvent)

void UBaseInventory_C::UpdateFilterComboBox()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseInventory_C", "UpdateFilterComboBox");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BaseInventory.BaseInventory_C.UpdateFilterButton
// (BlueprintCallable, BlueprintEvent)

void UBaseInventory_C::UpdateFilterButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseInventory_C", "UpdateFilterButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BaseInventory.BaseInventory_C.BndEvt__FilterButton_K2Node_ComponentBoundEvent_2_OnApplyFilter__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// TArray<struct FFilterGroup>             Param_Filters                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBaseInventory_C::BndEvt__FilterButton_K2Node_ComponentBoundEvent_2_OnApplyFilter__DelegateSignature(TArray<struct FFilterGroup>& Param_Filters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseInventory_C", "BndEvt__FilterButton_K2Node_ComponentBoundEvent_2_OnApplyFilter__DelegateSignature");

	Params::BaseInventory_C_BndEvt__FilterButton_K2Node_ComponentBoundEvent_2_OnApplyFilter__DelegateSignature Parms{};

	Parms.Param_Filters = std::move(Param_Filters);

	UObject::ProcessEvent(Func, &Parms);

	Param_Filters = std::move(Parms.Param_Filters);
}


// Function BaseInventory.BaseInventory_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryData                   OnItemClick                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UBaseInventory_C::CustomEvent_0(const struct FInventoryData& OnItemClick)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseInventory_C", "CustomEvent_0");

	Params::BaseInventory_C_CustomEvent_0 Parms{};

	Parms.OnItemClick = std::move(OnItemClick);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BaseInventory.BaseInventory_C.Event_PressItemEnable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemIconBtn_C*                   Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBaseInventory_C::Event_PressItemEnable(class UItemIconBtn_C* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseInventory_C", "Event_PressItemEnable");

	Params::BaseInventory_C_Event_PressItemEnable Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BaseInventory.BaseInventory_C.RecastTimeIconUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bIsRecastTime                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBaseInventory_C::RecastTimeIconUpdate(bool Param_bIsRecastTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseInventory_C", "RecastTimeIconUpdate");

	Params::BaseInventory_C_RecastTimeIconUpdate Parms{};

	Parms.Param_bIsRecastTime = Param_bIsRecastTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BaseInventory.BaseInventory_C.BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESelectInfo                             SelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBaseInventory_C::BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseInventory_C", "BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature");

	Params::BaseInventory_C_BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature Parms{};

	Parms.SelectedItem = std::move(SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BaseInventory.BaseInventory_C.BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESelectInfo                             SelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBaseInventory_C::BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseInventory_C", "BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");

	Params::BaseInventory_C_BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature Parms{};

	Parms.SelectedItem = std::move(SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BaseInventory.BaseInventory_C.UnbindDelegate
// (BlueprintCallable, BlueprintEvent)

void UBaseInventory_C::UnbindDelegate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseInventory_C", "UnbindDelegate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BaseInventory.BaseInventory_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBaseInventory_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseInventory_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BaseInventory.BaseInventory_C.OnRefleshWithNoAnim
// (BlueprintCallable, BlueprintEvent)

void UBaseInventory_C::OnRefleshWithNoAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseInventory_C", "OnRefleshWithNoAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BaseInventory.BaseInventory_C.OnRefleshFromRegister
// (BlueprintCallable, BlueprintEvent)

void UBaseInventory_C::OnRefleshFromRegister()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseInventory_C", "OnRefleshFromRegister");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BaseInventory.BaseInventory_C.ChangeCategory
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EInventoryType                          Param_Inventory                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBaseInventory_C::ChangeCategory(EInventoryType Param_Inventory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseInventory_C", "ChangeCategory");

	Params::BaseInventory_C_ChangeCategory Parms{};

	Parms.Param_Inventory = Param_Inventory;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BaseInventory.BaseInventory_C.OnSelect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemIconBtn_C*                   SelectItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBaseInventory_C::OnSelect(class UItemIconBtn_C* SelectItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseInventory_C", "OnSelect");

	Params::BaseInventory_C_OnSelect Parms{};

	Parms.SelectItem = SelectItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BaseInventory.BaseInventory_C.OnReflesh
// (BlueprintCallable, BlueprintEvent)

void UBaseInventory_C::OnReflesh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseInventory_C", "OnReflesh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BaseInventory.BaseInventory_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBaseInventory_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseInventory_C", "Tick");

	Params::BaseInventory_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BaseInventory.BaseInventory_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBaseInventory_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseInventory_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BaseInventory.BaseInventory_C.AdjustItemIcons
// (Public, BlueprintCallable, BlueprintEvent)

void UBaseInventory_C::AdjustItemIcons()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseInventory_C", "AdjustItemIcons");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BaseInventory.BaseInventory_C.SelectedAll
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsSelected                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBaseInventory_C::SelectedAll(bool IsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseInventory_C", "SelectedAll");

	Params::BaseInventory_C_SelectedAll Parms{};

	Parms.IsSelected = IsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BaseInventory.BaseInventory_C.FindInventoryDataFromIndex
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ItemIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryData                   Array_Element                                          (Parm, OutParm, HasGetValueTypeHash)

void UBaseInventory_C::FindInventoryDataFromIndex(int32 ItemIndex, struct FInventoryData* Array_Element)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseInventory_C", "FindInventoryDataFromIndex");

	Params::BaseInventory_C_FindInventoryDataFromIndex Parms{};

	Parms.ItemIndex = ItemIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (Array_Element != nullptr)
		*Array_Element = std::move(Parms.Array_Element);
}


// Function BaseInventory.BaseInventory_C.SetRegisterMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsRegisterMode                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBaseInventory_C::SetRegisterMode(bool bIsRegisterMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseInventory_C", "SetRegisterMode");

	Params::BaseInventory_C_SetRegisterMode Parms{};

	Parms.bIsRegisterMode = bIsRegisterMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BaseInventory.BaseInventory_C.FindInventoryDataFromUniqueId
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InUniqueId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FInventoryData                   OutInventoryData                                       (Parm, OutParm, HasGetValueTypeHash)

void UBaseInventory_C::FindInventoryDataFromUniqueId(const class FString& InUniqueId, struct FInventoryData* OutInventoryData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseInventory_C", "FindInventoryDataFromUniqueId");

	Params::BaseInventory_C_FindInventoryDataFromUniqueId Parms{};

	Parms.InUniqueId = std::move(InUniqueId);

	UObject::ProcessEvent(Func, &Parms);

	if (OutInventoryData != nullptr)
		*OutInventoryData = std::move(Parms.OutInventoryData);
}


// Function BaseInventory.BaseInventory_C.CheckSlotIconTextureLoadProgress
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    OutIsLoadFinished                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBaseInventory_C::CheckSlotIconTextureLoadProgress(bool* OutIsLoadFinished)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseInventory_C", "CheckSlotIconTextureLoadProgress");

	Params::BaseInventory_C_CheckSlotIconTextureLoadProgress Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsLoadFinished != nullptr)
		*OutIsLoadFinished = Parms.OutIsLoadFinished;
}


// Function BaseInventory.BaseInventory_C.NeedItemVisible
// (Public, BlueprintCallable, BlueprintEvent)

void UBaseInventory_C::NeedItemVisible()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseInventory_C", "NeedItemVisible");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BaseInventory.BaseInventory_C.UpdateLockInventory
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSBLockItemData>          LockItems                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBaseInventory_C::UpdateLockInventory(TArray<struct FSBLockItemData>& LockItems)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseInventory_C", "UpdateLockInventory");

	Params::BaseInventory_C_UpdateLockInventory Parms{};

	Parms.LockItems = std::move(LockItems);

	UObject::ProcessEvent(Func, &Parms);

	LockItems = std::move(Parms.LockItems);
}


// Function BaseInventory.BaseInventory_C.IconAnimInPlay
// (Public, BlueprintCallable, BlueprintEvent)

void UBaseInventory_C::IconAnimInPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseInventory_C", "IconAnimInPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BaseInventory.BaseInventory_C.On_ComboBoxString_Filter_GenerateWidget_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBaseInventory_C::On_ComboBoxString_Filter_GenerateWidget_0(const class FString& Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseInventory_C", "On_ComboBoxString_Filter_GenerateWidget_0");

	Params::BaseInventory_C_On_ComboBoxString_Filter_GenerateWidget_0 Parms{};

	Parms.Item = std::move(Item);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BaseInventory.BaseInventory_C.GetSelectItemData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FInventoryItemData               InventoryItemData                                      (Parm, OutParm, HasGetValueTypeHash)

void UBaseInventory_C::GetSelectItemData(struct FInventoryItemData* InventoryItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseInventory_C", "GetSelectItemData");

	Params::BaseInventory_C_GetSelectItemData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (InventoryItemData != nullptr)
		*InventoryItemData = std::move(Parms.InventoryItemData);
}


// Function BaseInventory.BaseInventory_C.SetSelectedItemBtn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           ItemId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBaseInventory_C::SetSelectedItemBtn(const class FString& ItemId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseInventory_C", "SetSelectedItemBtn");

	Params::BaseInventory_C_SetSelectedItemBtn Parms{};

	Parms.ItemId = std::move(ItemId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BaseInventory.BaseInventory_C.SetSelectBlankText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EInventoryType                          Selection                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBaseInventory_C::SetSelectBlankText(EInventoryType Selection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseInventory_C", "SetSelectBlankText");

	Params::BaseInventory_C_SetSelectBlankText Parms{};

	Parms.Selection = Selection;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BaseInventory.BaseInventory_C.SetSelectBlankTextOff
// (Public, BlueprintCallable, BlueprintEvent)

void UBaseInventory_C::SetSelectBlankTextOff()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseInventory_C", "SetSelectBlankTextOff");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BaseInventory.BaseInventory_C.GetSortRule
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBItemSortType                         SortType                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBaseInventory_C::GetSortRule(ESBItemSortType* SortType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseInventory_C", "GetSortRule");

	Params::BaseInventory_C_GetSortRule Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SortType != nullptr)
		*SortType = Parms.SortType;
}


// Function BaseInventory.BaseInventory_C.GetSortMode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   ModeNum                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBaseInventory_C::GetSortMode(int32* ModeNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseInventory_C", "GetSortMode");

	Params::BaseInventory_C_GetSortMode Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ModeNum != nullptr)
		*ModeNum = Parms.ModeNum;
}


// Function BaseInventory.BaseInventory_C.GetFilterType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EItemFilterType                         FilterType                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBaseInventory_C::GetFilterType(EItemFilterType* FilterType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseInventory_C", "GetFilterType");

	Params::BaseInventory_C_GetFilterType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (FilterType != nullptr)
		*FilterType = Parms.FilterType;
}


// Function BaseInventory.BaseInventory_C.GetCategoryModeName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName UBaseInventory_C::GetCategoryModeName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseInventory_C", "GetCategoryModeName");

	Params::BaseInventory_C_GetCategoryModeName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

