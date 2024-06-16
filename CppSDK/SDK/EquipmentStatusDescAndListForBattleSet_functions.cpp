#pragma once

 

// Package: EquipmentStatusDescAndListForBattleSet

#include "Basic.hpp"

#include "EquipmentStatusDescAndListForBattleSet_classes.hpp"
#include "EquipmentStatusDescAndListForBattleSet_parameters.hpp"


namespace SDK
{

// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnHideWindowFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UEquipmentStatusDescAndListForBattleSet_C::OnHideWindowFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "OnHideWindowFinished__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnEquipmentListItemSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InEquippedEquipmentUniqueId                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           InSelectedEquipmentUniqueId                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UEquipmentStatusDescAndListForBattleSet_C::OnEquipmentListItemSelected__DelegateSignature(const class FString& InEquippedEquipmentUniqueId, const class FString& InSelectedEquipmentUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "OnEquipmentListItemSelected__DelegateSignature");

	Params::EquipmentStatusDescAndListForBattleSet_C_OnEquipmentListItemSelected__DelegateSignature Parms{};

	Parms.InEquippedEquipmentUniqueId = std::move(InEquippedEquipmentUniqueId);
	Parms.InSelectedEquipmentUniqueId = std::move(InSelectedEquipmentUniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnEquipmentChangeBtnPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UEquipmentStatusDescAndListForBattleSet_C::OnEquipmentChangeBtnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "OnEquipmentChangeBtnPressed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnPlayerCharacterEquippedCostumeChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UEquipmentStatusDescAndListForBattleSet_C::OnPlayerCharacterEquippedCostumeChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "OnPlayerCharacterEquippedCostumeChanged__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnLeftSideParameterStatusUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BattleSetInfoType                     InBattleSetInfoType                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InIncludesClassInfoUpdate                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentStatusDescAndListForBattleSet_C::OnLeftSideParameterStatusUpdated__DelegateSignature(E_BattleSetInfoType InBattleSetInfoType, bool InIncludesClassInfoUpdate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "OnLeftSideParameterStatusUpdated__DelegateSignature");

	Params::EquipmentStatusDescAndListForBattleSet_C_OnLeftSideParameterStatusUpdated__DelegateSignature Parms{};

	Parms.InBattleSetInfoType = InBattleSetInfoType;
	Parms.InIncludesClassInfoUpdate = InIncludesClassInfoUpdate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnResetLeftSideParameterDiffMark__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UEquipmentStatusDescAndListForBattleSet_C::OnResetLeftSideParameterDiffMark__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "OnResetLeftSideParameterDiffMark__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnEquippedWeaponSpawned__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BattleSetInfoType                     InBattleSetInfoType                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentStatusDescAndListForBattleSet_C::OnEquippedWeaponSpawned__DelegateSignature(E_BattleSetInfoType InBattleSetInfoType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "OnEquippedWeaponSpawned__DelegateSignature");

	Params::EquipmentStatusDescAndListForBattleSet_C_OnEquippedWeaponSpawned__DelegateSignature Parms{};

	Parms.InBattleSetInfoType = InBattleSetInfoType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnClassChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UEquipmentStatusDescAndListForBattleSet_C::OnClassChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "OnClassChanged__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnEquippedBattleImagineChangeRequestCompleted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UEquipmentStatusDescAndListForBattleSet_C::OnEquippedBattleImagineChangeRequestCompleted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "OnEquippedBattleImagineChangeRequestCompleted__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnEquippedInnerImagineChangeRequestCompleted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UEquipmentStatusDescAndListForBattleSet_C::OnEquippedInnerImagineChangeRequestCompleted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "OnEquippedInnerImagineChangeRequestCompleted__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnSetLeftSideParameterExpGaugeUpdateStop__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsUpdateStop                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentStatusDescAndListForBattleSet_C::OnSetLeftSideParameterExpGaugeUpdateStop__DelegateSignature(bool InIsUpdateStop)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "OnSetLeftSideParameterExpGaugeUpdateStop__DelegateSignature");

	Params::EquipmentStatusDescAndListForBattleSet_C_OnSetLeftSideParameterExpGaugeUpdateStop__DelegateSignature Parms{};

	Parms.InIsUpdateStop = InIsUpdateStop;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnEquippedWeaponChangeRequestCompleted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UEquipmentStatusDescAndListForBattleSet_C::OnEquippedWeaponChangeRequestCompleted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "OnEquippedWeaponChangeRequestCompleted__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnCharaDetailedStatus__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UEquipmentStatusDescAndListForBattleSet_C::OnCharaDetailedStatus__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "OnCharaDetailedStatus__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnTermEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UEquipmentStatusDescAndListForBattleSet_C::OnTermEnd__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "OnTermEnd__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ExecuteUbergraph_EquipmentStatusDescAndListForBattleSet
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentStatusDescAndListForBattleSet_C::ExecuteUbergraph_EquipmentStatusDescAndListForBattleSet(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "ExecuteUbergraph_EquipmentStatusDescAndListForBattleSet");

	Params::EquipmentStatusDescAndListForBattleSet_C_ExecuteUbergraph_EquipmentStatusDescAndListForBattleSet Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnWaitPlayerStatusRecalcEndAtImagineEquipChange
// (BlueprintCallable, BlueprintEvent)

void UEquipmentStatusDescAndListForBattleSet_C::OnWaitPlayerStatusRecalcEndAtImagineEquipChange()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "OnWaitPlayerStatusRecalcEndAtImagineEquipChange");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnWaitEquippedWeaponSpawnTimerEnd
// (BlueprintCallable, BlueprintEvent)

void UEquipmentStatusDescAndListForBattleSet_C::OnWaitEquippedWeaponSpawnTimerEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "OnWaitEquippedWeaponSpawnTimerEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_EquipmentList_K2Node_ComponentBoundEvent_1_OnCancelBtnPressed__DelegateSignature
// (BlueprintEvent)

void UEquipmentStatusDescAndListForBattleSet_C::BndEvt__EquipmentStatusDescAndListForBattleSet_EquipmentList_K2Node_ComponentBoundEvent_1_OnCancelBtnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "BndEvt__EquipmentStatusDescAndListForBattleSet_EquipmentList_K2Node_ComponentBoundEvent_1_OnCancelBtnPressed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnImagineEquipChangeCompleted
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBCharaEquipType                       Param_EquipType                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           UniqueId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    IsEquip                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInIsExpiredStickerWeapons                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>                   InExpiredStickerWeaponUniqueIds                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FSBExpiredEquipmentData          InExpiredEquipmentData                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UEquipmentStatusDescAndListForBattleSet_C::OnImagineEquipChangeCompleted(int32 RetCode, const ESBCharaEquipType Param_EquipType, const class FString& UniqueId, const bool IsEquip, const bool bInIsExpiredStickerWeapons, const TArray<class FString>& InExpiredStickerWeaponUniqueIds, const struct FSBExpiredEquipmentData& InExpiredEquipmentData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "OnImagineEquipChangeCompleted");

