#pragma once

 

// Package: WBP_MultiSelectInnerImagineBlock

#include "Basic.hpp"

#include "WBP_MultiSelectInnerImagineBlock_classes.hpp"
#include "WBP_MultiSelectInnerImagineBlock_parameters.hpp"


namespace SDK
{

// Function WBP_MultiSelectInnerImagineBlock.WBP_MultiSelectInnerImagineBlock_C.OnUpdatePrice__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_MultiSelectInnerImagineBlock_C::OnUpdatePrice__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiSelectInnerImagineBlock_C", "OnUpdatePrice__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MultiSelectInnerImagineBlock.WBP_MultiSelectInnerImagineBlock_C.OnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryItemData               InventoryData                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_MultiSelectInnerImagineBlock_C::OnClick__DelegateSignature(const struct FInventoryItemData& InventoryData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiSelectInnerImagineBlock_C", "OnClick__DelegateSignature");

	Params::WBP_MultiSelectInnerImagineBlock_C_OnClick__DelegateSignature Parms{};

	Parms.InventoryData = std::move(InventoryData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MultiSelectInnerImagineBlock.WBP_MultiSelectInnerImagineBlock_C.ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MultiSelectInnerImagineBlock_C::ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiSelectInnerImagineBlock_C", "ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock");

	Params::WBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MultiSelectInnerImagineBlock.WBP_MultiSelectInnerImagineBlock_C.BndEvt__SBButton_ItemName_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_MultiSelectInnerImagineBlock_C::BndEvt__SBButton_ItemName_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiSelectInnerImagineBlock_C", "BndEvt__SBButton_ItemName_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MultiSelectInnerImagineBlock.WBP_MultiSelectInnerImagineBlock_C.SetOneItem
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryItemData               Param_InventoryItemData                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UWBP_MultiSelectInnerImagineBlock_C::SetOneItem(const struct FInventoryItemData& Param_InventoryItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiSelectInnerImagineBlock_C", "SetOneItem");

	Params::WBP_MultiSelectInnerImagineBlock_C_SetOneItem Parms{};

	Parms.Param_InventoryItemData = std::move(Param_InventoryItemData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MultiSelectInnerImagineBlock.WBP_MultiSelectInnerImagineBlock_C.GetPrice
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Price                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MultiSelectInnerImagineBlock_C::GetPrice(int32* Price)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiSelectInnerImagineBlock_C", "GetPrice");

	Params::WBP_MultiSelectInnerImagineBlock_C_GetPrice Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Price != nullptr)
		*Price = Parms.Price;
}


// Function WBP_MultiSelectInnerImagineBlock.WBP_MultiSelectInnerImagineBlock_C.SetImagineParam
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FImagineParameter                ImagineParameter                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UWBP_MultiSelectInnerImagineBlock_C::SetImagineParam(const struct FImagineParameter& ImagineParameter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiSelectInnerImagineBlock_C", "SetImagineParam");

	Params::WBP_MultiSelectInnerImagineBlock_C_SetImagineParam Parms{};

	Parms.ImagineParameter = std::move(ImagineParameter);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MultiSelectInnerImagineBlock.WBP_MultiSelectInnerImagineBlock_C.SetEquipmentIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_MultiSelectInnerImagineBlock_C::SetEquipmentIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiSelectInnerImagineBlock_C", "SetEquipmentIcon");

	UObject::ProcessEvent(Func, nullptr);
}

}

