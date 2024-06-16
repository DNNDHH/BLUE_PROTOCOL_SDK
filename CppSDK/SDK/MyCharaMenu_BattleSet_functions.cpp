#pragma once

 

// Package: MyCharaMenu_BattleSet

#include "Basic.hpp"

#include "MyCharaMenu_BattleSet_classes.hpp"
#include "MyCharaMenu_BattleSet_parameters.hpp"


namespace SDK
{

// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.Close_Detail__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_BattleSet_C::Close_Detail__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "Close_Detail__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnSetPlayerCaptureStudioHidden__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsHidden                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_BattleSet_C::OnSetPlayerCaptureStudioHidden__DelegateSignature(bool InIsHidden)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "OnSetPlayerCaptureStudioHidden__DelegateSignature");

	Params::MyCharaMenu_BattleSet_C_OnSetPlayerCaptureStudioHidden__DelegateSignature Parms{};

	Parms.InIsHidden = InIsHidden;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnSetPlayerAvatarRotateActive__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsRotateActive                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_BattleSet_C::OnSetPlayerAvatarRotateActive__DelegateSignature(bool InIsRotateActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "OnSetPlayerAvatarRotateActive__DelegateSignature");

	Params::MyCharaMenu_BattleSet_C_OnSetPlayerAvatarRotateActive__DelegateSignature Parms{};

	Parms.InIsRotateActive = InIsRotateActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnPlayerCharacterEquippedCostumeChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_BattleSet_C::OnPlayerCharacterEquippedCostumeChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "OnPlayerCharacterEquippedCostumeChanged__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnIsCmnBackBtnVisible__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_BattleSet_C::OnIsCmnBackBtnVisible__DelegateSignature(bool InIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "OnIsCmnBackBtnVisible__DelegateSignature");

	Params::MyCharaMenu_BattleSet_C_OnIsCmnBackBtnVisible__DelegateSignature Parms{};

	Parms.InIsVisible = InIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnEquippedWeaponSpawned__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_BattleSet_C::OnEquippedWeaponSpawned__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "OnEquippedWeaponSpawned__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnResetPlayerAvatarRotate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_BattleSet_C::OnResetPlayerAvatarRotate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "OnResetPlayerAvatarRotate__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnIsChildWidgetOpened__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsChildWidgetOpened                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_BattleSet_C::OnIsChildWidgetOpened__DelegateSignature(bool InIsChildWidgetOpened)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "OnIsChildWidgetOpened__DelegateSignature");

	Params::MyCharaMenu_BattleSet_C_OnIsChildWidgetOpened__DelegateSignature Parms{};

	Parms.InIsChildWidgetOpened = InIsChildWidgetOpened;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.ExecuteUbergraph_MyCharaMenu_BattleSet
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_BattleSet_C::ExecuteUbergraph_MyCharaMenu_BattleSet(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "ExecuteUbergraph_MyCharaMenu_BattleSet");

	Params::MyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_0_OnTopInfoWeaponIconPressed__DelegateSignature
// (BlueprintEvent)

void UMyCharaMenu_BattleSet_C::BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_0_OnTopInfoWeaponIconPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_0_OnTopInfoWeaponIconPressed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnOpenMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_BattleSet_C::OnOpenMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "OnOpenMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.BndEvt__MyCharaMenu_BattleSet_BattleCordeSetHeadingForBattleSet_K2Node_ComponentBoundEvent_1_OnAdminOrEditBtnPressed__DelegateSignature
// (BlueprintEvent)