	Params::EquipmentStatusDescAndListForBattleSet_C_OnImagineEquipChangeCompleted Parms{};

	Parms.RetCode = RetCode;
	Parms.Param_EquipType = Param_EquipType;
	Parms.UniqueId = std::move(UniqueId);
	Parms.IsEquip = IsEquip;
	Parms.bInIsExpiredStickerWeapons = bInIsExpiredStickerWeapons;
	Parms.InExpiredStickerWeaponUniqueIds = std::move(InExpiredStickerWeaponUniqueIds);
	Parms.InExpiredEquipmentData = std::move(InExpiredEquipmentData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ChangeEquipmentResultProc
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>                   InExpiredWeaponStickerUniqueIds                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FSBExpiredEquipmentData          InExpiredEquipmentData                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    InIsClassChange                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InIsDisarm                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentStatusDescAndListForBattleSet_C::ChangeEquipmentResultProc(const TArray<class FString>& InExpiredWeaponStickerUniqueIds, const struct FSBExpiredEquipmentData& InExpiredEquipmentData, bool InIsClassChange, bool InIsDisarm)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "ChangeEquipmentResultProc");

	Params::EquipmentStatusDescAndListForBattleSet_C_ChangeEquipmentResultProc Parms{};

	Parms.InExpiredWeaponStickerUniqueIds = std::move(InExpiredWeaponStickerUniqueIds);
	Parms.InExpiredEquipmentData = std::move(InExpiredEquipmentData);
	Parms.InIsClassChange = InIsClassChange;
	Parms.InIsDisarm = InIsDisarm;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ExpiredItemNoticeSystemMessageTimerEnd
// (BlueprintCallable, BlueprintEvent)

void UEquipmentStatusDescAndListForBattleSet_C::ExpiredItemNoticeSystemMessageTimerEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "ExpiredItemNoticeSystemMessageTimerEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_BtnFullScreenForDetailedStatus_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UEquipmentStatusDescAndListForBattleSet_C::BndEvt__EquipmentStatusDescAndListForBattleSet_BtnFullScreenForDetailedStatus_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "BndEvt__EquipmentStatusDescAndListForBattleSet_BtnFullScreenForDetailedStatus_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_LeftSideParametersForSecondLevel_K2Node_ComponentBoundEvent_6_OnDetailStatusBtnClicked__DelegateSignature
// (BlueprintEvent)

void UEquipmentStatusDescAndListForBattleSet_C::BndEvt__EquipmentStatusDescAndListForBattleSet_LeftSideParametersForSecondLevel_K2Node_ComponentBoundEvent_6_OnDetailStatusBtnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "BndEvt__EquipmentStatusDescAndListForBattleSet_LeftSideParametersForSecondLevel_K2Node_ComponentBoundEvent_6_OnDetailStatusBtnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.CloseDetailedStatus
// (BlueprintCallable, BlueprintEvent)

void UEquipmentStatusDescAndListForBattleSet_C::CloseDetailedStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "CloseDetailedStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_BackToBattleSetTopLevelBtn_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature
// (BlueprintEvent)

void UEquipmentStatusDescAndListForBattleSet_C::BndEvt__EquipmentStatusDescAndListForBattleSet_BackToBattleSetTopLevelBtn_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "BndEvt__EquipmentStatusDescAndListForBattleSet_BackToBattleSetTopLevelBtn_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnCalcEquipStatusDiff
// (BlueprintCallable, BlueprintEvent)

void UEquipmentStatusDescAndListForBattleSet_C::OnCalcEquipStatusDiff()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "OnCalcEquipStatusDiff");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_EquippedEquipmentStatusDesc_K2Node_ComponentBoundEvent_1_OnImagineRemoveBtnPressed__DelegateSignature
// (BlueprintEvent)

