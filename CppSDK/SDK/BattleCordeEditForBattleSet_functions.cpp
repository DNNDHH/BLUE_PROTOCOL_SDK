#pragma once

 

// Package: BattleCordeEditForBattleSet

#include "Basic.hpp"

#include "BattleCordeEditForBattleSet_classes.hpp"
#include "BattleCordeEditForBattleSet_parameters.hpp"


namespace SDK
{

// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnHideWindowFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBattleCordeEditForBattleSet_C::OnHideWindowFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "OnHideWindowFinished__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnPlayerCharacterEquippedCostumeChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBattleCordeEditForBattleSet_C::OnPlayerCharacterEquippedCostumeChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "OnPlayerCharacterEquippedCostumeChanged__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnLeftSideParameterStatusUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BattleSetInfoType                     InBattleSetInfoType                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InIncludesClassInfoUpdate                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCordeEditForBattleSet_C::OnLeftSideParameterStatusUpdated__DelegateSignature(E_BattleSetInfoType InBattleSetInfoType, bool InIncludesClassInfoUpdate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "OnLeftSideParameterStatusUpdated__DelegateSignature");

	Params::BattleCordeEditForBattleSet_C_OnLeftSideParameterStatusUpdated__DelegateSignature Parms{};

	Parms.InBattleSetInfoType = InBattleSetInfoType;
	Parms.InIncludesClassInfoUpdate = InIncludesClassInfoUpdate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnResetLeftSideParameterDiffMark__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBattleCordeEditForBattleSet_C::OnResetLeftSideParameterDiffMark__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "OnResetLeftSideParameterDiffMark__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnEquippedWeaponSpawned__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBattleCordeEditForBattleSet_C::OnEquippedWeaponSpawned__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "OnEquippedWeaponSpawned__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnClassChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBattleCordeEditForBattleSet_C::OnClassChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "OnClassChanged__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnSetPlayerAvatarRotateActive__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InRotateActive                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCordeEditForBattleSet_C::OnSetPlayerAvatarRotateActive__DelegateSignature(bool InRotateActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "OnSetPlayerAvatarRotateActive__DelegateSignature");

	Params::BattleCordeEditForBattleSet_C_OnSetPlayerAvatarRotateActive__DelegateSignature Parms{};

	Parms.InRotateActive = InRotateActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnSetLeftSideParameterExpGaugeUpdateStop__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsUpdateStop                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCordeEditForBattleSet_C::OnSetLeftSideParameterExpGaugeUpdateStop__DelegateSignature(bool InIsUpdateStop)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "OnSetLeftSideParameterExpGaugeUpdateStop__DelegateSignature");

	Params::BattleCordeEditForBattleSet_C_OnSetLeftSideParameterExpGaugeUpdateStop__DelegateSignature Parms{};

	Parms.InIsUpdateStop = InIsUpdateStop;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnBattleCordeDataReloaded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBattleCordeEditForBattleSet_C::OnBattleCordeDataReloaded__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "OnBattleCordeDataReloaded__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnBattleCordeDataReloadRequestedAtInit__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBattleCordeEditForBattleSet_C::OnBattleCordeDataReloadRequestedAtInit__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "OnBattleCordeDataReloadRequestedAtInit__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnTermEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBattleCordeEditForBattleSet_C::OnTermEnd__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "OnTermEnd__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnBattleCordeSaveRequestCompleted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBattleCordeEditForBattleSet_C::OnBattleCordeSaveRequestCompleted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "OnBattleCordeSaveRequestCompleted__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ExecuteUbergraph_BattleCordeEditForBattleSet
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCordeEditForBattleSet_C::ExecuteUbergraph_BattleCordeEditForBattleSet(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "ExecuteUbergraph_BattleCordeEditForBattleSet");

	Params::BattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnClassChangeFailure
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InRetCode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCordeEditForBattleSet_C::OnClassChangeFailure(int32 InRetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "OnClassChangeFailure");

	Params::BattleCordeEditForBattleSet_C_OnClassChangeFailure Parms{};

	Parms.InRetCode = InRetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnCharaEquipPassiveImagineChange
// (BlueprintCallable, BlueprintEvent)

void UBattleCordeEditForBattleSet_C::OnCharaEquipPassiveImagineChange()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "OnCharaEquipPassiveImagineChange");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ReturnFromClassChangeProgressContinueConfirmDialog
// (BlueprintCallable, BlueprintEvent)