void UMyCharaMenu_BattleSet_C::BndEvt__MyCharaMenu_BattleSet_BattleCordeSetHeadingForBattleSet_K2Node_ComponentBoundEvent_1_OnAdminOrEditBtnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "BndEvt__MyCharaMenu_BattleSet_BattleCordeSetHeadingForBattleSet_K2Node_ComponentBoundEvent_1_OnAdminOrEditBtnPressed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_12_OnTopInfoInnerImagineIconPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// ESBPlayerPassiveImagineSlotType         InInnerImagineSlotType                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InImagineId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_BattleSet_C::BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_12_OnTopInfoInnerImagineIconPressed__DelegateSignature(ESBPlayerPassiveImagineSlotType InInnerImagineSlotType, int32 InImagineId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_12_OnTopInfoInnerImagineIconPressed__DelegateSignature");

	Params::MyCharaMenu_BattleSet_C_BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_12_OnTopInfoInnerImagineIconPressed__DelegateSignature Parms{};

	Parms.InInnerImagineSlotType = InInnerImagineSlotType;
	Parms.InImagineId = InImagineId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_11_OnTopInfoClassAbilityIconPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   InSkillSlotId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InSkillId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_BattleSet_C::BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_11_OnTopInfoClassAbilityIconPressed__DelegateSignature(int32 InSkillSlotId, int32 InSkillId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_11_OnTopInfoClassAbilityIconPressed__DelegateSignature");

	Params::MyCharaMenu_BattleSet_C_BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_11_OnTopInfoClassAbilityIconPressed__DelegateSignature Parms{};

	Parms.InSkillSlotId = InSkillSlotId;
	Parms.InSkillId = InSkillId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_10_OnTopInfoBattleImagineIconPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// ESkillActionPosition                    InBattleImagineSAP                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           InBattleImagineUniqueId                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UMyCharaMenu_BattleSet_C::BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_10_OnTopInfoBattleImagineIconPressed__DelegateSignature(ESkillActionPosition InBattleImagineSAP, const class FString& InBattleImagineUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_10_OnTopInfoBattleImagineIconPressed__DelegateSignature");

	Params::MyCharaMenu_BattleSet_C_BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_10_OnTopInfoBattleImagineIconPressed__DelegateSignature Parms{};

	Parms.InBattleImagineSAP = InBattleImagineSAP;
	Parms.InBattleImagineUniqueId = std::move(InBattleImagineUniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_9_OnTopInfoTacticalSkillIconPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// ESkillActionPosition                    InTacticalSkillSAP                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InSkillId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InSkillLevel                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_BattleSet_C::BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_9_OnTopInfoTacticalSkillIconPressed__DelegateSignature(ESkillActionPosition InTacticalSkillSAP, int32 InSkillId, int32 InSkillLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_9_OnTopInfoTacticalSkillIconPressed__DelegateSignature");

	Params::MyCharaMenu_BattleSet_C_BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_9_OnTopInfoTacticalSkillIconPressed__DelegateSignature Parms{};

	Parms.InTacticalSkillSAP = InTacticalSkillSAP;
	Parms.InSkillId = InSkillId;
	Parms.InSkillLevel = InSkillLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.StopListenInput
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_BattleSet_C::StopListenInput()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "StopListenInput");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.EscDetailedStatus
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_BattleSet_C::EscDetailedStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "EscDetailedStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.BndEvt__MyCharaMenu_BattleSet_LeftSideParameters_K2Node_ComponentBoundEvent_1_OnDetailedStatusClicked__DelegateSignature
// (BlueprintEvent)

void UMyCharaMenu_BattleSet_C::BndEvt__MyCharaMenu_BattleSet_LeftSideParameters_K2Node_ComponentBoundEvent_1_OnDetailedStatusClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "BndEvt__MyCharaMenu_BattleSet_LeftSideParameters_K2Node_ComponentBoundEvent_1_OnDetailedStatusClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnPlayerCharaCaptureCompleted
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_BattleSet_C::OnPlayerCharaCaptureCompleted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "OnPlayerCharaCaptureCompleted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.CloseDetailedStatus
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_BattleSet_C::CloseDetailedStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "CloseDetailedStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.BndEvt__MyCharaMenu_BattleSet_SBButtonFullScreen_DetailedStatus_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMyCharaMenu_BattleSet_C::BndEvt__MyCharaMenu_BattleSet_SBButtonFullScreen_DetailedStatus_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "BndEvt__MyCharaMenu_BattleSet_SBButtonFullScreen_DetailedStatus_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMyCharaMenu_BattleSet_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMyCharaMenu_BattleSet_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_BattleSet_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "PreConstruct");

	Params::MyCharaMenu_BattleSet_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnBattleCordeSaveRequestCompleted
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_BattleSet_C::OnBattleCordeSaveRequestCompleted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "OnBattleCordeSaveRequestCompleted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnSetLeftSideParamExpGaugeUpdateStopAtBattleCordeEditUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsUpdateStop                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_BattleSet_C::OnSetLeftSideParamExpGaugeUpdateStopAtBattleCordeEditUI(bool InIsUpdateStop)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "OnSetLeftSideParamExpGaugeUpdateStopAtBattleCordeEditUI");

	Params::MyCharaMenu_BattleSet_C_OnSetLeftSideParamExpGaugeUpdateStopAtBattleCordeEditUI Parms{};

	Parms.InIsUpdateStop = InIsUpdateStop;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnEquippedCostumeChangedAtBattleCordeEditUI
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_BattleSet_C::OnEquippedCostumeChangedAtBattleCordeEditUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "OnEquippedCostumeChangedAtBattleCordeEditUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnSetPlayerAvatarRotateActiveAtBattleCordeEditUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsRotateActive                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_BattleSet_C::OnSetPlayerAvatarRotateActiveAtBattleCordeEditUI(bool InIsRotateActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "OnSetPlayerAvatarRotateActiveAtBattleCordeEditUI");

	Params::MyCharaMenu_BattleSet_C_OnSetPlayerAvatarRotateActiveAtBattleCordeEditUI Parms{};

	Parms.InIsRotateActive = InIsRotateActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnLeftSideParamStatUpdatedAtBattleCordeEditUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BattleSetInfoType                     InInfoType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InIcludesClassInfo                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_BattleSet_C::OnLeftSideParamStatUpdatedAtBattleCordeEditUI(E_BattleSetInfoType InInfoType, bool InIcludesClassInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "OnLeftSideParamStatUpdatedAtBattleCordeEditUI");

	Params::MyCharaMenu_BattleSet_C_OnLeftSideParamStatUpdatedAtBattleCordeEditUI Parms{};

	Parms.InInfoType = InInfoType;
	Parms.InIcludesClassInfo = InIcludesClassInfo;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnClassChangedAtBattleCordeEditUI
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_BattleSet_C::OnClassChangedAtBattleCordeEditUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "OnClassChangedAtBattleCordeEditUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnEquippedWeaponSpawnedAtBattleCordeEditUI
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_BattleSet_C::OnEquippedWeaponSpawnedAtBattleCordeEditUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "OnEquippedWeaponSpawnedAtBattleCordeEditUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnBattleCordeEditUIHideFinished
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_BattleSet_C::OnBattleCordeEditUIHideFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "OnBattleCordeEditUIHideFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnBattleCordeEditUITermEnd
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_BattleSet_C::OnBattleCordeEditUITermEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "OnBattleCordeEditUITermEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnBattleCordeDataReloaded
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_BattleSet_C::OnBattleCordeDataReloaded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "OnBattleCordeDataReloaded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnBattleCordeDataReloadRequestedAtInit
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_BattleSet_C::OnBattleCordeDataReloadRequestedAtInit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "OnBattleCordeDataReloadRequestedAtInit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnEquippedCostumeChanged
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_BattleSet_C::OnEquippedCostumeChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "OnEquippedCostumeChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnEquipmentChangeUITermEnd
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_BattleSet_C::OnEquipmentChangeUITermEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "OnEquipmentChangeUITermEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnEquippedInnerImagineChangeRequestCompleted
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_BattleSet_C::OnEquippedInnerImagineChangeRequestCompleted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "OnEquippedInnerImagineChangeRequestCompleted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnEquippedBattleImagineChangeRequestCompleted
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_BattleSet_C::OnEquippedBattleImagineChangeRequestCompleted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "OnEquippedBattleImagineChangeRequestCompleted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnEquippedWeaponChangeRequestCompleted
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_BattleSet_C::OnEquippedWeaponChangeRequestCompleted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "OnEquippedWeaponChangeRequestCompleted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnSetLeftSideParamExpGaugeUpdateStopAtEquipmentChangeUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsUpdateStop                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_BattleSet_C::OnSetLeftSideParamExpGaugeUpdateStopAtEquipmentChangeUI(bool InIsUpdateStop)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "OnSetLeftSideParamExpGaugeUpdateStopAtEquipmentChangeUI");

	Params::MyCharaMenu_BattleSet_C_OnSetLeftSideParamExpGaugeUpdateStopAtEquipmentChangeUI Parms{};

	Parms.InIsUpdateStop = InIsUpdateStop;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnClassChangedAtEquipmentChangeUI
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_BattleSet_C::OnClassChangedAtEquipmentChangeUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "OnClassChangedAtEquipmentChangeUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnEquippedWeaponSpawnedAtEquipmentChangeUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BattleSetInfoType                     InBattleSetInfoType                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_BattleSet_C::OnEquippedWeaponSpawnedAtEquipmentChangeUI(E_BattleSetInfoType InBattleSetInfoType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "OnEquippedWeaponSpawnedAtEquipmentChangeUI");

	Params::MyCharaMenu_BattleSet_C_OnEquippedWeaponSpawnedAtEquipmentChangeUI Parms{};

	Parms.InBattleSetInfoType = InBattleSetInfoType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnLeftSideParamStatUpdatedAtEquipmentChangeUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BattleSetInfoType                     InBattleSetInfoType                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InIncludesClassInfoUpdate                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_BattleSet_C::OnLeftSideParamStatUpdatedAtEquipmentChangeUI(E_BattleSetInfoType InBattleSetInfoType, bool InIncludesClassInfoUpdate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "OnLeftSideParamStatUpdatedAtEquipmentChangeUI");

	Params::MyCharaMenu_BattleSet_C_OnLeftSideParamStatUpdatedAtEquipmentChangeUI Parms{};

	Parms.InBattleSetInfoType = InBattleSetInfoType;
	Parms.InIncludesClassInfoUpdate = InIncludesClassInfoUpdate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnEquipmentChangeUIListItemSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InEquippedEquipmentUniqueId                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           InSelectedEquipmentUniqueId                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UMyCharaMenu_BattleSet_C::OnEquipmentChangeUIListItemSelected(const class FString& InEquippedEquipmentUniqueId, const class FString& InSelectedEquipmentUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "OnEquipmentChangeUIListItemSelected");

	Params::MyCharaMenu_BattleSet_C_OnEquipmentChangeUIListItemSelected Parms{};

	Parms.InEquippedEquipmentUniqueId = std::move(InEquippedEquipmentUniqueId);
	Parms.InSelectedEquipmentUniqueId = std::move(InSelectedEquipmentUniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnEquipmentChangeUIHideFinished
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_BattleSet_C::OnEquipmentChangeUIHideFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "OnEquipmentChangeUIHideFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnSkillOrAbilityChangeUITermEnd
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_BattleSet_C::OnSkillOrAbilityChangeUITermEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "OnSkillOrAbilityChangeUITermEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnEquippedClassAbilityChanged
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_BattleSet_C::OnEquippedClassAbilityChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "OnEquippedClassAbilityChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnEquippedTacticalSkillChanged
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_BattleSet_C::OnEquippedTacticalSkillChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "OnEquippedTacticalSkillChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnLeftSideParamStatUpdatedAtSkillOrAbilityChangeUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BattleSetInfoType                     InInfoType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InIncludesClassInfo                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_BattleSet_C::OnLeftSideParamStatUpdatedAtSkillOrAbilityChangeUI(E_BattleSetInfoType InInfoType, bool InIncludesClassInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "OnLeftSideParamStatUpdatedAtSkillOrAbilityChangeUI");

	Params::MyCharaMenu_BattleSet_C_OnLeftSideParamStatUpdatedAtSkillOrAbilityChangeUI Parms{};

	Parms.InInfoType = InInfoType;
	Parms.InIncludesClassInfo = InIncludesClassInfo;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnSkillOrAbilityChangeUIListItemSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InEquippedSkillId                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InSelectedSkillId                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_BattleSet_C::OnSkillOrAbilityChangeUIListItemSelected(int32 InEquippedSkillId, int32 InSelectedSkillId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "OnSkillOrAbilityChangeUIListItemSelected");

	Params::MyCharaMenu_BattleSet_C_OnSkillOrAbilityChangeUIListItemSelected Parms{};

	Parms.InEquippedSkillId = InEquippedSkillId;
	Parms.InSelectedSkillId = InSelectedSkillId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnSkillOrAbilityChangeUIHideFinished
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_BattleSet_C::OnSkillOrAbilityChangeUIHideFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "OnSkillOrAbilityChangeUIHideFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnUnexistHigherPriorityCapture
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_BattleSet_C::OnUnexistHigherPriorityCapture(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "OnUnexistHigherPriorityCapture");

	Params::MyCharaMenu_BattleSet_C_OnUnexistHigherPriorityCapture Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnExistHigherPriorityCapture
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_BattleSet_C::OnExistHigherPriorityCapture(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "OnExistHigherPriorityCapture");

	Params::MyCharaMenu_BattleSet_C_OnExistHigherPriorityCapture Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.DestructPlayerAvatarImageGraph
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_BattleSet_C::DestructPlayerAvatarImageGraph()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "DestructPlayerAvatarImageGraph");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.ConstructPlayerAvatarImageGraph
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_BattleSet_C::ConstructPlayerAvatarImageGraph()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "ConstructPlayerAvatarImageGraph");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.UpdatePlayerAvatarVisibility_Internal
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_BattleSet_C::UpdatePlayerAvatarVisibility_Internal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "UpdatePlayerAvatarVisibility_Internal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.SetPlayerAvatarImageVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bVisibility                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_BattleSet_C::SetPlayerAvatarImageVisibility(bool bVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "SetPlayerAvatarImageVisibility");

	Params::MyCharaMenu_BattleSet_C_SetPlayerAvatarImageVisibility Parms{};

	Parms.bVisibility = bVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.In Animation