void UEquipmentStatusDescAndListForBattleSet_C::BndEvt__EquipmentStatusDescAndListForBattleSet_EquippedEquipmentStatusDesc_K2Node_ComponentBoundEvent_1_OnImagineRemoveBtnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "BndEvt__EquipmentStatusDescAndListForBattleSet_EquippedEquipmentStatusDesc_K2Node_ComponentBoundEvent_1_OnImagineRemoveBtnPressed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_EquipmentList_K2Node_ComponentBoundEvent_0_OnFilterBtnBagOrStoragePressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    InIsFilterBtnStoragePressed                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentStatusDescAndListForBattleSet_C::BndEvt__EquipmentStatusDescAndListForBattleSet_EquipmentList_K2Node_ComponentBoundEvent_0_OnFilterBtnBagOrStoragePressed__DelegateSignature(bool InIsFilterBtnStoragePressed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "BndEvt__EquipmentStatusDescAndListForBattleSet_EquipmentList_K2Node_ComponentBoundEvent_0_OnFilterBtnBagOrStoragePressed__DelegateSignature");

	Params::EquipmentStatusDescAndListForBattleSet_C_BndEvt__EquipmentStatusDescAndListForBattleSet_EquipmentList_K2Node_ComponentBoundEvent_0_OnFilterBtnBagOrStoragePressed__DelegateSignature Parms{};

	Parms.InIsFilterBtnStoragePressed = InIsFilterBtnStoragePressed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentStatusDescAndListForBattleSet_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "PreConstruct");

	Params::EquipmentStatusDescAndListForBattleSet_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_List_K2Node_ComponentBoundEvent_14_OnSortTypeSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// ESBItemSortType                         InSelectedSortType                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentStatusDescAndListForBattleSet_C::BndEvt__EquipmentStatusDescAndListForBattleSet_List_K2Node_ComponentBoundEvent_14_OnSortTypeSelected__DelegateSignature(ESBItemSortType InSelectedSortType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "BndEvt__EquipmentStatusDescAndListForBattleSet_List_K2Node_ComponentBoundEvent_14_OnSortTypeSelected__DelegateSignature");

	Params::EquipmentStatusDescAndListForBattleSet_C_BndEvt__EquipmentStatusDescAndListForBattleSet_List_K2Node_ComponentBoundEvent_14_OnSortTypeSelected__DelegateSignature Parms{};

	Parms.InSelectedSortType = InSelectedSortType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_List_K2Node_ComponentBoundEvent_13_OnFilterApply__DelegateSignature
// (BlueprintEvent)

void UEquipmentStatusDescAndListForBattleSet_C::BndEvt__EquipmentStatusDescAndListForBattleSet_List_K2Node_ComponentBoundEvent_13_OnFilterApply__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "BndEvt__EquipmentStatusDescAndListForBattleSet_List_K2Node_ComponentBoundEvent_13_OnFilterApply__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_List_K2Node_ComponentBoundEvent_11_OnEquipChangeBtnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// E_BattleSetInfoType                     InInfoType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           InEquipmentUniqueId                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UEquipmentStatusDescAndListForBattleSet_C::BndEvt__EquipmentStatusDescAndListForBattleSet_List_K2Node_ComponentBoundEvent_11_OnEquipChangeBtnPressed__DelegateSignature(E_BattleSetInfoType InInfoType, const class FString& InEquipmentUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "BndEvt__EquipmentStatusDescAndListForBattleSet_List_K2Node_ComponentBoundEvent_11_OnEquipChangeBtnPressed__DelegateSignature");

	Params::EquipmentStatusDescAndListForBattleSet_C_BndEvt__EquipmentStatusDescAndListForBattleSet_List_K2Node_ComponentBoundEvent_11_OnEquipChangeBtnPressed__DelegateSignature Parms{};

	Parms.InInfoType = InInfoType;
	Parms.InEquipmentUniqueId = std::move(InEquipmentUniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_List_K2Node_ComponentBoundEvent_8_OnListItemSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UItemIconBtn_C*                   InSelectedListItem                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentStatusDescAndListForBattleSet_C::BndEvt__EquipmentStatusDescAndListForBattleSet_List_K2Node_ComponentBoundEvent_8_OnListItemSelected__DelegateSignature(class UItemIconBtn_C* InSelectedListItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "BndEvt__EquipmentStatusDescAndListForBattleSet_List_K2Node_ComponentBoundEvent_8_OnListItemSelected__DelegateSignature");

	Params::EquipmentStatusDescAndListForBattleSet_C_BndEvt__EquipmentStatusDescAndListForBattleSet_List_K2Node_ComponentBoundEvent_8_OnListItemSelected__DelegateSignature Parms{};

	Parms.InSelectedListItem = InSelectedListItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BndEvt__MyCharaMenu_WeaponDescAndListlForBattleSet_StatusTypeSwitchBtn_K2Node_ComponentBoundEvent_7_OnSwitchBtnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   InPressedSwitchBtnId                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentStatusDescAndListForBattleSet_C::BndEvt__MyCharaMenu_WeaponDescAndListlForBattleSet_StatusTypeSwitchBtn_K2Node_ComponentBoundEvent_7_OnSwitchBtnPressed__DelegateSignature(int32 InPressedSwitchBtnId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "BndEvt__MyCharaMenu_WeaponDescAndListlForBattleSet_StatusTypeSwitchBtn_K2Node_ComponentBoundEvent_7_OnSwitchBtnPressed__DelegateSignature");

	Params::EquipmentStatusDescAndListForBattleSet_C_BndEvt__MyCharaMenu_WeaponDescAndListlForBattleSet_StatusTypeSwitchBtn_K2Node_ComponentBoundEvent_7_OnSwitchBtnPressed__DelegateSignature Parms{};

	Parms.InPressedSwitchBtnId = InPressedSwitchBtnId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UEquipmentStatusDescAndListForBattleSet_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.UIInputBlockFrontRow
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsBlock                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentStatusDescAndListForBattleSet_C::UIInputBlockFrontRow(bool InIsBlock)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "UIInputBlockFrontRow");

	Params::EquipmentStatusDescAndListForBattleSet_C_UIInputBlockFrontRow Parms{};

	Parms.InIsBlock = InIsBlock;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BndEvt__BtnScreen_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UEquipmentStatusDescAndListForBattleSet_C::BndEvt__BtnScreen_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "BndEvt__BtnScreen_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.UiInputBlock
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsBlock                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentStatusDescAndListForBattleSet_C::UiInputBlock(bool InIsBlock)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "UiInputBlock");

	Params::EquipmentStatusDescAndListForBattleSet_C_UiInputBlock Parms{};

	Parms.InIsBlock = InIsBlock;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnPress_Cancel