void UBattleCordeEditForBattleSet_C::ReturnFromClassChangeProgressContinueConfirmDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "ReturnFromClassChangeProgressContinueConfirmDialog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.BndEvt__BattleCordeEditForBattleSet_EquipCordeBtn_K2Node_ComponentBoundEvent_13_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UBattleCordeEditForBattleSet_C::BndEvt__BattleCordeEditForBattleSet_EquipCordeBtn_K2Node_ComponentBoundEvent_13_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "BndEvt__BattleCordeEditForBattleSet_EquipCordeBtn_K2Node_ComponentBoundEvent_13_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.BndEvt__BattleCordeEditForBattleSet_RegisterCordeBtn_K2Node_ComponentBoundEvent_12_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UBattleCordeEditForBattleSet_C::BndEvt__BattleCordeEditForBattleSet_RegisterCordeBtn_K2Node_ComponentBoundEvent_12_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "BndEvt__BattleCordeEditForBattleSet_RegisterCordeBtn_K2Node_ComponentBoundEvent_12_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_11_OnCordeDataLoaded__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    InIsDataLoadSuccessed                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCordeEditForBattleSet_C::BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_11_OnCordeDataLoaded__DelegateSignature(bool InIsDataLoadSuccessed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_11_OnCordeDataLoaded__DelegateSignature");

	Params::BattleCordeEditForBattleSet_C_BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_11_OnCordeDataLoaded__DelegateSignature Parms{};

	Parms.InIsDataLoadSuccessed = InIsDataLoadSuccessed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_ClassChangedJingle_K2Node_ComponentBoundEvent_1_OnPlayedAnim__DelegateSignature
// (BlueprintEvent)

void UBattleCordeEditForBattleSet_C::BndEvt__EquipmentStatusDescAndListForBattleSet_ClassChangedJingle_K2Node_ComponentBoundEvent_1_OnPlayedAnim__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "BndEvt__EquipmentStatusDescAndListForBattleSet_ClassChangedJingle_K2Node_ComponentBoundEvent_1_OnPlayedAnim__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ClassChangeResultProc
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>                   InExpiredWeaponStickerUniqueIds                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FSBExpiredEquipmentData          InExpiredEquipmentData                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    InIsClassChange                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InIsDisarm                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCordeEditForBattleSet_C::ClassChangeResultProc(const TArray<class FString>& InExpiredWeaponStickerUniqueIds, const struct FSBExpiredEquipmentData& InExpiredEquipmentData, bool InIsClassChange, bool InIsDisarm)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "ClassChangeResultProc");

	Params::BattleCordeEditForBattleSet_C_ClassChangeResultProc Parms{};

	Parms.InExpiredWeaponStickerUniqueIds = std::move(InExpiredWeaponStickerUniqueIds);
	Parms.InExpiredEquipmentData = std::move(InExpiredEquipmentData);
	Parms.InIsClassChange = InIsClassChange;
	Parms.InIsDisarm = InIsDisarm;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ExpiredItemNoticeSystemMessageTimerEnd
// (BlueprintCallable, BlueprintEvent)

void UBattleCordeEditForBattleSet_C::ExpiredItemNoticeSystemMessageTimerEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "ExpiredItemNoticeSystemMessageTimerEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnClientRestart
// (BlueprintCallable, BlueprintEvent)

