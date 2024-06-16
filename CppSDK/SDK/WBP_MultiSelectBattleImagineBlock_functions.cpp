#pragma once

 

// Package: WBP_MultiSelectBattleImagineBlock

#include "Basic.hpp"

#include "WBP_MultiSelectBattleImagineBlock_classes.hpp"
#include "WBP_MultiSelectBattleImagineBlock_parameters.hpp"


namespace SDK
{

// Function WBP_MultiSelectBattleImagineBlock.WBP_MultiSelectBattleImagineBlock_C.OnUpdatePrice__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_MultiSelectBattleImagineBlock_C::OnUpdatePrice__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiSelectBattleImagineBlock_C", "OnUpdatePrice__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MultiSelectBattleImagineBlock.WBP_MultiSelectBattleImagineBlock_C.OnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryItemData               Param_InventoryData                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_MultiSelectBattleImagineBlock_C::OnClick__DelegateSignature(const struct FInventoryItemData& Param_InventoryData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiSelectBattleImagineBlock_C", "OnClick__DelegateSignature");

	Params::WBP_MultiSelectBattleImagineBlock_C_OnClick__DelegateSignature Parms{};

	Parms.Param_InventoryData = std::move(Param_InventoryData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MultiSelectBattleImagineBlock.WBP_MultiSelectBattleImagineBlock_C.ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MultiSelectBattleImagineBlock_C::ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiSelectBattleImagineBlock_C", "ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock");

	Params::WBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MultiSelectBattleImagineBlock.WBP_MultiSelectBattleImagineBlock_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_MultiSelectBattleImagineBlock_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiSelectBattleImagineBlock_C", "PreConstruct");

	Params::WBP_MultiSelectBattleImagineBlock_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MultiSelectBattleImagineBlock.WBP_MultiSelectBattleImagineBlock_C.Set Perk Data
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   EffectId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MultiSelectBattleImagineBlock_C::Set_Perk_Data(int32 EffectId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiSelectBattleImagineBlock_C", "Set Perk Data");

	Params::WBP_MultiSelectBattleImagineBlock_C_Set_Perk_Data Parms{};

	Parms.EffectId = EffectId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MultiSelectBattleImagineBlock.WBP_MultiSelectBattleImagineBlock_C.SetOneItem
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryItemData               InventoryItemData                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UWBP_MultiSelectBattleImagineBlock_C::SetOneItem(const struct FInventoryItemData& InventoryItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiSelectBattleImagineBlock_C", "SetOneItem");

	Params::WBP_MultiSelectBattleImagineBlock_C_SetOneItem Parms{};

	Parms.InventoryItemData = std::move(InventoryItemData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MultiSelectBattleImagineBlock.WBP_MultiSelectBattleImagineBlock_C.BndEvt__SBButton_ItemName_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_MultiSelectBattleImagineBlock_C::BndEvt__SBButton_ItemName_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiSelectBattleImagineBlock_C", "BndEvt__SBButton_ItemName_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MultiSelectBattleImagineBlock.WBP_MultiSelectBattleImagineBlock_C.SetLeveldata
// (BlueprintCallable, BlueprintEvent)

void UWBP_MultiSelectBattleImagineBlock_C::SetLeveldata()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiSelectBattleImagineBlock_C", "SetLeveldata");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MultiSelectBattleImagineBlock.WBP_MultiSelectBattleImagineBlock_C.SetImagineParameter
// (BlueprintCallable, BlueprintEvent)

void UWBP_MultiSelectBattleImagineBlock_C::SetImagineParameter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiSelectBattleImagineBlock_C", "SetImagineParameter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MultiSelectBattleImagineBlock.WBP_MultiSelectBattleImagineBlock_C.GetPrice
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Price                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MultiSelectBattleImagineBlock_C::GetPrice(int32* Price)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiSelectBattleImagineBlock_C", "GetPrice");

	Params::WBP_MultiSelectBattleImagineBlock_C_GetPrice Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Price != nullptr)
		*Price = Parms.Price;
}

}

