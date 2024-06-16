#pragma once

 

// Package: WBP_MultiSelectCostumeBlock

#include "Basic.hpp"

#include "WBP_MultiSelectCostumeBlock_classes.hpp"
#include "WBP_MultiSelectCostumeBlock_parameters.hpp"


namespace SDK
{

// Function WBP_MultiSelectCostumeBlock.WBP_MultiSelectCostumeBlock_C.OnUpdatePrice__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_MultiSelectCostumeBlock_C::OnUpdatePrice__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiSelectCostumeBlock_C", "OnUpdatePrice__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MultiSelectCostumeBlock.WBP_MultiSelectCostumeBlock_C.OnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryItemData               InventoryData                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_MultiSelectCostumeBlock_C::OnClick__DelegateSignature(const struct FInventoryItemData& InventoryData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiSelectCostumeBlock_C", "OnClick__DelegateSignature");

	Params::WBP_MultiSelectCostumeBlock_C_OnClick__DelegateSignature Parms{};

	Parms.InventoryData = std::move(InventoryData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MultiSelectCostumeBlock.WBP_MultiSelectCostumeBlock_C.ExecuteUbergraph_WBP_MultiSelectCostumeBlock
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MultiSelectCostumeBlock_C::ExecuteUbergraph_WBP_MultiSelectCostumeBlock(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiSelectCostumeBlock_C", "ExecuteUbergraph_WBP_MultiSelectCostumeBlock");

	Params::WBP_MultiSelectCostumeBlock_C_ExecuteUbergraph_WBP_MultiSelectCostumeBlock Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MultiSelectCostumeBlock.WBP_MultiSelectCostumeBlock_C.SetOneItem
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryItemData               Param_InventoryItemData                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UWBP_MultiSelectCostumeBlock_C::SetOneItem(const struct FInventoryItemData& Param_InventoryItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiSelectCostumeBlock_C", "SetOneItem");

	Params::WBP_MultiSelectCostumeBlock_C_SetOneItem Parms{};

	Parms.Param_InventoryItemData = std::move(Param_InventoryItemData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MultiSelectCostumeBlock.WBP_MultiSelectCostumeBlock_C.BndEvt__SBButton_ItemName_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_MultiSelectCostumeBlock_C::BndEvt__SBButton_ItemName_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiSelectCostumeBlock_C", "BndEvt__SBButton_ItemName_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MultiSelectCostumeBlock.WBP_MultiSelectCostumeBlock_C.GetPrice
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Price                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MultiSelectCostumeBlock_C::GetPrice(int32* Price)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiSelectCostumeBlock_C", "GetPrice");

	Params::WBP_MultiSelectCostumeBlock_C_GetPrice Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Price != nullptr)
		*Price = Parms.Price;
}


// Function WBP_MultiSelectCostumeBlock.WBP_MultiSelectCostumeBlock_C.SetCostumeColor
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_MultiSelectCostumeBlock_C::SetCostumeColor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiSelectCostumeBlock_C", "SetCostumeColor");

	UObject::ProcessEvent(Func, nullptr);
}

}

