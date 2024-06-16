#pragma once

 

// Package: WBP_InventoryOrnamentDescription

#include "Basic.hpp"

#include "WBP_InventoryOrnamentDescription_classes.hpp"
#include "WBP_InventoryOrnamentDescription_parameters.hpp"


namespace SDK
{

// Function WBP_InventoryOrnamentDescription.WBP_InventoryOrnamentDescription_C.OnButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EDescripionButtonType                   ButtonType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryOrnamentDescription_C::OnButtonClicked__DelegateSignature(EDescripionButtonType ButtonType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryOrnamentDescription_C", "OnButtonClicked__DelegateSignature");

	Params::WBP_InventoryOrnamentDescription_C_OnButtonClicked__DelegateSignature Parms{};

	Parms.ButtonType = ButtonType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryOrnamentDescription.WBP_InventoryOrnamentDescription_C.ExecuteUbergraph_WBP_InventoryOrnamentDescription
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryOrnamentDescription_C::ExecuteUbergraph_WBP_InventoryOrnamentDescription(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryOrnamentDescription_C", "ExecuteUbergraph_WBP_InventoryOrnamentDescription");

	Params::WBP_InventoryOrnamentDescription_C_ExecuteUbergraph_WBP_InventoryOrnamentDescription Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryOrnamentDescription.WBP_InventoryOrnamentDescription_C.BndEvt__BtnSale_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_InventoryOrnamentDescription_C::BndEvt__BtnSale_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryOrnamentDescription_C", "BndEvt__BtnSale_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryOrnamentDescription.WBP_InventoryOrnamentDescription_C.BndEvt__BtnTrash2_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_InventoryOrnamentDescription_C::BndEvt__BtnTrash2_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryOrnamentDescription_C", "BndEvt__BtnTrash2_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryOrnamentDescription.WBP_InventoryOrnamentDescription_C.BndEvt__BtnLock2_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_InventoryOrnamentDescription_C::BndEvt__BtnLock2_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryOrnamentDescription_C", "BndEvt__BtnLock2_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryOrnamentDescription.WBP_InventoryOrnamentDescription_C.BndEvt__BtnLock_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_InventoryOrnamentDescription_C::BndEvt__BtnLock_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryOrnamentDescription_C", "BndEvt__BtnLock_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryOrnamentDescription.WBP_InventoryOrnamentDescription_C.BndEvt__BtnTrash_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_InventoryOrnamentDescription_C::BndEvt__BtnTrash_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryOrnamentDescription_C", "BndEvt__BtnTrash_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryOrnamentDescription.WBP_InventoryOrnamentDescription_C.SetItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryData                   Param_InventoryItemData                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// bool                                    Param_bStorageMode                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Param_bBagStorageViewMode                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_InventoryOrnamentDescription_C::SetItem(struct FInventoryData& Param_InventoryItemData, bool Param_bStorageMode, bool Param_bBagStorageViewMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryOrnamentDescription_C", "SetItem");

	Params::WBP_InventoryOrnamentDescription_C_SetItem Parms{};

	Parms.Param_InventoryItemData = std::move(Param_InventoryItemData);
	Parms.Param_bStorageMode = Param_bStorageMode;
	Parms.Param_bBagStorageViewMode = Param_bBagStorageViewMode;

	UObject::ProcessEvent(Func, &Parms);

	Param_InventoryItemData = std::move(Parms.Param_InventoryItemData);
}


// Function WBP_InventoryOrnamentDescription.WBP_InventoryOrnamentDescription_C.RefleshButtonAction
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_InventoryOrnamentDescription_C::RefleshButtonAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryOrnamentDescription_C", "RefleshButtonAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryOrnamentDescription.WBP_InventoryOrnamentDescription_C.SetModelCaptureImageVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_InventoryOrnamentDescription_C::SetModelCaptureImageVisibility(bool InIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryOrnamentDescription_C", "SetModelCaptureImageVisibility");

	Params::WBP_InventoryOrnamentDescription_C_SetModelCaptureImageVisibility Parms{};

	Parms.InIsVisible = InIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryOrnamentDescription.WBP_InventoryOrnamentDescription_C.SetSwitcher
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryOrnamentDescription_C::SetSwitcher(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryOrnamentDescription_C", "SetSwitcher");

	Params::WBP_InventoryOrnamentDescription_C_SetSwitcher Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryOrnamentDescription.WBP_InventoryOrnamentDescription_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_InventoryOrnamentDescription_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryOrnamentDescription_C", "Refresh");

	UObject::ProcessEvent(Func, nullptr);
}

}