void UBattleCordeEditForBattleSet_C::OnClientRestart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "OnClientRestart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnClassChangeNotify
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InRetCode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInIsExpiredStickerWeapons                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>                   InExpiredStickerWeaponUniqueIds                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FSBExpiredEquipmentData          InDirtyExpiredEquipmentData                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBattleCordeEditForBattleSet_C::OnClassChangeNotify(int32 InRetCode, const bool bInIsExpiredStickerWeapons, const TArray<class FString>& InExpiredStickerWeaponUniqueIds, const struct FSBExpiredEquipmentData& InDirtyExpiredEquipmentData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "OnClassChangeNotify");

	Params::BattleCordeEditForBattleSet_C_OnClassChangeNotify Parms{};

	Parms.InRetCode = InRetCode;
	Parms.bInIsExpiredStickerWeapons = bInIsExpiredStickerWeapons;
	Parms.InExpiredStickerWeaponUniqueIds = std::move(InExpiredStickerWeaponUniqueIds);
	Parms.InDirtyExpiredEquipmentData = std::move(InDirtyExpiredEquipmentData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnSwapPresetEquipmentList
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   DstListIndex                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCordeEditForBattleSet_C::OnSwapPresetEquipmentList(const int32 RetCode, const int32 DstListIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "OnSwapPresetEquipmentList");

	Params::BattleCordeEditForBattleSet_C_OnSwapPresetEquipmentList Parms{};

	Parms.RetCode = RetCode;
	Parms.DstListIndex = DstListIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_10_OnCordeReplaceBtnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UBattleCordeListItem_C*           InSrcCordeListItem                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBattleCordeListItem_C*           InDstCordListItem                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCordeEditForBattleSet_C::BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_10_OnCordeReplaceBtnPressed__DelegateSignature(class UBattleCordeListItem_C* InSrcCordeListItem, class UBattleCordeListItem_C* InDstCordListItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_10_OnCordeReplaceBtnPressed__DelegateSignature");

	Params::BattleCordeEditForBattleSet_C_BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_10_OnCordeReplaceBtnPressed__DelegateSignature Parms{};

	Parms.InSrcCordeListItem = InSrcCordeListItem;
	Parms.InDstCordListItem = InDstCordListItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnSpawnWeapon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InventoryIndex                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBWeaponEquipType                      InWeaponEquipType                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCordeEditForBattleSet_C::OnSpawnWeapon(const int32 InventoryIndex, ESBWeaponEquipType InWeaponEquipType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "OnSpawnWeapon");

	Params::BattleCordeEditForBattleSet_C_OnSpawnWeapon Parms{};

	Parms.InventoryIndex = InventoryIndex;
	Parms.InWeaponEquipType = InWeaponEquipType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnSaveCharaBattlePresetEquipment
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCordeEditForBattleSet_C::OnSaveCharaBattlePresetEquipment(int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "OnSaveCharaBattlePresetEquipment");

	Params::BattleCordeEditForBattleSet_C_OnSaveCharaBattlePresetEquipment Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.BattleCordeEquipProc
// (BlueprintCallable, BlueprintEvent)

void UBattleCordeEditForBattleSet_C::BattleCordeEquipProc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "BattleCordeEquipProc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_9_OnCordeRenameBtnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UBattleCordeListItem_C*           InSelectedCordeListItem                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCordeEditForBattleSet_C::BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_9_OnCordeRenameBtnPressed__DelegateSignature(class UBattleCordeListItem_C* InSelectedCordeListItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_9_OnCordeRenameBtnPressed__DelegateSignature");

	Params::BattleCordeEditForBattleSet_C_BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_9_OnCordeRenameBtnPressed__DelegateSignature Parms{};

	Parms.InSelectedCordeListItem = InSelectedCordeListItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_8_OnCordeDeleteBtnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UBattleCordeListItem_C*           InSelectedCordeListItem                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCordeEditForBattleSet_C::BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_8_OnCordeDeleteBtnPressed__DelegateSignature(class UBattleCordeListItem_C* InSelectedCordeListItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_8_OnCordeDeleteBtnPressed__DelegateSignature");

	Params::BattleCordeEditForBattleSet_C_BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_8_OnCordeDeleteBtnPressed__DelegateSignature Parms{};

	Parms.InSelectedCordeListItem = InSelectedCordeListItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_5_OnCordeListItemPresssed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UBattleCordeListItem_C*           InListItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCordeEditForBattleSet_C::BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_5_OnCordeListItemPresssed__DelegateSignature(class UBattleCordeListItem_C* InListItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_5_OnCordeListItemPresssed__DelegateSignature");

	Params::BattleCordeEditForBattleSet_C_BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_5_OnCordeListItemPresssed__DelegateSignature Parms{};

	Parms.InListItem = InListItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.CloseCharaDetailedStatus
// (BlueprintCallable, BlueprintEvent)

void UBattleCordeEditForBattleSet_C::CloseCharaDetailedStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "CloseCharaDetailedStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.BndEvt__BattleCordeEditForBattleSet_CharaDetailedStatus_K2Node_ComponentBoundEvent_4_CloseEvent__DelegateSignature
// (BlueprintEvent)

void UBattleCordeEditForBattleSet_C::BndEvt__BattleCordeEditForBattleSet_CharaDetailedStatus_K2Node_ComponentBoundEvent_4_CloseEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "BndEvt__BattleCordeEditForBattleSet_CharaDetailedStatus_K2Node_ComponentBoundEvent_4_CloseEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnSavePlayerPresetEquipment
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCordeEditForBattleSet_C::OnSavePlayerPresetEquipment(int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "OnSavePlayerPresetEquipment");

	Params::BattleCordeEditForBattleSet_C_OnSavePlayerPresetEquipment Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.UIInputBlockFrontRow
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsBlock                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCordeEditForBattleSet_C::UIInputBlockFrontRow(bool InIsBlock)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "UIInputBlockFrontRow");

	Params::BattleCordeEditForBattleSet_C_UIInputBlockFrontRow Parms{};

	Parms.InIsBlock = InIsBlock;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnPress_Cancel
// (Event, Public, BlueprintEvent)

void UBattleCordeEditForBattleSet_C::OnPress_Cancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "OnPress_Cancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_BtnFullScreenForDetailedStatus_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBattleCordeEditForBattleSet_C::BndEvt__EquipmentStatusDescAndListForBattleSet_BtnFullScreenForDetailedStatus_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "BndEvt__EquipmentStatusDescAndListForBattleSet_BtnFullScreenForDetailedStatus_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_LeftSideParametersForSecondLevel_K2Node_ComponentBoundEvent_6_OnDetailStatusBtnClicked__DelegateSignature
// (BlueprintEvent)

void UBattleCordeEditForBattleSet_C::BndEvt__EquipmentStatusDescAndListForBattleSet_LeftSideParametersForSecondLevel_K2Node_ComponentBoundEvent_6_OnDetailStatusBtnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "BndEvt__EquipmentStatusDescAndListForBattleSet_LeftSideParametersForSecondLevel_K2Node_ComponentBoundEvent_6_OnDetailStatusBtnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_BackToBattleSetTopLevelBtn_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature
// (BlueprintEvent)

void UBattleCordeEditForBattleSet_C::BndEvt__EquipmentStatusDescAndListForBattleSet_BackToBattleSetTopLevelBtn_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "BndEvt__EquipmentStatusDescAndListForBattleSet_BackToBattleSetTopLevelBtn_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnCalcEquipStatusDiff
// (BlueprintCallable, BlueprintEvent)

void UBattleCordeEditForBattleSet_C::OnCalcEquipStatusDiff()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "OnCalcEquipStatusDiff");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCordeEditForBattleSet_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "PreConstruct");

	Params::BattleCordeEditForBattleSet_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBattleCordeEditForBattleSet_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.BndEvt__BtnScreen_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBattleCordeEditForBattleSet_C::BndEvt__BtnScreen_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "BndEvt__BtnScreen_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.UiInputBlock
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsBlock                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCordeEditForBattleSet_C::UiInputBlock(bool InIsBlock)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "UiInputBlock");

	Params::BattleCordeEditForBattleSet_C_UiInputBlock Parms{};

	Parms.InIsBlock = InIsBlock;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCordeEditForBattleSet_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "OnAnimationFinished");

	Params::BattleCordeEditForBattleSet_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBattleCordeEditForBattleSet_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowEquippedTacticalSkillIsActiveMessageDialog
