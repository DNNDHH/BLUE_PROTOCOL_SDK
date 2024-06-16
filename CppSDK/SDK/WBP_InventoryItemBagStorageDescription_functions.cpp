#pragma once

 

// Package: WBP_InventoryItemBagStorageDescription

#include "Basic.hpp"

#include "WBP_InventoryItemBagStorageDescription_classes.hpp"
#include "WBP_InventoryItemBagStorageDescription_parameters.hpp"


namespace SDK
{

// Function WBP_InventoryItemBagStorageDescription.WBP_InventoryItemBagStorageDescription_C.OnButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EDescripionButtonType                   ButtonType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryItemBagStorageDescription_C::OnButtonClicked__DelegateSignature(EDescripionButtonType ButtonType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryItemBagStorageDescription_C", "OnButtonClicked__DelegateSignature");

	Params::WBP_InventoryItemBagStorageDescription_C_OnButtonClicked__DelegateSignature Parms{};

	Parms.ButtonType = ButtonType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryItemBagStorageDescription.WBP_InventoryItemBagStorageDescription_C.SetItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryData                   Param_InventoryItemData                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_InventoryItemBagStorageDescription_C::SetItem(const struct FInventoryData& Param_InventoryItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryItemBagStorageDescription_C", "SetItem");

	Params::WBP_InventoryItemBagStorageDescription_C_SetItem Parms{};

	Parms.Param_InventoryItemData = std::move(Param_InventoryItemData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryItemBagStorageDescription.WBP_InventoryItemBagStorageDescription_C.CheckUseItemFlag
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    NoUse                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_InventoryItemBagStorageDescription_C::CheckUseItemFlag(bool* NoUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryItemBagStorageDescription_C", "CheckUseItemFlag");

	Params::WBP_InventoryItemBagStorageDescription_C_CheckUseItemFlag Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NoUse != nullptr)
		*NoUse = Parms.NoUse;
}


// Function WBP_InventoryItemBagStorageDescription.WBP_InventoryItemBagStorageDescription_C.SetIsIntervalTimeVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_InventoryItemBagStorageDescription_C::SetIsIntervalTimeVisible(bool InIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryItemBagStorageDescription_C", "SetIsIntervalTimeVisible");

	Params::WBP_InventoryItemBagStorageDescription_C_SetIsIntervalTimeVisible Parms{};

	Parms.InIsVisible = InIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}

}