// (Event, Public, BlueprintEvent)

void UEquipmentStatusDescAndListForBattleSet_C::OnPress_Cancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "OnPress_Cancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentStatusDescAndListForBattleSet_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "OnAnimationFinished");

	Params::EquipmentStatusDescAndListForBattleSet_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UEquipmentStatusDescAndListForBattleSet_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ShowQuestProgressUnableByClassChangeConfirmDialog
// (BlueprintCallable, BlueprintEvent)

void UEquipmentStatusDescAndListForBattleSet_C::ShowQuestProgressUnableByClassChangeConfirmDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "ShowQuestProgressUnableByClassChangeConfirmDialog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ShowClassChangeUnableMessageDialog
// (BlueprintCallable, BlueprintEvent)

void UEquipmentStatusDescAndListForBattleSet_C::ShowClassChangeUnableMessageDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "ShowClassChangeUnableMessageDialog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ShowBattleImagineWithPossessionSkillIsEquippedMessageDialog
// (BlueprintCallable, BlueprintEvent)

void UEquipmentStatusDescAndListForBattleSet_C::ShowBattleImagineWithPossessionSkillIsEquippedMessageDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "ShowBattleImagineWithPossessionSkillIsEquippedMessageDialog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ShowBattleImagineDuplicateMessageDialog
// (BlueprintCallable, BlueprintEvent)

void UEquipmentStatusDescAndListForBattleSet_C::ShowBattleImagineDuplicateMessageDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "ShowBattleImagineDuplicateMessageDialog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.EndUsingUnusedEquipConfirmDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EYesNoDialogResult                      InYesNoResult                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentStatusDescAndListForBattleSet_C::EndUsingUnusedEquipConfirmDialog(EYesNoDialogResult InYesNoResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "EndUsingUnusedEquipConfirmDialog");

	Params::EquipmentStatusDescAndListForBattleSet_C_EndUsingUnusedEquipConfirmDialog Parms{};

	Parms.InYesNoResult = InYesNoResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ShowUsingUnusedEquipConfirmDialog
// (BlueprintCallable, BlueprintEvent)

void UEquipmentStatusDescAndListForBattleSet_C::ShowUsingUnusedEquipConfirmDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "ShowUsingUnusedEquipConfirmDialog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ShowUnchangeableMessageDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValuesInUnchangeableRetValue                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_BattleSetInfoType                     InBattleSetInfoType                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentStatusDescAndListForBattleSet_C::ShowUnchangeableMessageDialog(ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValues InUnchangeableRetValue, E_BattleSetInfoType InBattleSetInfoType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "ShowUnchangeableMessageDialog");

	Params::EquipmentStatusDescAndListForBattleSet_C_ShowUnchangeableMessageDialog Parms{};

	Parms.InUnchangeableRetValue = InUnchangeableRetValue;
	Parms.InBattleSetInfoType = InBattleSetInfoType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.SetWeaponModelRotateActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsRotateActive                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentStatusDescAndListForBattleSet_C::SetWeaponModelRotateActive(bool InIsRotateActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "SetWeaponModelRotateActive");

	Params::EquipmentStatusDescAndListForBattleSet_C_SetWeaponModelRotateActive Parms{};

	Parms.InIsRotateActive = InIsRotateActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnClassChangeFailure
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InRetCode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentStatusDescAndListForBattleSet_C::OnClassChangeFailure(int32 InRetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "OnClassChangeFailure");

	Params::EquipmentStatusDescAndListForBattleSet_C_OnClassChangeFailure Parms{};

	Parms.InRetCode = InRetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ReturnFromClassChangeProgressContinueConfirmDialog
// (BlueprintCallable, BlueprintEvent)

void UEquipmentStatusDescAndListForBattleSet_C::ReturnFromClassChangeProgressContinueConfirmDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "ReturnFromClassChangeProgressContinueConfirmDialog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ContinueWeaponChangeProcFromMoveEquipmentToBagRequest
// (BlueprintCallable, BlueprintEvent)

void UEquipmentStatusDescAndListForBattleSet_C::ContinueWeaponChangeProcFromMoveEquipmentToBagRequest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "ContinueWeaponChangeProcFromMoveEquipmentToBagRequest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ContinueWeaponChangeProcFromUseUnusedEquipConfirmDialog
// (BlueprintCallable, BlueprintEvent)

void UEquipmentStatusDescAndListForBattleSet_C::ContinueWeaponChangeProcFromUseUnusedEquipConfirmDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "ContinueWeaponChangeProcFromUseUnusedEquipConfirmDialog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_ClassChangedJingle_K2Node_ComponentBoundEvent_1_OnPlayedAnim__DelegateSignature
// (BlueprintEvent)

void UEquipmentStatusDescAndListForBattleSet_C::BndEvt__EquipmentStatusDescAndListForBattleSet_ClassChangedJingle_K2Node_ComponentBoundEvent_1_OnPlayedAnim__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "BndEvt__EquipmentStatusDescAndListForBattleSet_ClassChangedJingle_K2Node_ComponentBoundEvent_1_OnPlayedAnim__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnSpawnWeapon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InInventoryIndex                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBWeaponEquipType                      InWeaponEquipType                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentStatusDescAndListForBattleSet_C::OnSpawnWeapon(int32 InInventoryIndex, ESBWeaponEquipType InWeaponEquipType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "OnSpawnWeapon");

	Params::EquipmentStatusDescAndListForBattleSet_C_OnSpawnWeapon Parms{};

	Parms.InInventoryIndex = InInventoryIndex;
	Parms.InWeaponEquipType = InWeaponEquipType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnClientRestart
