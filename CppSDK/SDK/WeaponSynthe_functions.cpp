#pragma once

 

// Package: WeaponSynthe

#include "Basic.hpp"

#include "WeaponSynthe_classes.hpp"
#include "WeaponSynthe_parameters.hpp"


namespace SDK
{

// Function WeaponSynthe.WeaponSynthe_C.ExecuteUbergraph_WeaponSynthe
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSynthe_C::ExecuteUbergraph_WeaponSynthe(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthe_C", "ExecuteUbergraph_WeaponSynthe");

	Params::WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthe.WeaponSynthe_C.OnCloseError
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Param_Result                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSynthe_C::OnCloseError(EDialogResult Param_Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthe_C", "OnCloseError");

	Params::WeaponSynthe_C_OnCloseError Parms{};

	Parms.Param_Result = Param_Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthe.WeaponSynthe_C.EventCreateDialog_LoadError
// (BlueprintCallable, BlueprintEvent)

void UWeaponSynthe_C::EventCreateDialog_LoadError()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthe_C", "EventCreateDialog_LoadError");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthe.WeaponSynthe_C.BndEvt__WeaponSynthe_WeaponSyntheAnime_K2Node_ComponentBoundEvent_2_OnCompleteAnim__DelegateSignature
// (BlueprintEvent)

void UWeaponSynthe_C::BndEvt__WeaponSynthe_WeaponSyntheAnime_K2Node_ComponentBoundEvent_2_OnCompleteAnim__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthe_C", "BndEvt__WeaponSynthe_WeaponSyntheAnime_K2Node_ComponentBoundEvent_2_OnCompleteAnim__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthe.WeaponSynthe_C.EventCreateDialog_ShowMeTheMoney
// (BlueprintCallable, BlueprintEvent)

void UWeaponSynthe_C::EventCreateDialog_ShowMeTheMoney()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthe_C", "EventCreateDialog_ShowMeTheMoney");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthe.WeaponSynthe_C.EventCreateDialog_NotSelectAbility
// (BlueprintCallable, BlueprintEvent)

void UWeaponSynthe_C::EventCreateDialog_NotSelectAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthe_C", "EventCreateDialog_NotSelectAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthe.WeaponSynthe_C.BndEvt__WeaponSynthe_BtnBack_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature
// (BlueprintEvent)

void UWeaponSynthe_C::BndEvt__WeaponSynthe_BtnBack_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthe_C", "BndEvt__WeaponSynthe_BtnBack_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthe.WeaponSynthe_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSynthe_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthe_C", "OnAnimationFinished");

	Params::WeaponSynthe_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthe.WeaponSynthe_C.BndEvt__WeaponSynthe_SynthedOpenSlotRadyUpgrade_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWeaponSynthe_C::BndEvt__WeaponSynthe_SynthedOpenSlotRadyUpgrade_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthe_C", "BndEvt__WeaponSynthe_SynthedOpenSlotRadyUpgrade_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthe.WeaponSynthe_C.BndEvt__WeaponSynthe_SynthedOpenSlotApplyUpgrade_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWeaponSynthe_C::BndEvt__WeaponSynthe_SynthedOpenSlotApplyUpgrade_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthe_C", "BndEvt__WeaponSynthe_SynthedOpenSlotApplyUpgrade_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthe.WeaponSynthe_C.RequestWeaponMarge
// (BlueprintCallable, BlueprintEvent)

void UWeaponSynthe_C::RequestWeaponMarge()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthe_C", "RequestWeaponMarge");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthe.WeaponSynthe_C.UnbindOnFinishedWeaponMarge
// (BlueprintCallable, BlueprintEvent)

void UWeaponSynthe_C::UnbindOnFinishedWeaponMarge()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthe_C", "UnbindOnFinishedWeaponMarge");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthe.WeaponSynthe_C.BindOnFinishedWeaponMarge
// (BlueprintCallable, BlueprintEvent)

void UWeaponSynthe_C::BindOnFinishedWeaponMarge()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthe_C", "BindOnFinishedWeaponMarge");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthe.WeaponSynthe_C.EventOnFinishedWeaponMerge
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ErrorCode                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bWasSuccessful                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FOwnItemInfo                     Info                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWeaponSynthe_C::EventOnFinishedWeaponMerge(const int32 ErrorCode, const bool bWasSuccessful, const struct FOwnItemInfo& Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthe_C", "EventOnFinishedWeaponMerge");

	Params::WeaponSynthe_C_EventOnFinishedWeaponMerge Parms{};

	Parms.ErrorCode = ErrorCode;
	Parms.bWasSuccessful = bWasSuccessful;
	Parms.Info = std::move(Info);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthe.WeaponSynthe_C.OnNewWeaponUseChecked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Param_Result                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSynthe_C::OnNewWeaponUseChecked(EDialogResult Param_Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthe_C", "OnNewWeaponUseChecked");

	Params::WeaponSynthe_C_OnNewWeaponUseChecked Parms{};

	Parms.Param_Result = Param_Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthe.WeaponSynthe_C.CheckNewWeaponUse
// (BlueprintCallable, BlueprintEvent)

void UWeaponSynthe_C::CheckNewWeaponUse()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthe_C", "CheckNewWeaponUse");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthe.WeaponSynthe_C.OnCheckedItemLock
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Param_Result                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSynthe_C::OnCheckedItemLock(EDialogResult Param_Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthe_C", "OnCheckedItemLock");

	Params::WeaponSynthe_C_OnCheckedItemLock Parms{};

	Parms.Param_Result = Param_Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthe.WeaponSynthe_C.CheckItemLock
// (BlueprintCallable, BlueprintEvent)

void UWeaponSynthe_C::CheckItemLock()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthe_C", "CheckItemLock");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthe.WeaponSynthe_C.BndEvt__WeaponSynthe_CmnBtn16_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UWeaponSynthe_C::BndEvt__WeaponSynthe_CmnBtn16_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthe_C", "BndEvt__WeaponSynthe_CmnBtn16_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthe.WeaponSynthe_C.OnCostLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSuccess                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponSynthe_C::OnCostLoaded(bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthe_C", "OnCostLoaded");

	Params::WeaponSynthe_C_OnCostLoaded Parms{};

	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthe.WeaponSynthe_C.UnBind On Cost Load
// (BlueprintCallable, BlueprintEvent)

void UWeaponSynthe_C::UnBind_On_Cost_Load()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthe_C", "UnBind On Cost Load");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthe.WeaponSynthe_C.Bind On Cost Load
// (BlueprintCallable, BlueprintEvent)

void UWeaponSynthe_C::Bind_On_Cost_Load()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthe_C", "Bind On Cost Load");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthe.WeaponSynthe_C.BndEvt__WeaponSynthe_FusionItemList_K2Node_ComponentBoundEvent_1_OnSelectItemData__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWeaponSynthe_C::BndEvt__WeaponSynthe_FusionItemList_K2Node_ComponentBoundEvent_1_OnSelectItemData__DelegateSignature(const struct FOwnItemInfo& Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthe_C", "BndEvt__WeaponSynthe_FusionItemList_K2Node_ComponentBoundEvent_1_OnSelectItemData__DelegateSignature");

	Params::WeaponSynthe_C_BndEvt__WeaponSynthe_FusionItemList_K2Node_ComponentBoundEvent_1_OnSelectItemData__DelegateSignature Parms{};

	Parms.Item = std::move(Item);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthe.WeaponSynthe_C.BndEvt__WeaponSynthe_WeaponCustomStorageView_K2Node_ComponentBoundEvent_0_OnSelectListItem__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     SelectItem                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWeaponSynthe_C::BndEvt__WeaponSynthe_WeaponCustomStorageView_K2Node_ComponentBoundEvent_0_OnSelectListItem__DelegateSignature(const struct FOwnItemInfo& SelectItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthe_C", "BndEvt__WeaponSynthe_WeaponCustomStorageView_K2Node_ComponentBoundEvent_0_OnSelectListItem__DelegateSignature");

	Params::WeaponSynthe_C_BndEvt__WeaponSynthe_WeaponCustomStorageView_K2Node_ComponentBoundEvent_0_OnSelectListItem__DelegateSignature Parms{};

	Parms.SelectItem = std::move(SelectItem);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthe.WeaponSynthe_C.SetActiveDecideButton
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsActiveApply                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponSynthe_C::SetActiveDecideButton(bool IsActiveApply)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthe_C", "SetActiveDecideButton");

	Params::WeaponSynthe_C_SetActiveDecideButton Parms{};

	Parms.IsActiveApply = IsActiveApply;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthe.WeaponSynthe_C.ClickedBtnApplyUpgrade
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWeaponSynthe_C::ClickedBtnApplyUpgrade()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthe_C", "ClickedBtnApplyUpgrade");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthe.WeaponSynthe_C.ClickedBtnRadyUpgrade
// (Private, BlueprintCallable, BlueprintEvent)

void UWeaponSynthe_C::ClickedBtnRadyUpgrade()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthe_C", "ClickedBtnRadyUpgrade");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthe.WeaponSynthe_C.UpdateEnableApplyButton
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWeaponSynthe_C::UpdateEnableApplyButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthe_C", "UpdateEnableApplyButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthe.WeaponSynthe_C.UpdateVisibleProbabilityButton
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWeaponSynthe_C::UpdateVisibleProbabilityButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthe_C", "UpdateVisibleProbabilityButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthe.WeaponSynthe_C.SetVisibleItemBox
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponSynthe_C::SetVisibleItemBox(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthe_C", "SetVisibleItemBox");

	Params::WeaponSynthe_C_SetVisibleItemBox Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthe.WeaponSynthe_C.SetVisibleMoney
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponSynthe_C::SetVisibleMoney(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthe_C", "SetVisibleMoney");

	Params::WeaponSynthe_C_SetVisibleMoney Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthe.WeaponSynthe_C.UpdateMoney
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWeaponSynthe_C::UpdateMoney()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthe_C", "UpdateMoney");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthe.WeaponSynthe_C.SetVisibleLiquidMemory
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponSynthe_C::SetVisibleLiquidMemory(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthe_C", "SetVisibleLiquidMemory");

	Params::WeaponSynthe_C_SetVisibleLiquidMemory Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthe.WeaponSynthe_C.UpdateVisibleLiquidMemory
// (Private, BlueprintCallable, BlueprintEvent)

void UWeaponSynthe_C::UpdateVisibleLiquidMemory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthe_C", "UpdateVisibleLiquidMemory");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthe.WeaponSynthe_C.BackWeaponSelect
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWeaponSynthe_C::BackWeaponSelect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthe_C", "BackWeaponSelect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthe.WeaponSynthe_C.CheckInvalidFusionItem
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWeaponSynthe_C::CheckInvalidFusionItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthe_C", "CheckInvalidFusionItem");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthe.WeaponSynthe_C.PlayAnimIn
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWeaponSynthe_C::PlayAnimIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthe_C", "PlayAnimIn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthe.WeaponSynthe_C.PlayAnimOut
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWeaponSynthe_C::PlayAnimOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthe_C", "PlayAnimOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthe.WeaponSynthe_C.PlayAnimDetailIn
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWeaponSynthe_C::PlayAnimDetailIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthe_C", "PlayAnimDetailIn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthe.WeaponSynthe_C.PlayAnimChangeList
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUMGSequencePlayMode                    PlayMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSynthe_C::PlayAnimChangeList(EUMGSequencePlayMode PlayMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthe_C", "PlayAnimChangeList");

	Params::WeaponSynthe_C_PlayAnimChangeList Parms{};

	Parms.PlayMode = PlayMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthe.WeaponSynthe_C.OnSelectWeapon
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWeaponSynthe_C::OnSelectWeapon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthe_C", "OnSelectWeapon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthe.WeaponSynthe_C.PlayAnimBtn
// (Private, BlueprintCallable, BlueprintEvent)

void UWeaponSynthe_C::PlayAnimBtn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthe_C", "PlayAnimBtn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthe.WeaponSynthe_C.BackItemSelect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWeaponSynthe_C::BackItemSelect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthe_C", "BackItemSelect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthe.WeaponSynthe_C.OnCompletedConfirmDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Param_Result                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSynthe_C::OnCompletedConfirmDialog(EDialogResult Param_Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthe_C", "OnCompletedConfirmDialog");

	Params::WeaponSynthe_C_OnCompletedConfirmDialog Parms{};

	Parms.Param_Result = Param_Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthe.WeaponSynthe_C.OnInit
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWeaponSynthe_C::OnInit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthe_C", "OnInit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthe.WeaponSynthe_C.OnTerm
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWeaponSynthe_C::OnTerm()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthe_C", "OnTerm");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthe.WeaponSynthe_C.OnBind
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWeaponSynthe_C::OnBind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthe_C", "OnBind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthe.WeaponSynthe_C.OnUnbind
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWeaponSynthe_C::OnUnbind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthe_C", "OnUnbind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthe.WeaponSynthe_C.Reset
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWeaponSynthe_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthe_C", "Reset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthe.WeaponSynthe_C.SetEnableDecide
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InEnabled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponSynthe_C::SetEnableDecide(bool InEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthe_C", "SetEnableDecide");

	Params::WeaponSynthe_C_SetEnableDecide Parms{};

	Parms.InEnabled = InEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthe.WeaponSynthe_C.SetVisibleWeaponStatusWindow
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponSynthe_C::SetVisibleWeaponStatusWindow(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthe_C", "SetVisibleWeaponStatusWindow");

	Params::WeaponSynthe_C_SetVisibleWeaponStatusWindow Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthe.WeaponSynthe_C.SetVisibleInfomation
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponSynthe_C::SetVisibleInfomation(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthe_C", "SetVisibleInfomation");

	Params::WeaponSynthe_C_SetVisibleInfomation Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthe.WeaponSynthe_C.SetVisibleLoading
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponSynthe_C::SetVisibleLoading(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthe_C", "SetVisibleLoading");

	Params::WeaponSynthe_C_SetVisibleLoading Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthe.WeaponSynthe_C.SetVisibleSuccess
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponSynthe_C::SetVisibleSuccess(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthe_C", "SetVisibleSuccess");

	Params::WeaponSynthe_C_SetVisibleSuccess Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthe.WeaponSynthe_C.SetVisibleResult
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponSynthe_C::SetVisibleResult(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthe_C", "SetVisibleResult");

	Params::WeaponSynthe_C_SetVisibleResult Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthe.WeaponSynthe_C.OpenSuccess
// (Protected, BlueprintCallable, BlueprintEvent)

void UWeaponSynthe_C::OpenSuccess()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthe_C", "OpenSuccess");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthe.WeaponSynthe_C.OpenResult
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWeaponSynthe_C::OpenResult()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthe_C", "OpenResult");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthe.WeaponSynthe_C.FinishedSuccess
// (Protected, BlueprintCallable, BlueprintEvent)

void UWeaponSynthe_C::FinishedSuccess()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthe_C", "FinishedSuccess");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthe.WeaponSynthe_C.ClickedDecide
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWeaponSynthe_C::ClickedDecide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthe_C", "ClickedDecide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthe.WeaponSynthe_C.ClickedBack
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWeaponSynthe_C::ClickedBack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthe_C", "ClickedBack");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthe.WeaponSynthe_C.IsActiveLiquidMemory
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    bActive                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponSynthe_C::IsActiveLiquidMemory(bool* bActive) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthe_C", "IsActiveLiquidMemory");

	Params::WeaponSynthe_C_IsActiveLiquidMemory Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bActive != nullptr)
		*bActive = Parms.bActive;
}

}