// (BlueprintCallable, BlueprintEvent)

void UBattleCordeEditForBattleSet_C::ShowEquippedTacticalSkillIsActiveMessageDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "ShowEquippedTacticalSkillIsActiveMessageDialog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowQuestProgressUnableByClassChangeConfirmDialog
// (BlueprintCallable, BlueprintEvent)

void UBattleCordeEditForBattleSet_C::ShowQuestProgressUnableByClassChangeConfirmDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "ShowQuestProgressUnableByClassChangeConfirmDialog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ContinueCordeEquipmentProc
// (BlueprintCallable, BlueprintEvent)

void UBattleCordeEditForBattleSet_C::ContinueCordeEquipmentProc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "ContinueCordeEquipmentProc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowEquipmentBagIsFullMessageDialog
// (BlueprintCallable, BlueprintEvent)

void UBattleCordeEditForBattleSet_C::ShowEquipmentBagIsFullMessageDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "ShowEquipmentBagIsFullMessageDialog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.EquipCordeNotAllValidConfirmEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EYesNoDialogResult                      Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCordeEditForBattleSet_C::EquipCordeNotAllValidConfirmEnd(const EYesNoDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "EquipCordeNotAllValidConfirmEnd");

	Params::BattleCordeEditForBattleSet_C_EquipCordeNotAllValidConfirmEnd Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.MoveCordeEquipmentFromStorageComfirmEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EYesNoDialogResult                      Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCordeEditForBattleSet_C::MoveCordeEquipmentFromStorageComfirmEnd(const EYesNoDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "MoveCordeEquipmentFromStorageComfirmEnd");

	Params::BattleCordeEditForBattleSet_C_MoveCordeEquipmentFromStorageComfirmEnd Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowMoveCordeEquipmentFromStorageConfirmDialog
// (BlueprintCallable, BlueprintEvent)