// (Public, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_BattleSet_C::In_Animation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "In Animation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.SetBtnFullScreenForDetailedStatusVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility                        InVisibility                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_BattleSet_C::SetBtnFullScreenForDetailedStatusVisibility(ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "SetBtnFullScreenForDetailedStatusVisibility");

	Params::MyCharaMenu_BattleSet_C_SetBtnFullScreenForDetailedStatusVisibility Parms{};

	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.ImmediateCloseDetailedStatus
// (Public, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_BattleSet_C::ImmediateCloseDetailedStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "ImmediateCloseDetailedStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.SetTopInfoVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InIgnorePlayerCaptureStudio                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_BattleSet_C::SetTopInfoVisibility(bool InIsVisible, bool InIgnorePlayerCaptureStudio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "SetTopInfoVisibility");

	Params::MyCharaMenu_BattleSet_C_SetTopInfoVisibility Parms{};

	Parms.InIsVisible = InIsVisible;
	Parms.InIgnorePlayerCaptureStudio = InIgnorePlayerCaptureStudio;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.GetPlayerCharacterEquipStatusDiffRequestRetCode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           InCurrEquipmentUniqueId                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           InNewEquipmentUniqueId                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   OutRetCode                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_BattleSet_C::GetPlayerCharacterEquipStatusDiffRequestRetCode(const class FString& InCurrEquipmentUniqueId, const class FString& InNewEquipmentUniqueId, int32* OutRetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "GetPlayerCharacterEquipStatusDiffRequestRetCode");

	Params::MyCharaMenu_BattleSet_C_GetPlayerCharacterEquipStatusDiffRequestRetCode Parms{};

	Parms.InCurrEquipmentUniqueId = std::move(InCurrEquipmentUniqueId);
	Parms.InNewEquipmentUniqueId = std::move(InNewEquipmentUniqueId);

	UObject::ProcessEvent(Func, &Parms);

	if (OutRetCode != nullptr)
		*OutRetCode = Parms.OutRetCode;
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.SetStorageMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsStorageMode                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_BattleSet_C::SetStorageMode(bool InIsStorageMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "SetStorageMode");

	Params::MyCharaMenu_BattleSet_C_SetStorageMode Parms{};

	Parms.InIsStorageMode = InIsStorageMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.UpdateLeftSideParameters
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIncludeClassInfo                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_BattleSet_C::UpdateLeftSideParameters(bool InIncludeClassInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "UpdateLeftSideParameters");

	Params::MyCharaMenu_BattleSet_C_UpdateLeftSideParameters Parms{};

	Parms.InIncludeClassInfo = InIncludeClassInfo;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.SetLeftSideParameterExpGaugeUpdateStop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsUpdateStop                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_BattleSet_C::SetLeftSideParameterExpGaugeUpdateStop(bool InIsUpdateStop)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "SetLeftSideParameterExpGaugeUpdateStop");

	Params::MyCharaMenu_BattleSet_C_SetLeftSideParameterExpGaugeUpdateStop Parms{};

	Parms.InIsUpdateStop = InIsUpdateStop;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.SetUIBlockerFrontRowVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_BattleSet_C::SetUIBlockerFrontRowVisibility(bool InIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "SetUIBlockerFrontRowVisibility");

	Params::MyCharaMenu_BattleSet_C_SetUIBlockerFrontRowVisibility Parms{};

	Parms.InIsVisible = InIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.BindEventsOfEquipmentChangeUI
