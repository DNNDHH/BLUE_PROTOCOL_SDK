#pragma once

 

// Package: WBP_InventoryPassiveImagineDescription

#include "Basic.hpp"

#include "WBP_InventoryPassiveImagineDescription_classes.hpp"
#include "WBP_InventoryPassiveImagineDescription_parameters.hpp"


namespace SDK
{

// Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.OnButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EDescripionButtonType                   ButtonType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryPassiveImagineDescription_C::OnButtonClicked__DelegateSignature(EDescripionButtonType ButtonType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryPassiveImagineDescription_C", "OnButtonClicked__DelegateSignature");

	Params::WBP_InventoryPassiveImagineDescription_C_OnButtonClicked__DelegateSignature Parms{};

	Parms.ButtonType = ButtonType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.ExecuteUbergraph_WBP_InventoryPassiveImagineDescription
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryPassiveImagineDescription_C::ExecuteUbergraph_WBP_InventoryPassiveImagineDescription(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryPassiveImagineDescription_C", "ExecuteUbergraph_WBP_InventoryPassiveImagineDescription");

	Params::WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_InventoryPassiveImagineDescription_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryPassiveImagineDescription_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.BndEvt__WBP_InventoryPassiveImagineDescription_SBButton_AbilityInfo_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_InventoryPassiveImagineDescription_C::BndEvt__WBP_InventoryPassiveImagineDescription_SBButton_AbilityInfo_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryPassiveImagineDescription_C", "BndEvt__WBP_InventoryPassiveImagineDescription_SBButton_AbilityInfo_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.BndEvt__Button_illustImagine_S_1_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_InventoryPassiveImagineDescription_C::BndEvt__Button_illustImagine_S_1_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryPassiveImagineDescription_C", "BndEvt__Button_illustImagine_S_1_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.BndEvt__Button_illustImagine_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_InventoryPassiveImagineDescription_C::BndEvt__Button_illustImagine_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryPassiveImagineDescription_C", "BndEvt__Button_illustImagine_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.BndEvt__Button_illustImagine_1_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_InventoryPassiveImagineDescription_C::BndEvt__Button_illustImagine_1_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryPassiveImagineDescription_C", "BndEvt__Button_illustImagine_1_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.SetItemData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryData                   Param_InventoryItemData                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    Param_bStorageMode                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Param_bBagStorageViewMode                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_InventoryPassiveImagineDescription_C::SetItemData(const struct FInventoryData& Param_InventoryItemData, bool Param_bStorageMode, bool Param_bBagStorageViewMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryPassiveImagineDescription_C", "SetItemData");

	Params::WBP_InventoryPassiveImagineDescription_C_SetItemData Parms{};

	Parms.Param_InventoryItemData = std::move(Param_InventoryItemData);
	Parms.Param_bStorageMode = Param_bStorageMode;
	Parms.Param_bBagStorageViewMode = Param_bBagStorageViewMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.SelectKiraSwitcher
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterImagine                 MasterImagine                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_InventoryPassiveImagineDescription_C::SelectKiraSwitcher(const struct FSBMasterImagine& MasterImagine)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryPassiveImagineDescription_C", "SelectKiraSwitcher");

	Params::WBP_InventoryPassiveImagineDescription_C_SelectKiraSwitcher Parms{};

	Parms.MasterImagine = std::move(MasterImagine);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.BndEvt__BtnSale_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_InventoryPassiveImagineDescription_C::BndEvt__BtnSale_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryPassiveImagineDescription_C", "BndEvt__BtnSale_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.BndEvt__BtnTakeOut_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_InventoryPassiveImagineDescription_C::BndEvt__BtnTakeOut_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryPassiveImagineDescription_C", "BndEvt__BtnTakeOut_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.BndEvt__BtnTrash2_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_InventoryPassiveImagineDescription_C::BndEvt__BtnTrash2_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryPassiveImagineDescription_C", "BndEvt__BtnTrash2_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.BndEvt__BtnLock2_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_InventoryPassiveImagineDescription_C::BndEvt__BtnLock2_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryPassiveImagineDescription_C", "BndEvt__BtnLock2_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.BndEvt__BtnTrash_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_InventoryPassiveImagineDescription_C::BndEvt__BtnTrash_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryPassiveImagineDescription_C", "BndEvt__BtnTrash_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.BndEvt__BtnLock_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_InventoryPassiveImagineDescription_C::BndEvt__BtnLock_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryPassiveImagineDescription_C", "BndEvt__BtnLock_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.UpdateButton
// (BlueprintCallable, BlueprintEvent)

void UWBP_InventoryPassiveImagineDescription_C::UpdateButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryPassiveImagineDescription_C", "UpdateButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.RequestLoad
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ImagineId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryPassiveImagineDescription_C::RequestLoad(int32 ImagineId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryPassiveImagineDescription_C", "RequestLoad");

	Params::WBP_InventoryPassiveImagineDescription_C_RequestLoad Parms{};

	Parms.ImagineId = ImagineId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.OnLoaded_A6DAA6C845C948C7E7A97C9A7D207C26
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryPassiveImagineDescription_C::OnLoaded_A6DAA6C845C948C7E7A97C9A7D207C26(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryPassiveImagineDescription_C", "OnLoaded_A6DAA6C845C948C7E7A97C9A7D207C26");

	Params::WBP_InventoryPassiveImagineDescription_C_OnLoaded_A6DAA6C845C948C7E7A97C9A7D207C26 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.SetImagineParam
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FImagineParameter                ImagineParam                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_InventoryPassiveImagineDescription_C::SetImagineParam(const struct FImagineParameter& ImagineParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryPassiveImagineDescription_C", "SetImagineParam");

	Params::WBP_InventoryPassiveImagineDescription_C_SetImagineParam Parms{};

	Parms.ImagineParam = std::move(ImagineParam);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.Set Level And Exp
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterImagine                 MasterData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   Exp                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryPassiveImagineDescription_C::Set_Level_And_Exp(const struct FSBMasterImagine& MasterData, int32 Exp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryPassiveImagineDescription_C", "Set Level And Exp");

	Params::WBP_InventoryPassiveImagineDescription_C_Set_Level_And_Exp Parms{};

	Parms.MasterData = std::move(MasterData);
	Parms.Exp = Exp;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.SetSwitcher
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryPassiveImagineDescription_C::SetSwitcher(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryPassiveImagineDescription_C", "SetSwitcher");

	Params::WBP_InventoryPassiveImagineDescription_C_SetSwitcher Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.GetAbilityDescToolTipWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_InventoryPassiveImagineDescription_C::GetAbilityDescToolTipWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryPassiveImagineDescription_C", "GetAbilityDescToolTipWidget");

	Params::WBP_InventoryPassiveImagineDescription_C_GetAbilityDescToolTipWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_InventoryPassiveImagineDescription_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryPassiveImagineDescription_C", "Refresh");

	UObject::ProcessEvent(Func, nullptr);
}

}