void UBattleCordeEditForBattleSet_C::ShowMoveCordeEquipmentFromStorageConfirmDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "ShowMoveCordeEquipmentFromStorageConfirmDialog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowEquipCordeNotAllValidConfirmDialog
// (BlueprintCallable, BlueprintEvent)

void UBattleCordeEditForBattleSet_C::ShowEquipCordeNotAllValidConfirmDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "ShowEquipCordeNotAllValidConfirmDialog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowCordeEquipSuccessedMessageDialog
// (BlueprintCallable, BlueprintEvent)

void UBattleCordeEditForBattleSet_C::ShowCordeEquipSuccessedMessageDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "ShowCordeEquipSuccessedMessageDialog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.EquipCordeConfirmEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EYesNoDialogResult                      Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCordeEditForBattleSet_C::EquipCordeConfirmEnd(const EYesNoDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "EquipCordeConfirmEnd");

	Params::BattleCordeEditForBattleSet_C_EquipCordeConfirmEnd Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowEquipCordeConfirmMessageDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InCordeName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBattleCordeEditForBattleSet_C::ShowEquipCordeConfirmMessageDialog(const class FString& InCordeName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "ShowEquipCordeConfirmMessageDialog");

	Params::BattleCordeEditForBattleSet_C_ShowEquipCordeConfirmMessageDialog Parms{};

	Parms.InCordeName = std::move(InCordeName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowCordeDeleteSuccessedMessageDialog
// (BlueprintCallable, BlueprintEvent)

void UBattleCordeEditForBattleSet_C::ShowCordeDeleteSuccessedMessageDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "ShowCordeDeleteSuccessedMessageDialog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.EndCordeDeleteConfirmDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EYesNoDialogResult                      InYesNoResult                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCordeEditForBattleSet_C::EndCordeDeleteConfirmDialog(EYesNoDialogResult InYesNoResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "EndCordeDeleteConfirmDialog");

	Params::BattleCordeEditForBattleSet_C_EndCordeDeleteConfirmDialog Parms{};

	Parms.InYesNoResult = InYesNoResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowCordeDeleteConfirmDialog
// (BlueprintCallable, BlueprintEvent)

void UBattleCordeEditForBattleSet_C::ShowCordeDeleteConfirmDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "ShowCordeDeleteConfirmDialog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowRenameCordeNameSuccessedMessageDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InRenamedCordeName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBattleCordeEditForBattleSet_C::ShowRenameCordeNameSuccessedMessageDialog(const class FString& InRenamedCordeName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "ShowRenameCordeNameSuccessedMessageDialog");

	Params::BattleCordeEditForBattleSet_C_ShowRenameCordeNameSuccessedMessageDialog Parms{};

	Parms.InRenamedCordeName = std::move(InRenamedCordeName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowNewCordeRegisterSuccessedMessageDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InNewCordeName                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    bInIsCordeOverwrite                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCordeEditForBattleSet_C::ShowNewCordeRegisterSuccessedMessageDialog(const class FString& InNewCordeName, bool bInIsCordeOverwrite)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "ShowNewCordeRegisterSuccessedMessageDialog");

	Params::BattleCordeEditForBattleSet_C_ShowNewCordeRegisterSuccessedMessageDialog Parms{};

	Parms.InNewCordeName = std::move(InNewCordeName);
	Parms.bInIsCordeOverwrite = bInIsCordeOverwrite;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowCordeSlotIsFullMessageDialog
// (BlueprintCallable, BlueprintEvent)

void UBattleCordeEditForBattleSet_C::ShowCordeSlotIsFullMessageDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "ShowCordeSlotIsFullMessageDialog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.EndUsingUnusedEquipConfirmDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EYesNoDialogResult                      InYesNoResult                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCordeEditForBattleSet_C::EndUsingUnusedEquipConfirmDialog(EYesNoDialogResult InYesNoResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "EndUsingUnusedEquipConfirmDialog");

	Params::BattleCordeEditForBattleSet_C_EndUsingUnusedEquipConfirmDialog Parms{};

	Parms.InYesNoResult = InYesNoResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowUsingUnusedEquipConfirmDialog
// (BlueprintCallable, BlueprintEvent)

void UBattleCordeEditForBattleSet_C::ShowUsingUnusedEquipConfirmDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "ShowUsingUnusedEquipConfirmDialog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowCordeUnequippableMessageDialog
// (BlueprintCallable, BlueprintEvent)

void UBattleCordeEditForBattleSet_C::ShowCordeUnequippableMessageDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "ShowCordeUnequippableMessageDialog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnNameInputDialogButtonFullScreenClicked
// (BlueprintCallable, BlueprintEvent)

void UBattleCordeEditForBattleSet_C::OnNameInputDialogButtonFullScreenClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "OnNameInputDialogButtonFullScreenClicked");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnNameInputDilaogClosed
// (BlueprintCallable, BlueprintEvent)

