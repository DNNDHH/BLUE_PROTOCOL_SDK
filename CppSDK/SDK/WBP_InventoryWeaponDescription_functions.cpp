#pragma once

 

// Package: WBP_InventoryWeaponDescription

#include "Basic.hpp"

#include "WBP_InventoryWeaponDescription_classes.hpp"
#include "WBP_InventoryWeaponDescription_parameters.hpp"


namespace SDK
{

// Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.OnButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EDescripionButtonType                   ButtonType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryWeaponDescription_C::OnButtonClicked__DelegateSignature(EDescripionButtonType ButtonType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryWeaponDescription_C", "OnButtonClicked__DelegateSignature");

	Params::WBP_InventoryWeaponDescription_C_OnButtonClicked__DelegateSignature Parms{};

	Parms.ButtonType = ButtonType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.OnWeaponStickerButtonPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InWeaponUniqueId                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FSBWeaponItemData                InWeaponItemData                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_InventoryWeaponDescription_C::OnWeaponStickerButtonPressed__DelegateSignature(const class FString& InWeaponUniqueId, const struct FSBWeaponItemData& InWeaponItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryWeaponDescription_C", "OnWeaponStickerButtonPressed__DelegateSignature");

	Params::WBP_InventoryWeaponDescription_C_OnWeaponStickerButtonPressed__DelegateSignature Parms{};

	Parms.InWeaponUniqueId = std::move(InWeaponUniqueId);
	Parms.InWeaponItemData = std::move(InWeaponItemData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.OnWeaponStickerInUseButtonPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsInUse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_InventoryWeaponDescription_C::OnWeaponStickerInUseButtonPressed__DelegateSignature(bool InIsInUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryWeaponDescription_C", "OnWeaponStickerInUseButtonPressed__DelegateSignature");

	Params::WBP_InventoryWeaponDescription_C_OnWeaponStickerInUseButtonPressed__DelegateSignature Parms{};

	Parms.InIsInUse = InIsInUse;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.ExecuteUbergraph_WBP_InventoryWeaponDescription
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryWeaponDescription_C::ExecuteUbergraph_WBP_InventoryWeaponDescription(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryWeaponDescription_C", "ExecuteUbergraph_WBP_InventoryWeaponDescription");

	Params::WBP_InventoryWeaponDescription_C_ExecuteUbergraph_WBP_InventoryWeaponDescription Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_InventoryWeaponDescription_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryWeaponDescription_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.OnBtnWeaponStickerRemoveButtonClicked
// (BlueprintCallable, BlueprintEvent)

void UWBP_InventoryWeaponDescription_C::OnBtnWeaponStickerRemoveButtonClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryWeaponDescription_C", "OnBtnWeaponStickerRemoveButtonClicked");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.BndEvt__WBP_InventoryWeaponDescription_SBButton_AbilityDetail_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_InventoryWeaponDescription_C::BndEvt__WBP_InventoryWeaponDescription_SBButton_AbilityDetail_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryWeaponDescription_C", "BndEvt__WBP_InventoryWeaponDescription_SBButton_AbilityDetail_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_InventoryWeaponDescription_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryWeaponDescription_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.BndEvt__BtnTrash2_1_K2Node_ComponentBoundEvent_8_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_InventoryWeaponDescription_C::BndEvt__BtnTrash2_1_K2Node_ComponentBoundEvent_8_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryWeaponDescription_C", "BndEvt__BtnTrash2_1_K2Node_ComponentBoundEvent_8_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.BndEvt__BtnTakeOut_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_InventoryWeaponDescription_C::BndEvt__BtnTakeOut_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryWeaponDescription_C", "BndEvt__BtnTakeOut_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.BndEvt__BtnTrash2_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_InventoryWeaponDescription_C::BndEvt__BtnTrash2_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryWeaponDescription_C", "BndEvt__BtnTrash2_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.BndEvt__BtnLock2_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_InventoryWeaponDescription_C::BndEvt__BtnLock2_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryWeaponDescription_C", "BndEvt__BtnLock2_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.BndEvt__BtnLock_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_InventoryWeaponDescription_C::BndEvt__BtnLock_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryWeaponDescription_C", "BndEvt__BtnLock_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.BndEvt__BtnDemolition_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_InventoryWeaponDescription_C::BndEvt__BtnDemolition_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryWeaponDescription_C", "BndEvt__BtnDemolition_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.BndEvt__BtnTrash_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_InventoryWeaponDescription_C::BndEvt__BtnTrash_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryWeaponDescription_C", "BndEvt__BtnTrash_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.BndEvt__BtnEquip_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_InventoryWeaponDescription_C::BndEvt__BtnEquip_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryWeaponDescription_C", "BndEvt__BtnEquip_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.SetItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryData                   Param_InventoryItemData                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    Param_bStorageMode                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Param_bBagStorageViewMode                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_InventoryWeaponDescription_C::SetItem(const struct FInventoryData& Param_InventoryItemData, bool Param_bStorageMode, bool Param_bBagStorageViewMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryWeaponDescription_C", "SetItem");

	Params::WBP_InventoryWeaponDescription_C_SetItem Parms{};

	Parms.Param_InventoryItemData = std::move(Param_InventoryItemData);
	Parms.Param_bStorageMode = Param_bStorageMode;
	Parms.Param_bBagStorageViewMode = Param_bBagStorageViewMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.RefleshButton
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_InventoryWeaponDescription_C::RefleshButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryWeaponDescription_C", "RefleshButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.InitBtn
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_InventoryWeaponDescription_C::InitBtn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryWeaponDescription_C", "InitBtn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.IsNowJob
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsEquipable                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_InventoryWeaponDescription_C::IsNowJob(bool* IsEquipable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryWeaponDescription_C", "IsNowJob");

	Params::WBP_InventoryWeaponDescription_C_IsNowJob Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsEquipable != nullptr)
		*IsEquipable = Parms.IsEquipable;
}


// Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.SetSwitcher
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryWeaponDescription_C::SetSwitcher(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryWeaponDescription_C", "SetSwitcher");

	Params::WBP_InventoryWeaponDescription_C_SetSwitcher Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.GetAbility1DescToolTipWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_InventoryWeaponDescription_C::GetAbility1DescToolTipWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryWeaponDescription_C", "GetAbility1DescToolTipWidget");

	Params::WBP_InventoryWeaponDescription_C_GetAbility1DescToolTipWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.GetAbility2DescToolTipWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_InventoryWeaponDescription_C::GetAbility2DescToolTipWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryWeaponDescription_C", "GetAbility2DescToolTipWidget");

	Params::WBP_InventoryWeaponDescription_C_GetAbility2DescToolTipWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.GetAbility3DescToolTipWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_InventoryWeaponDescription_C::GetAbility3DescToolTipWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryWeaponDescription_C", "GetAbility3DescToolTipWidget");

	Params::WBP_InventoryWeaponDescription_C_GetAbility3DescToolTipWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.GetAbility4DescToolTipWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_InventoryWeaponDescription_C::GetAbility4DescToolTipWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryWeaponDescription_C", "GetAbility4DescToolTipWidget");

	Params::WBP_InventoryWeaponDescription_C_GetAbility4DescToolTipWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.GetAbilityDescToolTipWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonToolTip_AbilityPerk_C*     AbilityDescToolTip                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryWeaponDescription_C::GetAbilityDescToolTipWidget(int32 Param_Index, class UCommonToolTip_AbilityPerk_C** AbilityDescToolTip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryWeaponDescription_C", "GetAbilityDescToolTipWidget");

	Params::WBP_InventoryWeaponDescription_C_GetAbilityDescToolTipWidget Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);

	if (AbilityDescToolTip != nullptr)
		*AbilityDescToolTip = Parms.AbilityDescToolTip;
}


// Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.SetWeaponStickerInUseButtonIsInUse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsInUse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_InventoryWeaponDescription_C::SetWeaponStickerInUseButtonIsInUse(bool InIsInUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryWeaponDescription_C", "SetWeaponStickerInUseButtonIsInUse");

	Params::WBP_InventoryWeaponDescription_C_SetWeaponStickerInUseButtonIsInUse Parms{};

	Parms.InIsInUse = InIsInUse;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.SetWeaponStickerInUseButtonIsEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsEnabled                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_InventoryWeaponDescription_C::SetWeaponStickerInUseButtonIsEnabled(bool InIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryWeaponDescription_C", "SetWeaponStickerInUseButtonIsEnabled");

	Params::WBP_InventoryWeaponDescription_C_SetWeaponStickerInUseButtonIsEnabled Parms{};

	Parms.InIsEnabled = InIsEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.SetOperationRotateBtnVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_InventoryWeaponDescription_C::SetOperationRotateBtnVisibility(bool InIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryWeaponDescription_C", "SetOperationRotateBtnVisibility");

	Params::WBP_InventoryWeaponDescription_C_SetOperationRotateBtnVisibility Parms{};

	Parms.InIsVisible = InIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_InventoryWeaponDescription_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryWeaponDescription_C", "Refresh");

	UObject::ProcessEvent(Func, nullptr);
}

}

