#pragma once

 

// Package: WBP_StoragePresetEquip

#include "Basic.hpp"

#include "WBP_StoragePresetEquip_classes.hpp"
#include "WBP_StoragePresetEquip_parameters.hpp"


namespace SDK
{

// Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_StoragePresetEquip_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StoragePresetEquip_C", "OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.ExecuteUbergraph_WBP_StoragePresetEquip
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StoragePresetEquip_C::ExecuteUbergraph_WBP_StoragePresetEquip(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StoragePresetEquip_C", "ExecuteUbergraph_WBP_StoragePresetEquip");

	Params::WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_StoragePresetEquip_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StoragePresetEquip_C", "PreConstruct");

	Params::WBP_StoragePresetEquip_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.FreeBattleSet
// (BlueprintCallable, BlueprintEvent)

void UWBP_StoragePresetEquip_C::FreeBattleSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StoragePresetEquip_C", "FreeBattleSet");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.InitBattleSet
// (BlueprintCallable, BlueprintEvent)

void UWBP_StoragePresetEquip_C::InitBattleSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StoragePresetEquip_C", "InitBattleSet");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.OnChangeStateByCostumeChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InPrevStateName                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           InNextStateName                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_StoragePresetEquip_C::OnChangeStateByCostumeChange(const class FString& InPrevStateName, const class FString& InNextStateName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StoragePresetEquip_C", "OnChangeStateByCostumeChange");

	Params::WBP_StoragePresetEquip_C_OnChangeStateByCostumeChange Parms{};

