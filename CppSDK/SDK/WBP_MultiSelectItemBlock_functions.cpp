#pragma once

 

// Package: WBP_MultiSelectItemBlock

#include "Basic.hpp"

#include "WBP_MultiSelectItemBlock_classes.hpp"
#include "WBP_MultiSelectItemBlock_parameters.hpp"


namespace SDK
{

// Function WBP_MultiSelectItemBlock.WBP_MultiSelectItemBlock_C.OnUpdatePrice__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_MultiSelectItemBlock_C::OnUpdatePrice__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiSelectItemBlock_C", "OnUpdatePrice__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MultiSelectItemBlock.WBP_MultiSelectItemBlock_C.OnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryItemData               Param_InventoryData                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_MultiSelectItemBlock_C::OnClick__DelegateSignature(const struct FInventoryItemData& Param_InventoryData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiSelectItemBlock_C", "OnClick__DelegateSignature");

	Params::WBP_MultiSelectItemBlock_C_OnClick__DelegateSignature Parms{};

	Parms.Param_InventoryData = std::move(Param_InventoryData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MultiSelectItemBlock.WBP_MultiSelectItemBlock_C.ExecuteUbergraph_WBP_MultiSelectItemBlock
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MultiSelectItemBlock_C::ExecuteUbergraph_WBP_MultiSelectItemBlock(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiSelectItemBlock_C", "ExecuteUbergraph_WBP_MultiSelectItemBlock");

	Params::WBP_MultiSelectItemBlock_C_ExecuteUbergraph_WBP_MultiSelectItemBlock Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MultiSelectItemBlock.WBP_MultiSelectItemBlock_C.BndEvt__SBButton_ItemName_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_MultiSelectItemBlock_C::BndEvt__SBButton_ItemName_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiSelectItemBlock_C", "BndEvt__SBButton_ItemName_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MultiSelectItemBlock.WBP_MultiSelectItemBlock_C.BndEvt__SBButton_Max_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_MultiSelectItemBlock_C::BndEvt__SBButton_Max_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiSelectItemBlock_C", "BndEvt__SBButton_Max_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MultiSelectItemBlock.WBP_MultiSelectItemBlock_C.BndEvt__SBButton_Minus_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_MultiSelectItemBlock_C::BndEvt__SBButton_Minus_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiSelectItemBlock_C", "BndEvt__SBButton_Minus_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MultiSelectItemBlock.WBP_MultiSelectItemBlock_C.BndEvt__SBButton_Plus_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_MultiSelectItemBlock_C::BndEvt__SBButton_Plus_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiSelectItemBlock_C", "BndEvt__SBButton_Plus_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MultiSelectItemBlock.WBP_MultiSelectItemBlock_C.BndEvt__SBButton_Minus_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_MultiSelectItemBlock_C::BndEvt__SBButton_Minus_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiSelectItemBlock_C", "BndEvt__SBButton_Minus_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MultiSelectItemBlock.WBP_MultiSelectItemBlock_C.UpdateDisplay
// (BlueprintCallable, BlueprintEvent)

void UWBP_MultiSelectItemBlock_C::UpdateDisplay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiSelectItemBlock_C", "UpdateDisplay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MultiSelectItemBlock.WBP_MultiSelectItemBlock_C.SetStorageItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_StorageRowListItem_C*        InStorageListItem                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MultiSelectItemBlock_C::SetStorageItem(class UWBP_StorageRowListItem_C* InStorageListItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiSelectItemBlock_C", "SetStorageItem");

	Params::WBP_MultiSelectItemBlock_C_SetStorageItem Parms{};

	Parms.InStorageListItem = InStorageListItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MultiSelectItemBlock.WBP_MultiSelectItemBlock_C.SetOneItem
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryItemData               InventoryItemData                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UWBP_MultiSelectItemBlock_C::SetOneItem(const struct FInventoryItemData& InventoryItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiSelectItemBlock_C", "SetOneItem");

	Params::WBP_MultiSelectItemBlock_C_SetOneItem Parms{};

	Parms.InventoryItemData = std::move(InventoryItemData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MultiSelectItemBlock.WBP_MultiSelectItemBlock_C.GetPrice
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Price                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MultiSelectItemBlock_C::GetPrice(int32* Price)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiSelectItemBlock_C", "GetPrice");

	Params::WBP_MultiSelectItemBlock_C_GetPrice Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Price != nullptr)
		*Price = Parms.Price;
}

}

