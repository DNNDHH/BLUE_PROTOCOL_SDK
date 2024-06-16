#pragma once

 

// Package: Craft_StorageSelector

#include "Basic.hpp"

#include "Craft_StorageSelector_classes.hpp"
#include "Craft_StorageSelector_parameters.hpp"


namespace SDK
{

// Function Craft_StorageSelector.Craft_StorageSelector_C.ExecuteUbergraph_Craft_StorageSelector
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCraft_StorageSelector_C::ExecuteUbergraph_Craft_StorageSelector(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Craft_StorageSelector_C", "ExecuteUbergraph_Craft_StorageSelector");

	Params::Craft_StorageSelector_C_ExecuteUbergraph_Craft_StorageSelector Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Craft_StorageSelector.Craft_StorageSelector_C.BndEvt__Craft_StorageSelector_Btn_Change_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCraft_StorageSelector_C::BndEvt__Craft_StorageSelector_Btn_Change_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Craft_StorageSelector_C", "BndEvt__Craft_StorageSelector_Btn_Change_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Craft_StorageSelector.Craft_StorageSelector_C.BndEvt__Craft_StorageSelector_Btn_Change_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCraft_StorageSelector_C::BndEvt__Craft_StorageSelector_Btn_Change_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Craft_StorageSelector_C", "BndEvt__Craft_StorageSelector_Btn_Change_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Craft_StorageSelector.Craft_StorageSelector_C.Set CraftCount
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_CraftCount                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCraft_StorageSelector_C::Set_CraftCount(int32 Param_CraftCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Craft_StorageSelector_C", "Set CraftCount");

	Params::Craft_StorageSelector_C_Set_CraftCount Parms{};

	Parms.Param_CraftCount = Param_CraftCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Craft_StorageSelector.Craft_StorageSelector_C.Set RecepiData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCharacterCraftRecepi            RecepiData                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UCraft_StorageSelector_C::Set_RecepiData(const struct FCharacterCraftRecepi& RecepiData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Craft_StorageSelector_C", "Set RecepiData");

	Params::Craft_StorageSelector_C_Set_RecepiData Parms{};

	Parms.RecepiData = std::move(RecepiData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Craft_StorageSelector.Craft_StorageSelector_C.BndEvt__Craft_StorageSelector_Btn_Change_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCraft_StorageSelector_C::BndEvt__Craft_StorageSelector_Btn_Change_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Craft_StorageSelector_C", "BndEvt__Craft_StorageSelector_Btn_Change_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Craft_StorageSelector.Craft_StorageSelector_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCraft_StorageSelector_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Craft_StorageSelector_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Craft_StorageSelector.Craft_StorageSelector_C.UpdateStorageView
// (Public, BlueprintCallable, BlueprintEvent)

void UCraft_StorageSelector_C::UpdateStorageView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Craft_StorageSelector_C", "UpdateStorageView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Craft_StorageSelector.Craft_StorageSelector_C.IsStorage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    Param_CurrentIsStorage                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCraft_StorageSelector_C::IsStorage(bool* Param_CurrentIsStorage) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Craft_StorageSelector_C", "IsStorage");

	Params::Craft_StorageSelector_C_IsStorage Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_CurrentIsStorage != nullptr)
		*Param_CurrentIsStorage = Parms.Param_CurrentIsStorage;
}


// Function Craft_StorageSelector.Craft_StorageSelector_C.GetSelectStorageNo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   StorageNo                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCraft_StorageSelector_C::GetSelectStorageNo(int32* StorageNo) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Craft_StorageSelector_C", "GetSelectStorageNo");

	Params::Craft_StorageSelector_C_GetSelectStorageNo Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (StorageNo != nullptr)
		*StorageNo = Parms.StorageNo;
}

}