void UBattleCordeEditForBattleSet_C::OnNameInputDilaogClosed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "OnNameInputDilaogClosed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnNameInputDialogNameDecided
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           PlayerName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBattleCordeEditForBattleSet_C::OnNameInputDialogNameDecided(const class FString& PlayerName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "OnNameInputDialogNameDecided");

	Params::BattleCordeEditForBattleSet_C_OnNameInputDialogNameDecided Parms{};

	Parms.PlayerName = std::move(PlayerName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.SetupNameInputDialogEventBind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InUnbindEvent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCordeEditForBattleSet_C::SetupNameInputDialogEventBind(bool InUnbindEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "SetupNameInputDialogEventBind");

	Params::BattleCordeEditForBattleSet_C_SetupNameInputDialogEventBind Parms{};

	Parms.InUnbindEvent = InUnbindEvent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.StartCordeNameInputProc
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsForRename                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCordeEditForBattleSet_C::StartCordeNameInputProc(bool InIsForRename)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "StartCordeNameInputProc");

	Params::BattleCordeEditForBattleSet_C_StartCordeNameInputProc Parms{};

	Parms.InIsForRename = InIsForRename;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnSaveItemStorage
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InRetCode                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FOwnItemInfo>             InDirtyItems                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBattleCordeEditForBattleSet_C::OnSaveItemStorage(const int32 InRetCode, const TArray<struct FOwnItemInfo>& InDirtyItems)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "OnSaveItemStorage");

	Params::BattleCordeEditForBattleSet_C_OnSaveItemStorage Parms{};

	Parms.InRetCode = InRetCode;
	Parms.InDirtyItems = std::move(InDirtyItems);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowWindow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBClassType                            InEquipClassType                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InIsStorageMode                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCordeEditForBattleSet_C::ShowWindow(ESBClassType InEquipClassType, bool InIsStorageMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "ShowWindow");

	Params::BattleCordeEditForBattleSet_C_ShowWindow Parms{};

	Parms.InEquipClassType = InEquipClassType;
	Parms.InIsStorageMode = InIsStorageMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.HideWindow
// (Public, BlueprintCallable, BlueprintEvent)

