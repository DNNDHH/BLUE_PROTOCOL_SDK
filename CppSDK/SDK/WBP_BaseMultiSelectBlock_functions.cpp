#pragma once

 

// Package: WBP_BaseMultiSelectBlock

#include "Basic.hpp"

#include "WBP_BaseMultiSelectBlock_classes.hpp"
#include "WBP_BaseMultiSelectBlock_parameters.hpp"


namespace SDK
{

// Function WBP_BaseMultiSelectBlock.WBP_BaseMultiSelectBlock_C.OnUpdatePrice__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_BaseMultiSelectBlock_C::OnUpdatePrice__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BaseMultiSelectBlock_C", "OnUpdatePrice__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_BaseMultiSelectBlock.WBP_BaseMultiSelectBlock_C.OnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryItemData               NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_BaseMultiSelectBlock_C::OnClick__DelegateSignature(const struct FInventoryItemData& NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BaseMultiSelectBlock_C", "OnClick__DelegateSignature");

	Params::WBP_BaseMultiSelectBlock_C_OnClick__DelegateSignature Parms{};

	Parms.NewParam = std::move(NewParam);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BaseMultiSelectBlock.WBP_BaseMultiSelectBlock_C.ExecuteUbergraph_WBP_BaseMultiSelectBlock
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BaseMultiSelectBlock_C::ExecuteUbergraph_WBP_BaseMultiSelectBlock(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BaseMultiSelectBlock_C", "ExecuteUbergraph_WBP_BaseMultiSelectBlock");

	Params::WBP_BaseMultiSelectBlock_C_ExecuteUbergraph_WBP_BaseMultiSelectBlock Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BaseMultiSelectBlock.WBP_BaseMultiSelectBlock_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryItemData               Param_InventoryData                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_BaseMultiSelectBlock_C::CustomEvent_1(const struct FInventoryItemData& Param_InventoryData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BaseMultiSelectBlock_C", "CustomEvent_1");

	Params::WBP_BaseMultiSelectBlock_C_CustomEvent_1 Parms{};

	Parms.Param_InventoryData = std::move(Param_InventoryData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BaseMultiSelectBlock.WBP_BaseMultiSelectBlock_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)

void UWBP_BaseMultiSelectBlock_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BaseMultiSelectBlock_C", "CustomEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_BaseMultiSelectBlock.WBP_BaseMultiSelectBlock_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_BaseMultiSelectBlock_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BaseMultiSelectBlock_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_BaseMultiSelectBlock.WBP_BaseMultiSelectBlock_C.AllCollapsed
// (BlueprintCallable, BlueprintEvent)

void UWBP_BaseMultiSelectBlock_C::AllCollapsed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BaseMultiSelectBlock_C", "AllCollapsed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_BaseMultiSelectBlock.WBP_BaseMultiSelectBlock_C.SetStorageItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_StorageRowListItem_C*        InStorageListItem                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BaseMultiSelectBlock_C::SetStorageItem(class UWBP_StorageRowListItem_C* InStorageListItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BaseMultiSelectBlock_C", "SetStorageItem");

	Params::WBP_BaseMultiSelectBlock_C_SetStorageItem Parms{};

	Parms.InStorageListItem = InStorageListItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BaseMultiSelectBlock.WBP_BaseMultiSelectBlock_C.SetOneItem
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryItemData               InventoryItemData                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UWBP_BaseMultiSelectBlock_C::SetOneItem(const struct FInventoryItemData& InventoryItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BaseMultiSelectBlock_C", "SetOneItem");

	Params::WBP_BaseMultiSelectBlock_C_SetOneItem Parms{};

	Parms.InventoryItemData = std::move(InventoryItemData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BaseMultiSelectBlock.WBP_BaseMultiSelectBlock_C.Get Price
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    LockExcluded                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   Price                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BaseMultiSelectBlock_C::Get_Price(bool LockExcluded, int32* Price)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BaseMultiSelectBlock_C", "Get Price");

	Params::WBP_BaseMultiSelectBlock_C_Get_Price Parms{};

	Parms.LockExcluded = LockExcluded;

	UObject::ProcessEvent(Func, &Parms);

	if (Price != nullptr)
		*Price = Parms.Price;
}

}