	Parms.InPrevStateName = std::move(InPrevStateName);
	Parms.InNextStateName = std::move(InNextStateName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.OnCharaPartsLoadedDelegate_ByChangeCostume_����
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_StoragePresetEquip_C::OnCharaPartsLoadedDelegate_ByChangeCostume_____(bool Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StoragePresetEquip_C", "OnCharaPartsLoadedDelegate_ByChangeCostume_����");

	Params::WBP_StoragePresetEquip_C_OnCharaPartsLoadedDelegate_ByChangeCostume_____ Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.SetUIBlockerFrontRowVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_StoragePresetEquip_C::SetUIBlockerFrontRowVisibility(bool InIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StoragePresetEquip_C", "SetUIBlockerFrontRowVisibility");

	Params::WBP_StoragePresetEquip_C_SetUIBlockerFrontRowVisibility Parms{};

	Parms.InIsVisible = InIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.OnCostumeChangeOccured
// (BlueprintCallable, BlueprintEvent)

void UWBP_StoragePresetEquip_C::OnCostumeChangeOccured()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StoragePresetEquip_C", "OnCostumeChangeOccured");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.StartOpenMenuAnimation
// (BlueprintCallable, BlueprintEvent)

void UWBP_StoragePresetEquip_C::StartOpenMenuAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StoragePresetEquip_C", "StartOpenMenuAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.OnChangeState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InPrevStateName                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           InNextStateName                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_StoragePresetEquip_C::OnChangeState(const class FString& InPrevStateName, const class FString& InNextStateName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StoragePresetEquip_C", "OnChangeState");

	Params::WBP_StoragePresetEquip_C_OnChangeState Parms{};

	Parms.InPrevStateName = std::move(InPrevStateName);
	Parms.InNextStateName = std::move(InNextStateName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.OnPlayerAvatarLoaded
// (BlueprintCallable, BlueprintEvent)

void UWBP_StoragePresetEquip_C::OnPlayerAvatarLoaded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StoragePresetEquip_C", "OnPlayerAvatarLoaded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.OnCalcEquipStatusDiff
// (BlueprintCallable, BlueprintEvent)

void UWBP_StoragePresetEquip_C::OnCalcEquipStatusDiff()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StoragePresetEquip_C", "OnCalcEquipStatusDiff");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UWBP_StoragePresetEquip_C::WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StoragePresetEquip_C", "WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.onAnimTimer
// (BlueprintCallable, BlueprintEvent)

void UWBP_StoragePresetEquip_C::OnAnimTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StoragePresetEquip_C", "onAnimTimer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_StoragePresetEquip_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StoragePresetEquip_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_StoragePresetEquip_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StoragePresetEquip_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_0_OnSetPlayerCaptureStudioHidden__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    InIsHidden                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_StoragePresetEquip_C::BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_0_OnSetPlayerCaptureStudioHidden__DelegateSignature(bool InIsHidden)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StoragePresetEquip_C", "BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_0_OnSetPlayerCaptureStudioHidden__DelegateSignature");

	Params::WBP_StoragePresetEquip_C_BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_0_OnSetPlayerCaptureStudioHidden__DelegateSignature Parms{};

	Parms.InIsHidden = InIsHidden;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.OnClickedDetailedStatus
// (BlueprintCallable, BlueprintEvent)

void UWBP_StoragePresetEquip_C::OnClickedDetailedStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StoragePresetEquip_C", "OnClickedDetailedStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.EscDetailedStatus
// (BlueprintCallable, BlueprintEvent)

void UWBP_StoragePresetEquip_C::EscDetailedStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StoragePresetEquip_C", "EscDetailedStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.BndEvt__MyCharacterMenu_StatusSwitcher_ButtonFullScreen_BattleSet_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_StoragePresetEquip_C::BndEvt__MyCharacterMenu_StatusSwitcher_ButtonFullScreen_BattleSet_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StoragePresetEquip_C", "BndEvt__MyCharacterMenu_StatusSwitcher_ButtonFullScreen_BattleSet_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.OnClicked_BattleSet_DetailedStatus
// (BlueprintCallable, BlueprintEvent)

void UWBP_StoragePresetEquip_C::OnClicked_BattleSet_DetailedStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StoragePresetEquip_C", "OnClicked_BattleSet_DetailedStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_7_OnEquippedWeaponSpawned__DelegateSignature
// (BlueprintEvent)

void UWBP_StoragePresetEquip_C::BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_7_OnEquippedWeaponSpawned__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StoragePresetEquip_C", "BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_7_OnEquippedWeaponSpawned__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_6_OnPlayerCharacterEquippedCostumeChanged__DelegateSignature
// (BlueprintEvent)

void UWBP_StoragePresetEquip_C::BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_6_OnPlayerCharacterEquippedCostumeChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StoragePresetEquip_C", "BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_6_OnPlayerCharacterEquippedCostumeChanged__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_5_OnResetPlayerAvatarRotate__DelegateSignature
// (BlueprintEvent)

void UWBP_StoragePresetEquip_C::BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_5_OnResetPlayerAvatarRotate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StoragePresetEquip_C", "BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_5_OnResetPlayerAvatarRotate__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_1_OnSetPlayerAvatarRotateActive__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    InIsRotateActive                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_StoragePresetEquip_C::BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_1_OnSetPlayerAvatarRotateActive__DelegateSignature(bool InIsRotateActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StoragePresetEquip_C", "BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_1_OnSetPlayerAvatarRotateActive__DelegateSignature");

	Params::WBP_StoragePresetEquip_C_BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_1_OnSetPlayerAvatarRotateActive__DelegateSignature Parms{};

	Parms.InIsRotateActive = InIsRotateActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_2_OnIsChildWidgetOpened__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    InIsChildWidgetOpened                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_StoragePresetEquip_C::BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_2_OnIsChildWidgetOpened__DelegateSignature(bool InIsChildWidgetOpened)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StoragePresetEquip_C", "BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_2_OnIsChildWidgetOpened__DelegateSignature");

	Params::WBP_StoragePresetEquip_C_BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_2_OnIsChildWidgetOpened__DelegateSignature Parms{};

	Parms.InIsChildWidgetOpened = InIsChildWidgetOpened;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_1_OnIsCmnBackBtnVisible__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_StoragePresetEquip_C::BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_1_OnIsCmnBackBtnVisible__DelegateSignature(bool InIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StoragePresetEquip_C", "BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_1_OnIsCmnBackBtnVisible__DelegateSignature");

	Params::WBP_StoragePresetEquip_C_BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_1_OnIsCmnBackBtnVisible__DelegateSignature Parms{};

	Parms.InIsVisible = InIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1
// (BlueprintEvent)

void UWBP_StoragePresetEquip_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StoragePresetEquip_C", "WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.BndEvt__CmnBack_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_StoragePresetEquip_C::BndEvt__CmnBack_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StoragePresetEquip_C", "BndEvt__CmnBack_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.BndEvt__TabBtn2_K2Node_ComponentBoundEvent_10_BtnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UShopCmnBtn1_C*                   ClickBtn                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   TabId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StoragePresetEquip_C::BndEvt__TabBtn2_K2Node_ComponentBoundEvent_10_BtnClick__DelegateSignature(class UShopCmnBtn1_C* ClickBtn, int32 TabId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StoragePresetEquip_C", "BndEvt__TabBtn2_K2Node_ComponentBoundEvent_10_BtnClick__DelegateSignature");

	Params::WBP_StoragePresetEquip_C_BndEvt__TabBtn2_K2Node_ComponentBoundEvent_10_BtnClick__DelegateSignature Parms{};

	Parms.ClickBtn = ClickBtn;
	Parms.TabId = TabId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.BndEvt__TabBtn1_K2Node_ComponentBoundEvent_3_BtnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UShopCmnBtn1_C*                   ClickBtn                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   TabId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StoragePresetEquip_C::BndEvt__TabBtn1_K2Node_ComponentBoundEvent_3_BtnClick__DelegateSignature(class UShopCmnBtn1_C* ClickBtn, int32 TabId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StoragePresetEquip_C", "BndEvt__TabBtn1_K2Node_ComponentBoundEvent_3_BtnClick__DelegateSignature");

	Params::WBP_StoragePresetEquip_C_BndEvt__TabBtn1_K2Node_ComponentBoundEvent_3_BtnClick__DelegateSignature Parms{};

	Parms.ClickBtn = ClickBtn;
	Parms.TabId = TabId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.OnPress_Cancel
// (Event, Public, BlueprintEvent)

void UWBP_StoragePresetEquip_C::OnPress_Cancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StoragePresetEquip_C", "OnPress_Cancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.RandomPlayAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_StoragePresetEquip_C::RandomPlayAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StoragePresetEquip_C", "RandomPlayAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.RandomPlayAnimation2
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_StoragePresetEquip_C::RandomPlayAnimation2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StoragePresetEquip_C", "RandomPlayAnimation2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.SetPresetType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBPlayerPresetType                     InPresetType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StoragePresetEquip_C::SetPresetType(ESBPlayerPresetType InPresetType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StoragePresetEquip_C", "SetPresetType");

	Params::WBP_StoragePresetEquip_C_SetPresetType Parms{};

	Parms.InPresetType = InPresetType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.SetCmnBackBtnVIsibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_StoragePresetEquip_C::SetCmnBackBtnVIsibility(bool InIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StoragePresetEquip_C", "SetCmnBackBtnVIsibility");

	Params::WBP_StoragePresetEquip_C_SetCmnBackBtnVIsibility Parms{};

	Parms.InIsVisible = InIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.FindCurrMapPlayerAvatarTransform
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InCurrMapName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FTransform                       OutTransform                                           (Parm, OutParm, IsPlainOldData, NoDestructor)

void UWBP_StoragePresetEquip_C::FindCurrMapPlayerAvatarTransform(const class FString& InCurrMapName, struct FTransform* OutTransform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StoragePresetEquip_C", "FindCurrMapPlayerAvatarTransform");

	Params::WBP_StoragePresetEquip_C_FindCurrMapPlayerAvatarTransform Parms{};

	Parms.InCurrMapName = std::move(InCurrMapName);

	UObject::ProcessEvent(Func, &Parms);

	if (OutTransform != nullptr)
		*OutTransform = std::move(Parms.OutTransform);
}


// Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.SetPlayerAvatarCurrentModeMotion
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_StoragePresetEquip_C::SetPlayerAvatarCurrentModeMotion()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StoragePresetEquip_C", "SetPlayerAvatarCurrentModeMotion");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.SetPlayerAvatarRotateActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsRotateActive                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_StoragePresetEquip_C::SetPlayerAvatarRotateActive(bool InIsRotateActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StoragePresetEquip_C", "SetPlayerAvatarRotateActive");

	Params::WBP_StoragePresetEquip_C_SetPlayerAvatarRotateActive Parms{};

	Parms.InIsRotateActive = InIsRotateActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.SetPlayerAvatarStudioHidden
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsHidden                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_StoragePresetEquip_C::SetPlayerAvatarStudioHidden(bool InIsHidden)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StoragePresetEquip_C", "SetPlayerAvatarStudioHidden");

	Params::WBP_StoragePresetEquip_C_SetPlayerAvatarStudioHidden Parms{};

	Parms.InIsHidden = InIsHidden;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.SetUIBlockerForBattleSetVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_StoragePresetEquip_C::SetUIBlockerForBattleSetVisibility(bool InIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StoragePresetEquip_C", "SetUIBlockerForBattleSetVisibility");

	Params::WBP_StoragePresetEquip_C_SetUIBlockerForBattleSetVisibility Parms{};

	Parms.InIsVisible = InIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.SetBattleSetPlayerAvatarVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInIsVisible                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_StoragePresetEquip_C::SetBattleSetPlayerAvatarVisibility(bool bInIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StoragePresetEquip_C", "SetBattleSetPlayerAvatarVisibility");

	Params::WBP_StoragePresetEquip_C_SetBattleSetPlayerAvatarVisibility Parms{};

	Parms.bInIsVisible = bInIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}

}