void UBattleCordeEditForBattleSet_C::HideWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "HideWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.IsHideWindowAnimePlaying
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    OutIsPlaying                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCordeEditForBattleSet_C::IsHideWindowAnimePlaying(bool* OutIsPlaying)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "IsHideWindowAnimePlaying");

	Params::BattleCordeEditForBattleSet_C_IsHideWindowAnimePlaying Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsPlaying != nullptr)
		*OutIsPlaying = Parms.OutIsPlaying;
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.SetIsCostumePartsLoading
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsCostumePartsLoading                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCordeEditForBattleSet_C::SetIsCostumePartsLoading(bool InIsCostumePartsLoading)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "SetIsCostumePartsLoading");

	Params::BattleCordeEditForBattleSet_C_SetIsCostumePartsLoading Parms{};

	Parms.InIsCostumePartsLoading = InIsCostumePartsLoading;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.GetIsCostumePartsLoading
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    OutIsCostumePartsLoading                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCordeEditForBattleSet_C::GetIsCostumePartsLoading(bool* OutIsCostumePartsLoading)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "GetIsCostumePartsLoading");

	Params::BattleCordeEditForBattleSet_C_GetIsCostumePartsLoading Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsCostumePartsLoading != nullptr)
		*OutIsCostumePartsLoading = Parms.OutIsCostumePartsLoading;
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.UpdateLeftSideParameterStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIncludesClassInfoUpdate                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCordeEditForBattleSet_C::UpdateLeftSideParameterStatus(bool InIncludesClassInfoUpdate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "UpdateLeftSideParameterStatus");

	Params::BattleCordeEditForBattleSet_C_UpdateLeftSideParameterStatus Parms{};

	Parms.InIncludesClassInfoUpdate = InIncludesClassInfoUpdate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.RequestPlayerCharacterCalcEquipStatusDiff
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InCordeId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCordeEditForBattleSet_C::RequestPlayerCharacterCalcEquipStatusDiff(int32 InCordeId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "RequestPlayerCharacterCalcEquipStatusDiff");

	Params::BattleCordeEditForBattleSet_C_RequestPlayerCharacterCalcEquipStatusDiff Parms{};

	Parms.InCordeId = InCordeId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.IsCharaDetailedStatusOpen
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    OutIsOpen                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCordeEditForBattleSet_C::IsCharaDetailedStatusOpen(bool* OutIsOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "IsCharaDetailedStatusOpen");

	Params::BattleCordeEditForBattleSet_C_IsCharaDetailedStatusOpen Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsOpen != nullptr)
		*OutIsOpen = Parms.OutIsOpen;
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.CreateCordeList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InResetSelectedCordeListItem                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCordeEditForBattleSet_C::CreateCordeList(bool InResetSelectedCordeListItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "CreateCordeList");

	Params::BattleCordeEditForBattleSet_C_CreateCordeList Parms{};

	Parms.InResetSelectedCordeListItem = InResetSelectedCordeListItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.GetCordeListEmptySlotId
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   OutListIndex                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCordeEditForBattleSet_C::GetCordeListEmptySlotId(int32* OutListIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "GetCordeListEmptySlotId");

	Params::BattleCordeEditForBattleSet_C_GetCordeListEmptySlotId Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutListIndex != nullptr)
		*OutListIndex = Parms.OutListIndex;
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.RegisterCorde
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InCordeListId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           InCordeName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBattleCordeEditForBattleSet_C::RegisterCorde(int32 InCordeListId, const class FString& InCordeName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "RegisterCorde");

	Params::BattleCordeEditForBattleSet_C_RegisterCorde Parms{};

	Parms.InCordeListId = InCordeListId;
	Parms.InCordeName = std::move(InCordeName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.SetEquipCordeBtnEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsEnabled                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCordeEditForBattleSet_C::SetEquipCordeBtnEnable(bool InIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "SetEquipCordeBtnEnable");

	Params::BattleCordeEditForBattleSet_C_SetEquipCordeBtnEnable Parms{};

	Parms.InIsEnabled = InIsEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.SetIsSelectedCordeEquippable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsEquippable                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCordeEditForBattleSet_C::SetIsSelectedCordeEquippable(bool InIsEquippable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "SetIsSelectedCordeEquippable");

	Params::BattleCordeEditForBattleSet_C_SetIsSelectedCordeEquippable Parms{};

	Parms.InIsEquippable = InIsEquippable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.CheckCordeWeaponIsValid
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InCordeId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InIsStorageMode                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    OutIsValid                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCordeEditForBattleSet_C::CheckCordeWeaponIsValid(int32 InCordeId, bool InIsStorageMode, bool* OutIsValid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "CheckCordeWeaponIsValid");

	Params::BattleCordeEditForBattleSet_C_CheckCordeWeaponIsValid Parms{};

	Parms.InCordeId = InCordeId;
	Parms.InIsStorageMode = InIsStorageMode;

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsValid != nullptr)
		*OutIsValid = Parms.OutIsValid;
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.CheckCordeEquipmentsAreAllValid
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InCordeId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OutIsAllEquipmentValid                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    OutIsEquipmentInStorage                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCordeEditForBattleSet_C::CheckCordeEquipmentsAreAllValid(int32 InCordeId, bool* OutIsAllEquipmentValid, bool* OutIsEquipmentInStorage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "CheckCordeEquipmentsAreAllValid");

	Params::BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid Parms{};

	Parms.InCordeId = InCordeId;

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsAllEquipmentValid != nullptr)
		*OutIsAllEquipmentValid = Parms.OutIsAllEquipmentValid;

	if (OutIsEquipmentInStorage != nullptr)
		*OutIsEquipmentInStorage = Parms.OutIsEquipmentInStorage;
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.CheckCordeEquipmentsAreUnused
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InCordeId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InIsStorageMode                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    OutIsUnused                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCordeEditForBattleSet_C::CheckCordeEquipmentsAreUnused(int32 InCordeId, bool InIsStorageMode, bool* OutIsUnused)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "CheckCordeEquipmentsAreUnused");

	Params::BattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused Parms{};

	Parms.InCordeId = InCordeId;
	Parms.InIsStorageMode = InIsStorageMode;

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsUnused != nullptr)
		*OutIsUnused = Parms.OutIsUnused;
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowCharaCapture2D
// (Public, BlueprintCallable, BlueprintEvent)

void UBattleCordeEditForBattleSet_C::ShowCharaCapture2D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "ShowCharaCapture2D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.HideCharaCapture2D
// (Public, BlueprintCallable, BlueprintEvent)