// (BlueprintCallable, BlueprintEvent)

void UEquipmentStatusDescAndListForBattleSet_C::OnClientRestart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "OnClientRestart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnClassChangeNotify
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InRetCode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInIsExpiredStickerWeapons                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>                   InExpiredStickerWeaponUniqueIds                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FSBExpiredEquipmentData          InDirtyExpiredEquipmentData                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UEquipmentStatusDescAndListForBattleSet_C::OnClassChangeNotify(int32 InRetCode, const bool bInIsExpiredStickerWeapons, const TArray<class FString>& InExpiredStickerWeaponUniqueIds, const struct FSBExpiredEquipmentData& InDirtyExpiredEquipmentData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "OnClassChangeNotify");

	Params::EquipmentStatusDescAndListForBattleSet_C_OnClassChangeNotify Parms{};

	Parms.InRetCode = InRetCode;
	Parms.bInIsExpiredStickerWeapons = bInIsExpiredStickerWeapons;
	Parms.InExpiredStickerWeaponUniqueIds = std::move(InExpiredStickerWeaponUniqueIds);
	Parms.InDirtyExpiredEquipmentData = std::move(InDirtyExpiredEquipmentData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_SelectedEquipmentStatusDesc_K2Node_ComponentBoundEvent_0_OnRequestWeaponModelLoad__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInventoryItemData               InWeaponInventoryItemData                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UEquipmentStatusDescAndListForBattleSet_C::BndEvt__EquipmentStatusDescAndListForBattleSet_SelectedEquipmentStatusDesc_K2Node_ComponentBoundEvent_0_OnRequestWeaponModelLoad__DelegateSignature(const struct FInventoryItemData& InWeaponInventoryItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "BndEvt__EquipmentStatusDescAndListForBattleSet_SelectedEquipmentStatusDesc_K2Node_ComponentBoundEvent_0_OnRequestWeaponModelLoad__DelegateSignature");

	Params::EquipmentStatusDescAndListForBattleSet_C_BndEvt__EquipmentStatusDescAndListForBattleSet_SelectedEquipmentStatusDesc_K2Node_ComponentBoundEvent_0_OnRequestWeaponModelLoad__DelegateSignature Parms{};

	Parms.InWeaponInventoryItemData = std::move(InWeaponInventoryItemData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.WeaponModelLoadCompleted
// (BlueprintCallable, BlueprintEvent)

void UEquipmentStatusDescAndListForBattleSet_C::WeaponModelLoadCompleted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "WeaponModelLoadCompleted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnWeaponEquipDelegate
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInIsExpiredStickerWeapons                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>                   InExpiredStickerWeaponUniqueIds                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FSBExpiredEquipmentData          InExpiredEquipmentData                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UEquipmentStatusDescAndListForBattleSet_C::OnWeaponEquipDelegate(int32 RetCode, const bool bInIsExpiredStickerWeapons, const TArray<class FString>& InExpiredStickerWeaponUniqueIds, const struct FSBExpiredEquipmentData& InExpiredEquipmentData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "OnWeaponEquipDelegate");

	Params::EquipmentStatusDescAndListForBattleSet_C_OnWeaponEquipDelegate Parms{};

	Parms.RetCode = RetCode;
	Parms.bInIsExpiredStickerWeapons = bInIsExpiredStickerWeapons;
	Parms.InExpiredStickerWeaponUniqueIds = std::move(InExpiredStickerWeaponUniqueIds);
	Parms.InExpiredEquipmentData = std::move(InExpiredEquipmentData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.WeaponChangeProc
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InWeaponUniqueId                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UEquipmentStatusDescAndListForBattleSet_C::WeaponChangeProc(const class FString& InWeaponUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "WeaponChangeProc");

	Params::EquipmentStatusDescAndListForBattleSet_C_WeaponChangeProc Parms{};

	Parms.InWeaponUniqueId = std::move(InWeaponUniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnImagineArtsChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESkillActionPosition                    ChangedSAP                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           UniqueId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UEquipmentStatusDescAndListForBattleSet_C::OnImagineArtsChanged(const ESkillActionPosition ChangedSAP, const class FString& UniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "OnImagineArtsChanged");

	Params::EquipmentStatusDescAndListForBattleSet_C_OnImagineArtsChanged Parms{};

	Parms.ChangedSAP = ChangedSAP;
	Parms.UniqueId = std::move(UniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ContinueBattleImagineChangeProcFromMoveEquipmentToBagRequest
// (BlueprintCallable, BlueprintEvent)

void UEquipmentStatusDescAndListForBattleSet_C::ContinueBattleImagineChangeProcFromMoveEquipmentToBagRequest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "ContinueBattleImagineChangeProcFromMoveEquipmentToBagRequest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnBattleImagineEquipChangeCompleted
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBCharaEquipType                       Param_EquipType                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           UniqueId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    IsEquip                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInIsExpiredStickerWeapons                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>                   InExpiredStickerWeaponUniqueIds                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FSBExpiredEquipmentData          InExpiredEquipmentData                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UEquipmentStatusDescAndListForBattleSet_C::OnBattleImagineEquipChangeCompleted(int32 RetCode, const ESBCharaEquipType Param_EquipType, const class FString& UniqueId, const bool IsEquip, const bool bInIsExpiredStickerWeapons, const TArray<class FString>& InExpiredStickerWeaponUniqueIds, const struct FSBExpiredEquipmentData& InExpiredEquipmentData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "OnBattleImagineEquipChangeCompleted");

	Params::EquipmentStatusDescAndListForBattleSet_C_OnBattleImagineEquipChangeCompleted Parms{};

	Parms.RetCode = RetCode;
	Parms.Param_EquipType = Param_EquipType;
	Parms.UniqueId = std::move(UniqueId);
	Parms.IsEquip = IsEquip;
	Parms.bInIsExpiredStickerWeapons = bInIsExpiredStickerWeapons;
	Parms.InExpiredStickerWeaponUniqueIds = std::move(InExpiredStickerWeaponUniqueIds);
	Parms.InExpiredEquipmentData = std::move(InExpiredEquipmentData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ContinueBattleImagineChangeProcFromUseUnusedEquipConfirmDialog
// (BlueprintCallable, BlueprintEvent)

void UEquipmentStatusDescAndListForBattleSet_C::ContinueBattleImagineChangeProcFromUseUnusedEquipConfirmDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "ContinueBattleImagineChangeProcFromUseUnusedEquipConfirmDialog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BattleImagineChangeProc
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InBattleImagineUniqueId                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    InDisarm                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentStatusDescAndListForBattleSet_C::BattleImagineChangeProc(const class FString& InBattleImagineUniqueId, bool InDisarm)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "BattleImagineChangeProc");

	Params::EquipmentStatusDescAndListForBattleSet_C_BattleImagineChangeProc Parms{};

	Parms.InBattleImagineUniqueId = std::move(InBattleImagineUniqueId);
	Parms.InDisarm = InDisarm;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BattleImagineModelLoadCompleted
// (BlueprintCallable, BlueprintEvent)

void UEquipmentStatusDescAndListForBattleSet_C::BattleImagineModelLoadCompleted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "BattleImagineModelLoadCompleted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_SelectedEquipmentStatusDesc_K2Node_ComponentBoundEvent_0_OnRequestBattleImagineModelLoad__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInventoryItemData               InBattleImagineInventoryItemData                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UEquipmentStatusDescAndListForBattleSet_C::BndEvt__EquipmentStatusDescAndListForBattleSet_SelectedEquipmentStatusDesc_K2Node_ComponentBoundEvent_0_OnRequestBattleImagineModelLoad__DelegateSignature(const struct FInventoryItemData& InBattleImagineInventoryItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "BndEvt__EquipmentStatusDescAndListForBattleSet_SelectedEquipmentStatusDesc_K2Node_ComponentBoundEvent_0_OnRequestBattleImagineModelLoad__DelegateSignature");

	Params::EquipmentStatusDescAndListForBattleSet_C_BndEvt__EquipmentStatusDescAndListForBattleSet_SelectedEquipmentStatusDesc_K2Node_ComponentBoundEvent_0_OnRequestBattleImagineModelLoad__DelegateSignature Parms{};

	Parms.InBattleImagineInventoryItemData = std::move(InBattleImagineInventoryItemData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnCharaEquipPassiveImagineChanged
// (BlueprintCallable, BlueprintEvent)

void UEquipmentStatusDescAndListForBattleSet_C::OnCharaEquipPassiveImagineChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "OnCharaEquipPassiveImagineChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ContinueInnerImagineChangeProcFromMoveEquipmentToBagRequest
// (BlueprintCallable, BlueprintEvent)

void UEquipmentStatusDescAndListForBattleSet_C::ContinueInnerImagineChangeProcFromMoveEquipmentToBagRequest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "ContinueInnerImagineChangeProcFromMoveEquipmentToBagRequest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnInnerImagineEquipChangeCompleted
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBCharaEquipType                       Param_EquipType                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           UniqueId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    IsEquip                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInIsExpiredStickerWeapons                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>                   InExpiredStickerWeaponUniqueIds                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FSBExpiredEquipmentData          InExpiredEquipmentData                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UEquipmentStatusDescAndListForBattleSet_C::OnInnerImagineEquipChangeCompleted(int32 RetCode, const ESBCharaEquipType Param_EquipType, const class FString& UniqueId, const bool IsEquip, const bool bInIsExpiredStickerWeapons, const TArray<class FString>& InExpiredStickerWeaponUniqueIds, const struct FSBExpiredEquipmentData& InExpiredEquipmentData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "OnInnerImagineEquipChangeCompleted");

	Params::EquipmentStatusDescAndListForBattleSet_C_OnInnerImagineEquipChangeCompleted Parms{};

	Parms.RetCode = RetCode;
	Parms.Param_EquipType = Param_EquipType;
	Parms.UniqueId = std::move(UniqueId);
	Parms.IsEquip = IsEquip;
	Parms.bInIsExpiredStickerWeapons = bInIsExpiredStickerWeapons;
	Parms.InExpiredStickerWeaponUniqueIds = std::move(InExpiredStickerWeaponUniqueIds);
	Parms.InExpiredEquipmentData = std::move(InExpiredEquipmentData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ContinueInnerImagineChangeProcFromUseUnusedEquipConfirmDialog
// (BlueprintCallable, BlueprintEvent)

void UEquipmentStatusDescAndListForBattleSet_C::ContinueInnerImagineChangeProcFromUseUnusedEquipConfirmDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "ContinueInnerImagineChangeProcFromUseUnusedEquipConfirmDialog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.InnerImagineChangeProc
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InInnerImagineUniqueId                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    InDisarm                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentStatusDescAndListForBattleSet_C::InnerImagineChangeProc(const class FString& InInnerImagineUniqueId, bool InDisarm)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "InnerImagineChangeProc");

	Params::EquipmentStatusDescAndListForBattleSet_C_InnerImagineChangeProc Parms{};

	Parms.InInnerImagineUniqueId = std::move(InInnerImagineUniqueId);
	Parms.InDisarm = InDisarm;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnSaveItemStorage
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InRetCode                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FOwnItemInfo>             InDirtyItems                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UEquipmentStatusDescAndListForBattleSet_C::OnSaveItemStorage(const int32 InRetCode, const TArray<struct FOwnItemInfo>& InDirtyItems)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "OnSaveItemStorage");

	Params::EquipmentStatusDescAndListForBattleSet_C_OnSaveItemStorage Parms{};

	Parms.InRetCode = InRetCode;
	Parms.InDirtyItems = std::move(InDirtyItems);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.MoveEquipmentToBagRequestProc
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EItemType                               InEquipmentItemType                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentStatusDescAndListForBattleSet_C::MoveEquipmentToBagRequestProc(EItemType InEquipmentItemType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "MoveEquipmentToBagRequestProc");

	Params::EquipmentStatusDescAndListForBattleSet_C_MoveEquipmentToBagRequestProc Parms{};

	Parms.InEquipmentItemType = InEquipmentItemType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ShowWindow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BattleSetInfoType                     InInfoType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBClassType                            InEquipClassType                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBCharaEquipType                       InEquipType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InIsStorageMode                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentStatusDescAndListForBattleSet_C::ShowWindow(E_BattleSetInfoType InInfoType, ESBClassType InEquipClassType, ESBCharaEquipType InEquipType, bool InIsStorageMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "ShowWindow");

	Params::EquipmentStatusDescAndListForBattleSet_C_ShowWindow Parms{};

	Parms.InInfoType = InInfoType;
	Parms.InEquipClassType = InEquipClassType;
	Parms.InEquipType = InEquipType;
	Parms.InIsStorageMode = InIsStorageMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.HideWindow
// (Public, BlueprintCallable, BlueprintEvent)

void UEquipmentStatusDescAndListForBattleSet_C::HideWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "HideWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.UpdateEquippedEquipmentDesc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InEquipmentUniqueId                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    InForceUpdate                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentStatusDescAndListForBattleSet_C::UpdateEquippedEquipmentDesc(const class FString& InEquipmentUniqueId, bool InForceUpdate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "UpdateEquippedEquipmentDesc");

	Params::EquipmentStatusDescAndListForBattleSet_C_UpdateEquippedEquipmentDesc Parms{};

	Parms.InEquipmentUniqueId = std::move(InEquipmentUniqueId);
	Parms.InForceUpdate = InForceUpdate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.UpdateSelectedEquipmentDesc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InEquipmentUniqueId                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    InForceUpdate                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentStatusDescAndListForBattleSet_C::UpdateSelectedEquipmentDesc(const class FString& InEquipmentUniqueId, bool InForceUpdate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "UpdateSelectedEquipmentDesc");

	Params::EquipmentStatusDescAndListForBattleSet_C_UpdateSelectedEquipmentDesc Parms{};

	Parms.InEquipmentUniqueId = std::move(InEquipmentUniqueId);
	Parms.InForceUpdate = InForceUpdate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.SwitchStatusType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InStatusTypeId                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentStatusDescAndListForBattleSet_C::SwitchStatusType(int32 InStatusTypeId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "SwitchStatusType");

	Params::EquipmentStatusDescAndListForBattleSet_C_SwitchStatusType Parms{};

	Parms.InStatusTypeId = InStatusTypeId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.CreateEquipmentModelCaptureStudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BattleSetInfoType                     InInfoType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentStatusDescAndListForBattleSet_C::CreateEquipmentModelCaptureStudio(E_BattleSetInfoType InInfoType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "CreateEquipmentModelCaptureStudio");

	Params::EquipmentStatusDescAndListForBattleSet_C_CreateEquipmentModelCaptureStudio Parms{};

	Parms.InInfoType = InInfoType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.SetEquipmentModelCaptureStudioEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsEnabled                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentStatusDescAndListForBattleSet_C::SetEquipmentModelCaptureStudioEnable(bool InIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "SetEquipmentModelCaptureStudioEnable");

	Params::EquipmentStatusDescAndListForBattleSet_C_SetEquipmentModelCaptureStudioEnable Parms{};

	Parms.InIsEnabled = InIsEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.SetIsCostumePartsLoading
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsCostumePartsLoading                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentStatusDescAndListForBattleSet_C::SetIsCostumePartsLoading(bool InIsCostumePartsLoading)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "SetIsCostumePartsLoading");

	Params::EquipmentStatusDescAndListForBattleSet_C_SetIsCostumePartsLoading Parms{};

	Parms.InIsCostumePartsLoading = InIsCostumePartsLoading;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.GetIsCostumePartsLoading
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    OutIsCostumePartsLoading                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentStatusDescAndListForBattleSet_C::GetIsCostumePartsLoading(bool* OutIsCostumePartsLoading)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "GetIsCostumePartsLoading");

	Params::EquipmentStatusDescAndListForBattleSet_C_GetIsCostumePartsLoading Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsCostumePartsLoading != nullptr)
		*OutIsCostumePartsLoading = Parms.OutIsCostumePartsLoading;
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.UpdateLeftSideParameterStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIncludesClassInfoUpdate                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentStatusDescAndListForBattleSet_C::UpdateLeftSideParameterStatus(bool InIncludesClassInfoUpdate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "UpdateLeftSideParameterStatus");

	Params::EquipmentStatusDescAndListForBattleSet_C_UpdateLeftSideParameterStatus Parms{};

	Parms.InIncludesClassInfoUpdate = InIncludesClassInfoUpdate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.RequestPlayerCharacterCalcEquipStatusDiff
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InCurrEquipmentUniqueId                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           InNewEquipmentUniqueId                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UEquipmentStatusDescAndListForBattleSet_C::RequestPlayerCharacterCalcEquipStatusDiff(const class FString& InCurrEquipmentUniqueId, const class FString& InNewEquipmentUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "RequestPlayerCharacterCalcEquipStatusDiff");

	Params::EquipmentStatusDescAndListForBattleSet_C_RequestPlayerCharacterCalcEquipStatusDiff Parms{};

	Parms.InCurrEquipmentUniqueId = std::move(InCurrEquipmentUniqueId);
	Parms.InNewEquipmentUniqueId = std::move(InNewEquipmentUniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.GetBattleSetInfoType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// E_BattleSetInfoType                     OutBattleSetInfoType                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentStatusDescAndListForBattleSet_C::GetBattleSetInfoType(E_BattleSetInfoType* OutBattleSetInfoType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "GetBattleSetInfoType");

	Params::EquipmentStatusDescAndListForBattleSet_C_GetBattleSetInfoType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutBattleSetInfoType != nullptr)
		*OutBattleSetInfoType = Parms.OutBattleSetInfoType;
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.IsCharaDetailedStatusOpen
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    OutIsOpen                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentStatusDescAndListForBattleSet_C::IsCharaDetailedStatusOpen(bool* OutIsOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "IsCharaDetailedStatusOpen");

	Params::EquipmentStatusDescAndListForBattleSet_C_IsCharaDetailedStatusOpen Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsOpen != nullptr)
		*OutIsOpen = Parms.OutIsOpen;
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.SetClassChangedJingleVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentStatusDescAndListForBattleSet_C::SetClassChangedJingleVisibility(bool InIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "SetClassChangedJingleVisibility");

	Params::EquipmentStatusDescAndListForBattleSet_C_SetClassChangedJingleVisibility Parms{};

	Parms.InIsVisible = InIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.SetClassChangeLoadingVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentStatusDescAndListForBattleSet_C::SetClassChangeLoadingVisibility(bool InIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "SetClassChangeLoadingVisibility");

	Params::EquipmentStatusDescAndListForBattleSet_C_SetClassChangeLoadingVisibility Parms{};

	Parms.InIsVisible = InIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.IsHideWindowAnimePlaying
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    OutIsPlaying                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentStatusDescAndListForBattleSet_C::IsHideWindowAnimePlaying(bool* OutIsPlaying)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "IsHideWindowAnimePlaying");

	Params::EquipmentStatusDescAndListForBattleSet_C_IsHideWindowAnimePlaying Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsPlaying != nullptr)
		*OutIsPlaying = Parms.OutIsPlaying;
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.CheckIfBattleImagineIdDuplicate
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   InImagineId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBCharaEquipType                       InBattleImagineEquipType                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OutDuplicate                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentStatusDescAndListForBattleSet_C::CheckIfBattleImagineIdDuplicate(int32 InImagineId, ESBCharaEquipType InBattleImagineEquipType, bool* OutDuplicate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "CheckIfBattleImagineIdDuplicate");

	Params::EquipmentStatusDescAndListForBattleSet_C_CheckIfBattleImagineIdDuplicate Parms{};

	Parms.InImagineId = InImagineId;
	Parms.InBattleImagineEquipType = InBattleImagineEquipType;

	UObject::ProcessEvent(Func, &Parms);

	if (OutDuplicate != nullptr)
		*OutDuplicate = Parms.OutDuplicate;
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.CheckIfBattleImagineWithPossessionSkillIsMultiple
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   InImagineId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBCharaEquipType                       InBattleImagineEquipType                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OutIsEquipped                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentStatusDescAndListForBattleSet_C::CheckIfBattleImagineWithPossessionSkillIsMultiple(int32 InImagineId, ESBCharaEquipType InBattleImagineEquipType, bool* OutIsEquipped)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "CheckIfBattleImagineWithPossessionSkillIsMultiple");

	Params::EquipmentStatusDescAndListForBattleSet_C_CheckIfBattleImagineWithPossessionSkillIsMultiple Parms{};

	Parms.InImagineId = InImagineId;
	Parms.InBattleImagineEquipType = InBattleImagineEquipType;

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsEquipped != nullptr)
		*OutIsEquipped = Parms.OutIsEquipped;
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.SetLeftSideParameterExpGaugeUpdateStop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsUpdateStop                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentStatusDescAndListForBattleSet_C::SetLeftSideParameterExpGaugeUpdateStop(bool InIsUpdateStop)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "SetLeftSideParameterExpGaugeUpdateStop");

	Params::EquipmentStatusDescAndListForBattleSet_C_SetLeftSideParameterExpGaugeUpdateStop Parms{};

	Parms.InIsUpdateStop = InIsUpdateStop;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.InitEquippedEquipmentStatusDesc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InEquippedEquipmentUniqueId                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// E_BattleSetInfoType                     InBattleSetInfoType                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBCharaEquipType                       InEquipType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentStatusDescAndListForBattleSet_C::InitEquippedEquipmentStatusDesc(const class FString& InEquippedEquipmentUniqueId, E_BattleSetInfoType InBattleSetInfoType, ESBCharaEquipType InEquipType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "InitEquippedEquipmentStatusDesc");

	Params::EquipmentStatusDescAndListForBattleSet_C_InitEquippedEquipmentStatusDesc Parms{};

	Parms.InEquippedEquipmentUniqueId = std::move(InEquippedEquipmentUniqueId);
	Parms.InBattleSetInfoType = InBattleSetInfoType;
	Parms.InEquipType = InEquipType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.InitSelectedEquipmentStatusDesc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BattleSetInfoType                     InBattleSetInfoType                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBCharaEquipType                       InEquipType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InIsStorageMode                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentStatusDescAndListForBattleSet_C::InitSelectedEquipmentStatusDesc(E_BattleSetInfoType InBattleSetInfoType, ESBCharaEquipType InEquipType, bool InIsStorageMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescAndListForBattleSet_C", "InitSelectedEquipmentStatusDesc");

	Params::EquipmentStatusDescAndListForBattleSet_C_InitSelectedEquipmentStatusDesc Parms{};

	Parms.InBattleSetInfoType = InBattleSetInfoType;
	Parms.InEquipType = InEquipType;
	Parms.InIsStorageMode = InIsStorageMode;

	UObject::ProcessEvent(Func, &Parms);
}

}

