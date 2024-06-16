#pragma once

 

// Package: WBP_InventoryStorageRowListItem

#include "Basic.hpp"

#include "WBP_InventoryStorageRowListItem_classes.hpp"
#include "WBP_InventoryStorageRowListItem_parameters.hpp"


namespace SDK
{

// Function WBP_InventoryStorageRowListItem.WBP_InventoryStorageRowListItem_C.OnItemClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryData                   Param_ItemData                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UWBP_InventoryStorageRowListItem_C*UpdetaListItem                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryStorageRowListItem_C::OnItemClick__DelegateSignature(const struct FInventoryData& Param_ItemData, class UWBP_InventoryStorageRowListItem_C* UpdetaListItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryStorageRowListItem_C", "OnItemClick__DelegateSignature");

	Params::WBP_InventoryStorageRowListItem_C_OnItemClick__DelegateSignature Parms{};

	Parms.Param_ItemData = std::move(Param_ItemData);
	Parms.UpdetaListItem = UpdetaListItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryStorageRowListItem.WBP_InventoryStorageRowListItem_C.OnItemClickRight__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryData                   Param_ItemData                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UWBP_InventoryStorageRowListItem_C*UpdetaListItem                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryStorageRowListItem_C::OnItemClickRight__DelegateSignature(const struct FInventoryData& Param_ItemData, class UWBP_InventoryStorageRowListItem_C* UpdetaListItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryStorageRowListItem_C", "OnItemClickRight__DelegateSignature");

	Params::WBP_InventoryStorageRowListItem_C_OnItemClickRight__DelegateSignature Parms{};

	Parms.Param_ItemData = std::move(Param_ItemData);
	Parms.UpdetaListItem = UpdetaListItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryStorageRowListItem.WBP_InventoryStorageRowListItem_C.ExecuteUbergraph_WBP_InventoryStorageRowListItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryStorageRowListItem_C::ExecuteUbergraph_WBP_InventoryStorageRowListItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryStorageRowListItem_C", "ExecuteUbergraph_WBP_InventoryStorageRowListItem");

	Params::WBP_InventoryStorageRowListItem_C_ExecuteUbergraph_WBP_InventoryStorageRowListItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryStorageRowListItem.WBP_InventoryStorageRowListItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_InventoryStorageRowListItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryStorageRowListItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryStorageRowListItem.WBP_InventoryStorageRowListItem_C.UpdetaLockIcon
// (BlueprintCallable, BlueprintEvent)

void UWBP_InventoryStorageRowListItem_C::UpdetaLockIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryStorageRowListItem_C", "UpdetaLockIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryStorageRowListItem.WBP_InventoryStorageRowListItem_C.BndEvt__SBButton_ItemName_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_InventoryStorageRowListItem_C::BndEvt__SBButton_ItemName_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryStorageRowListItem_C", "BndEvt__SBButton_ItemName_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryStorageRowListItem.WBP_InventoryStorageRowListItem_C.InitializeItemData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InItemIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   StorageAmount                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryData                   InventoryData                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_InventoryStorageRowListItem_C::InitializeItemData(int32 InItemIndex, int32 StorageAmount, const struct FInventoryData& InventoryData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryStorageRowListItem_C", "InitializeItemData");

	Params::WBP_InventoryStorageRowListItem_C_InitializeItemData Parms{};

	Parms.InItemIndex = InItemIndex;
	Parms.StorageAmount = StorageAmount;
	Parms.InventoryData = std::move(InventoryData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryStorageRowListItem.WBP_InventoryStorageRowListItem_C.SetLockIconVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsVisibility                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_InventoryStorageRowListItem_C::SetLockIconVisibility(bool IsVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryStorageRowListItem_C", "SetLockIconVisibility");

	Params::WBP_InventoryStorageRowListItem_C_SetLockIconVisibility Parms{};

	Parms.IsVisibility = IsVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryStorageRowListItem.WBP_InventoryStorageRowListItem_C.SetIconSelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsSelected                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_InventoryStorageRowListItem_C::SetIconSelected(bool IsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryStorageRowListItem_C", "SetIconSelected");

	Params::WBP_InventoryStorageRowListItem_C_SetIconSelected Parms{};

	Parms.IsSelected = IsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryStorageRowListItem.WBP_InventoryStorageRowListItem_C.OnPreviewMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_InventoryStorageRowListItem_C::OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryStorageRowListItem_C", "OnPreviewMouseButtonDown");

	Params::WBP_InventoryStorageRowListItem_C_OnPreviewMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