void UBattleCordeEditForBattleSet_C::HideCharaCapture2D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "HideCharaCapture2D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.SetClassChangedJingleVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCordeEditForBattleSet_C::SetClassChangedJingleVisibility(bool InIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "SetClassChangedJingleVisibility");

	Params::BattleCordeEditForBattleSet_C_SetClassChangedJingleVisibility Parms{};

	Parms.InIsVisible = InIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.SetClassChangeLoadingVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCordeEditForBattleSet_C::SetClassChangeLoadingVisibility(bool InIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "SetClassChangeLoadingVisibility");

	Params::BattleCordeEditForBattleSet_C_SetClassChangeLoadingVisibility Parms{};

	Parms.InIsVisible = InIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.SetLeftSideParameterExpGaugeUpdateStop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsUpdateStop                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCordeEditForBattleSet_C::SetLeftSideParameterExpGaugeUpdateStop(bool InIsUpdateStop)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "SetLeftSideParameterExpGaugeUpdateStop");

	Params::BattleCordeEditForBattleSet_C_SetLeftSideParameterExpGaugeUpdateStop Parms{};

	Parms.InIsUpdateStop = InIsUpdateStop;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.RequestCordeDataReload
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    OutRequestSuccessed                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCordeEditForBattleSet_C::RequestCordeDataReload(bool* OutRequestSuccessed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "RequestCordeDataReload");

	Params::BattleCordeEditForBattleSet_C_RequestCordeDataReload Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutRequestSuccessed != nullptr)
		*OutRequestSuccessed = Parms.OutRequestSuccessed;
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.UpdateBattleCordeGuide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsStorageMode                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCordeEditForBattleSet_C::UpdateBattleCordeGuide(bool InIsStorageMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "UpdateBattleCordeGuide");

	Params::BattleCordeEditForBattleSet_C_UpdateBattleCordeGuide Parms{};

	Parms.InIsStorageMode = InIsStorageMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.GetCordeEquipmentStorageItemDatas
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InCordeId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FSBStorageItemData>       OutEquipmentStorageItemDatas                           (Parm, OutParm)

void UBattleCordeEditForBattleSet_C::GetCordeEquipmentStorageItemDatas(int32 InCordeId, TArray<struct FSBStorageItemData>* OutEquipmentStorageItemDatas)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "GetCordeEquipmentStorageItemDatas");

	Params::BattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas Parms{};

	Parms.InCordeId = InCordeId;

	UObject::ProcessEvent(Func, &Parms);

	if (OutEquipmentStorageItemDatas != nullptr)
		*OutEquipmentStorageItemDatas = std::move(Parms.OutEquipmentStorageItemDatas);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.CheckIfTacticalSkillIsActive
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    OutIsActive                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCordeEditForBattleSet_C::CheckIfTacticalSkillIsActive(bool* OutIsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "CheckIfTacticalSkillIsActive");

	Params::BattleCordeEditForBattleSet_C_CheckIfTacticalSkillIsActive Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsActive != nullptr)
		*OutIsActive = Parms.OutIsActive;
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ExtractCordeEquipItemsInEquipmentBag
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSBPlayerPresetEquipItem> InCordeEquipItemList                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FSBPlayerPresetEquipItem> OutExtractedCordeEquipItems                            (Parm, OutParm)

void UBattleCordeEditForBattleSet_C::ExtractCordeEquipItemsInEquipmentBag(TArray<struct FSBPlayerPresetEquipItem>& InCordeEquipItemList, TArray<struct FSBPlayerPresetEquipItem>* OutExtractedCordeEquipItems)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "ExtractCordeEquipItemsInEquipmentBag");

	Params::BattleCordeEditForBattleSet_C_ExtractCordeEquipItemsInEquipmentBag Parms{};

	Parms.InCordeEquipItemList = std::move(InCordeEquipItemList);

	UObject::ProcessEvent(Func, &Parms);

	InCordeEquipItemList = std::move(Parms.InCordeEquipItemList);

	if (OutExtractedCordeEquipItems != nullptr)
		*OutExtractedCordeEquipItems = std::move(Parms.OutExtractedCordeEquipItems);
}


// Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.Update Register Corde Btn Text
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInIsOverwriteMode                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCordeEditForBattleSet_C::Update_Register_Corde_Btn_Text(bool bInIsOverwriteMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeEditForBattleSet_C", "Update Register Corde Btn Text");

	Params::BattleCordeEditForBattleSet_C_Update_Register_Corde_Btn_Text Parms{};

	Parms.bInIsOverwriteMode = bInIsOverwriteMode;

	UObject::ProcessEvent(Func, &Parms);
}

}