// (Public, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_BattleSet_C::BindEventsOfEquipmentChangeUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "BindEventsOfEquipmentChangeUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.UnbindEventsOfEquipmentChangeUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InUnbindTermEnd                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_BattleSet_C::UnbindEventsOfEquipmentChangeUI(bool InUnbindTermEnd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "UnbindEventsOfEquipmentChangeUI");

	Params::MyCharaMenu_BattleSet_C_UnbindEventsOfEquipmentChangeUI Parms{};

	Parms.InUnbindTermEnd = InUnbindTermEnd;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.BindEventsOfSkillOrAbilityChangeUI
// (Public, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_BattleSet_C::BindEventsOfSkillOrAbilityChangeUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "BindEventsOfSkillOrAbilityChangeUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.UnbindEventsOfSkillOrAbilityChangeUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InUnbindTermEnd                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_BattleSet_C::UnbindEventsOfSkillOrAbilityChangeUI(bool InUnbindTermEnd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "UnbindEventsOfSkillOrAbilityChangeUI");

	Params::MyCharaMenu_BattleSet_C_UnbindEventsOfSkillOrAbilityChangeUI Parms{};

	Parms.InUnbindTermEnd = InUnbindTermEnd;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.BindEventsOfBattleCordeEditUI
// (Public, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_BattleSet_C::BindEventsOfBattleCordeEditUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "BindEventsOfBattleCordeEditUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.UnbindEventsOfBattleCordeEditUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InUnbindTermEnd                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_BattleSet_C::UnbindEventsOfBattleCordeEditUI(bool InUnbindTermEnd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_BattleSet_C", "UnbindEventsOfBattleCordeEditUI");

	Params::MyCharaMenu_BattleSet_C_UnbindEventsOfBattleCordeEditUI Parms{};

	Parms.InUnbindTermEnd = InUnbindTermEnd;

	UObject::ProcessEvent(Func, &Parms);
}

}

