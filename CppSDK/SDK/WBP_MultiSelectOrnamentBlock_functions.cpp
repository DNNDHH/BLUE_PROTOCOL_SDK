#pragma once

 

// Package: WBP_MultiSelectOrnamentBlock

#include "Basic.hpp"

#include "WBP_MultiSelectOrnamentBlock_classes.hpp"
#include "WBP_MultiSelectOrnamentBlock_parameters.hpp"


namespace SDK
{

// Function WBP_MultiSelectOrnamentBlock.WBP_MultiSelectOrnamentBlock_C.OnUpdatePrice__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_MultiSelectOrnamentBlock_C::OnUpdatePrice__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiSelectOrnamentBlock_C", "OnUpdatePrice__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MultiSelectOrnamentBlock.WBP_MultiSelectOrnamentBlock_C.OnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryItemData               Param_InventoryData                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_MultiSelectOrnamentBlock_C::OnClick__DelegateSignature(const struct FInventoryItemData& Param_InventoryData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiSelectOrnamentBlock_C", "OnClick__DelegateSignature");

	Params::WBP_MultiSelectOrnamentBlock_C_OnClick__DelegateSignature Parms{};

	Parms.Param_InventoryData = std::move(Param_InventoryData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MultiSelectOrnamentBlock.WBP_MultiSelectOrnamentBlock_C.ExecuteUbergraph_WBP_MultiSelectOrnamentBlock
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MultiSelectOrnamentBlock_C::ExecuteUbergraph_WBP_MultiSelectOrnamentBlock(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiSelectOrnamentBlock_C", "ExecuteUbergraph_WBP_MultiSelectOrnamentBlock");

	Params::WBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MultiSelectOrnamentBlock.WBP_MultiSelectOrnamentBlock_C.BndEvt__SBButton_ItemName_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_MultiSelectOrnamentBlock_C::BndEvt__SBButton_ItemName_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiSelectOrnamentBlock_C", "BndEvt__SBButton_ItemName_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MultiSelectOrnamentBlock.WBP_MultiSelectOrnamentBlock_C.UpdateDisplay
// (BlueprintCallable, BlueprintEvent)

void UWBP_MultiSelectOrnamentBlock_C::UpdateDisplay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiSelectOrnamentBlock_C", "UpdateDisplay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MultiSelectOrnamentBlock.WBP_MultiSelectOrnamentBlock_C.SetStorageItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_StorageRowListItem_C*        InStorageListItem                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MultiSelectOrnamentBlock_C::SetStorageItem(class UWBP_StorageRowListItem_C* InStorageListItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiSelectOrnamentBlock_C", "SetStorageItem");

	Params::WBP_MultiSelectOrnamentBlock_C_SetStorageItem Parms{};

	Parms.InStorageListItem = InStorageListItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MultiSelectOrnamentBlock.WBP_MultiSelectOrnamentBlock_C.SetOneItem
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryItemData               InventoryItemData                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UWBP_MultiSelectOrnamentBlock_C::SetOneItem(const struct FInventoryItemData& InventoryItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiSelectOrnamentBlock_C", "SetOneItem");

	Params::WBP_MultiSelectOrnamentBlock_C_SetOneItem Parms{};

	Parms.InventoryItemData = std::move(InventoryItemData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MultiSelectOrnamentBlock.WBP_MultiSelectOrnamentBlock_C.GetPrice
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Price                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MultiSelectOrnamentBlock_C::GetPrice(int32* Price)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiSelectOrnamentBlock_C", "GetPrice");

	Params::WBP_MultiSelectOrnamentBlock_C_GetPrice Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Price != nullptr)
		*Price = Parms.Price;
}

}

