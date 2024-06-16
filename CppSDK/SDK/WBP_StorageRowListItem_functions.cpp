#pragma once

 

// Package: WBP_StorageRowListItem

#include "Basic.hpp"

#include "WBP_StorageRowListItem_classes.hpp"
#include "WBP_StorageRowListItem_parameters.hpp"


namespace SDK
{

// Function WBP_StorageRowListItem.WBP_StorageRowListItem_C.OnItemClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryData                   Param_ItemData                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UWBP_StorageRowListItem_C*        UpdetaListItem                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StorageRowListItem_C::OnItemClick__DelegateSignature(const struct FInventoryData& Param_ItemData, class UWBP_StorageRowListItem_C* UpdetaListItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StorageRowListItem_C", "OnItemClick__DelegateSignature");

	Params::WBP_StorageRowListItem_C_OnItemClick__DelegateSignature Parms{};

	Parms.Param_ItemData = std::move(Param_ItemData);
	Parms.UpdetaListItem = UpdetaListItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_StorageRowListItem.WBP_StorageRowListItem_C.OnItemClickRight__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryData                   Param_ItemData                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UWBP_StorageRowListItem_C*        UpdetaListItem                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StorageRowListItem_C::OnItemClickRight__DelegateSignature(const struct FInventoryData& Param_ItemData, class UWBP_StorageRowListItem_C* UpdetaListItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StorageRowListItem_C", "OnItemClickRight__DelegateSignature");

	Params::WBP_StorageRowListItem_C_OnItemClickRight__DelegateSignature Parms{};

	Parms.Param_ItemData = std::move(Param_ItemData);
	Parms.UpdetaListItem = UpdetaListItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_StorageRowListItem.WBP_StorageRowListItem_C.ExecuteUbergraph_WBP_StorageRowListItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StorageRowListItem_C::ExecuteUbergraph_WBP_StorageRowListItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StorageRowListItem_C", "ExecuteUbergraph_WBP_StorageRowListItem");

	Params::WBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_StorageRowListItem.WBP_StorageRowListItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_StorageRowListItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StorageRowListItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_StorageRowListItem.WBP_StorageRowListItem_C.UpdetaLockIcon
// (BlueprintCallable, BlueprintEvent)

void UWBP_StorageRowListItem_C::UpdetaLockIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StorageRowListItem_C", "UpdetaLockIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_StorageRowListItem.WBP_StorageRowListItem_C.InitializeItemData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InItemIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   StorageAmount                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryData                   InventoryData                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_StorageRowListItem_C::InitializeItemData(int32 InItemIndex, int32 StorageAmount, const struct FInventoryData& InventoryData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StorageRowListItem_C", "InitializeItemData");

	Params::WBP_StorageRowListItem_C_InitializeItemData Parms{};

	Parms.InItemIndex = InItemIndex;
	Parms.StorageAmount = StorageAmount;
	Parms.InventoryData = std::move(InventoryData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_StorageRowListItem.WBP_StorageRowListItem_C.BndEvt__SBButton_ItemName_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_StorageRowListItem_C::BndEvt__SBButton_ItemName_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StorageRowListItem_C", "BndEvt__SBButton_ItemName_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_StorageRowListItem.WBP_StorageRowListItem_C.SetLockIconVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsVisibility                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_StorageRowListItem_C::SetLockIconVisibility(bool IsVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StorageRowListItem_C", "SetLockIconVisibility");

	Params::WBP_StorageRowListItem_C_SetLockIconVisibility Parms{};

	Parms.IsVisibility = IsVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_StorageRowListItem.WBP_StorageRowListItem_C.Set Icon Selected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsSelected                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_StorageRowListItem_C::Set_Icon_Selected(bool IsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StorageRowListItem_C", "Set Icon Selected");

	Params::WBP_StorageRowListItem_C_Set_Icon_Selected Parms{};

	Parms.IsSelected = IsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_StorageRowListItem.WBP_StorageRowListItem_C.OnPreviewMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_StorageRowListItem_C::OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StorageRowListItem_C", "OnPreviewMouseButtonDown");

	Params::WBP_StorageRowListItem_C_OnPreviewMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

