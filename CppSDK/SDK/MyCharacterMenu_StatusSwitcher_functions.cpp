#pragma once

 

// Package: MyCharacterMenu_StatusSwitcher

#include "Basic.hpp"

#include "MyCharacterMenu_StatusSwitcher_classes.hpp"
#include "MyCharacterMenu_StatusSwitcher_parameters.hpp"


namespace SDK
{

// Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnSubMenuChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharacterMenu_StatusSwitcher_C::OnSubMenuChanged__DelegateSignature(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_StatusSwitcher_C", "OnSubMenuChanged__DelegateSignature");

	Params::MyCharacterMenu_StatusSwitcher_C_OnSubMenuChanged__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnAchievementChangeButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMyCharaMenu_AchievementList_C*   InAchievementList                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharacterMenu_StatusSwitcher_C::OnAchievementChangeButtonClicked__DelegateSignature(class UMyCharaMenu_AchievementList_C* InAchievementList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_StatusSwitcher_C", "OnAchievementChangeButtonClicked__DelegateSignature");

	Params::MyCharacterMenu_StatusSwitcher_C_OnAchievementChangeButtonClicked__DelegateSignature Parms{};

	Parms.InAchievementList = InAchievementList;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnAcquiredAchievementLoaded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InResult                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharacterMenu_StatusSwitcher_C::OnAcquiredAchievementLoaded__DelegateSignature(bool InResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_StatusSwitcher_C", "OnAcquiredAchievementLoaded__DelegateSignature");

	Params::MyCharacterMenu_StatusSwitcher_C_OnAcquiredAchievementLoaded__DelegateSignature Parms{};

	Parms.InResult = InResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnSelectAchievementSaved__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InResult                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharacterMenu_StatusSwitcher_C::OnSelectAchievementSaved__DelegateSignature(bool InResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_StatusSwitcher_C", "OnSelectAchievementSaved__DelegateSignature");

	Params::MyCharacterMenu_StatusSwitcher_C_OnSelectAchievementSaved__DelegateSignature Parms{};

	Parms.InResult = InResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnSetPlayerCaptureStudioHidden__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsHidden                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharacterMenu_StatusSwitcher_C::OnSetPlayerCaptureStudioHidden__DelegateSignature(bool IsHidden)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_StatusSwitcher_C", "OnSetPlayerCaptureStudioHidden__DelegateSignature");

	Params::MyCharacterMenu_StatusSwitcher_C_OnSetPlayerCaptureStudioHidden__DelegateSignature Parms{};

	Parms.IsHidden = IsHidden;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnPlayerAvatarRotateActive__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsActive                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharacterMenu_StatusSwitcher_C::OnPlayerAvatarRotateActive__DelegateSignature(bool InIsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_StatusSwitcher_C", "OnPlayerAvatarRotateActive__DelegateSignature");

	Params::MyCharacterMenu_StatusSwitcher_C_OnPlayerAvatarRotateActive__DelegateSignature Parms{};

	Parms.InIsActive = InIsActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnPlayerCharacterEquippedCostumeChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMyCharacterMenu_StatusSwitcher_C::OnPlayerCharacterEquippedCostumeChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_StatusSwitcher_C", "OnPlayerCharacterEquippedCostumeChanged__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnIsCmnBackBtnVisible__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharacterMenu_StatusSwitcher_C::OnIsCmnBackBtnVisible__DelegateSignature(bool InIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_StatusSwitcher_C", "OnIsCmnBackBtnVisible__DelegateSignature");

	Params::MyCharacterMenu_StatusSwitcher_C_OnIsCmnBackBtnVisible__DelegateSignature Parms{};

	Parms.InIsVisible = InIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnEquippedWeaponSpawned__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMyCharacterMenu_StatusSwitcher_C::OnEquippedWeaponSpawned__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_StatusSwitcher_C", "OnEquippedWeaponSpawned__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnResetPlayerAvatarRotate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMyCharacterMenu_StatusSwitcher_C::OnResetPlayerAvatarRotate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_StatusSwitcher_C", "OnResetPlayerAvatarRotate__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnSetCostumeOnFlag__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsCostumeOn                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharacterMenu_StatusSwitcher_C::OnSetCostumeOnFlag__DelegateSignature(bool InIsCostumeOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_StatusSwitcher_C", "OnSetCostumeOnFlag__DelegateSignature");

	Params::MyCharacterMenu_StatusSwitcher_C_OnSetCostumeOnFlag__DelegateSignature Parms{};

	Parms.InIsCostumeOn = InIsCostumeOn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.ExecuteUbergraph_MyCharacterMenu_StatusSwitcher
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharacterMenu_StatusSwitcher_C::ExecuteUbergraph_MyCharacterMenu_StatusSwitcher(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_StatusSwitcher_C", "ExecuteUbergraph_MyCharacterMenu_StatusSwitcher");

	Params::MyCharacterMenu_StatusSwitcher_C_ExecuteUbergraph_MyCharacterMenu_StatusSwitcher Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_0_OnSetPlayerCaptureStudioHidden__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    InIsHidden                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharacterMenu_StatusSwitcher_C::BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_0_OnSetPlayerCaptureStudioHidden__DelegateSignature(bool InIsHidden)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_StatusSwitcher_C", "BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_0_OnSetPlayerCaptureStudioHidden__DelegateSignature");

	Params::MyCharacterMenu_StatusSwitcher_C_BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_0_OnSetPlayerCaptureStudioHidden__DelegateSignature Parms{};

	Parms.InIsHidden = InIsHidden;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_8_OnResetPlayerAvatarRotate__DelegateSignature
// (BlueprintEvent)

void UMyCharacterMenu_StatusSwitcher_C::BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_8_OnResetPlayerAvatarRotate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_StatusSwitcher_C", "BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_8_OnResetPlayerAvatarRotate__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_10_OnEquippedWeaponSpawned__DelegateSignature
// (BlueprintEvent)

void UMyCharacterMenu_StatusSwitcher_C::BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_10_OnEquippedWeaponSpawned__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_StatusSwitcher_C", "BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_10_OnEquippedWeaponSpawned__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_5_OnIsCmnBackBtnVisible__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharacterMenu_StatusSwitcher_C::BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_5_OnIsCmnBackBtnVisible__DelegateSignature(bool InIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_StatusSwitcher_C", "BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_5_OnIsCmnBackBtnVisible__DelegateSignature");

	Params::MyCharacterMenu_StatusSwitcher_C_BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_5_OnIsCmnBackBtnVisible__DelegateSignature Parms{};

	Parms.InIsVisible = InIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_7_OnPlayerCharacterEquippedCostumeChanged__DelegateSignature
// (BlueprintEvent)

void UMyCharacterMenu_StatusSwitcher_C::BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_7_OnPlayerCharacterEquippedCostumeChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_StatusSwitcher_C", "BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_7_OnPlayerCharacterEquippedCostumeChanged__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_6_OnSetPlayerAvatarRotateActive__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    InIsRotateActive                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharacterMenu_StatusSwitcher_C::BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_6_OnSetPlayerAvatarRotateActive__DelegateSignature(bool InIsRotateActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_StatusSwitcher_C", "BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_6_OnSetPlayerAvatarRotateActive__DelegateSignature");

	Params::MyCharacterMenu_StatusSwitcher_C_BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_6_OnSetPlayerAvatarRotateActive__DelegateSignature Parms{};

	Parms.InIsRotateActive = InIsRotateActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnAdventureBoardBtn_Event
// (BlueprintCallable, BlueprintEvent)

void UMyCharacterMenu_StatusSwitcher_C::OnAdventureBoardBtn_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_StatusSwitcher_C", "OnAdventureBoardBtn_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.Free_BattleSet_FullSrnBtn
// (BlueprintCallable, BlueprintEvent)

void UMyCharacterMenu_StatusSwitcher_C::Free_BattleSet_FullSrnBtn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_StatusSwitcher_C", "Free_BattleSet_FullSrnBtn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnClickedDetailedStatus
// (BlueprintCallable, BlueprintEvent)

void UMyCharacterMenu_StatusSwitcher_C::OnClickedDetailedStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_StatusSwitcher_C", "OnClickedDetailedStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.EscDetailedStatus
// (BlueprintCallable, BlueprintEvent)

void UMyCharacterMenu_StatusSwitcher_C::EscDetailedStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_StatusSwitcher_C", "EscDetailedStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.Init_BattleSet_FullSrnBtn
// (BlueprintCallable, BlueprintEvent)

void UMyCharacterMenu_StatusSwitcher_C::Init_BattleSet_FullSrnBtn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_StatusSwitcher_C", "Init_BattleSet_FullSrnBtn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.BookmarkUpdateRequest
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMyCharacterMenu_StatusSwitcher_C::BookmarkUpdateRequest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_StatusSwitcher_C", "BookmarkUpdateRequest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.BndEvt__MyCharacterMenu_StatusSwitcher_ButtonFullScreen_BattleSet_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMyCharacterMenu_StatusSwitcher_C::BndEvt__MyCharacterMenu_StatusSwitcher_ButtonFullScreen_BattleSet_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_StatusSwitcher_C", "BndEvt__MyCharacterMenu_StatusSwitcher_ButtonFullScreen_BattleSet_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnClicked_BattleSet_DetailedStatus
// (BlueprintCallable, BlueprintEvent)

void UMyCharacterMenu_StatusSwitcher_C::OnClicked_BattleSet_DetailedStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_StatusSwitcher_C", "OnClicked_BattleSet_DetailedStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.ChangeTab
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_TmpClickedTabButtonId                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharacterMenu_StatusSwitcher_C::ChangeTab(int32 Param_TmpClickedTabButtonId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_StatusSwitcher_C", "ChangeTab");

	Params::MyCharacterMenu_StatusSwitcher_C_ChangeTab Parms{};

	Parms.Param_TmpClickedTabButtonId = Param_TmpClickedTabButtonId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnSetPlayerCaptureStudioHidden_����
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsHidden                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharacterMenu_StatusSwitcher_C::OnSetPlayerCaptureStudioHidden_____(bool IsHidden)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_StatusSwitcher_C", "OnSetPlayerCaptureStudioHidden_����");

	Params::MyCharacterMenu_StatusSwitcher_C_OnSetPlayerCaptureStudioHidden_____ Parms{};

	Parms.IsHidden = IsHidden;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMyCharacterMenu_StatusSwitcher_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_StatusSwitcher_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsFirstOpen                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           Param_OpenBookMarkType                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UMyCharacterMenu_StatusSwitcher_C::Init(bool Param_IsFirstOpen, const class FString& Param_OpenBookMarkType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_StatusSwitcher_C", "Init");

	Params::MyCharacterMenu_StatusSwitcher_C_Init Parms{};

	Parms.Param_IsFirstOpen = Param_IsFirstOpen;
	Parms.Param_OpenBookMarkType = std::move(Param_OpenBookMarkType);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMyCharacterMenu_StatusSwitcher_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_StatusSwitcher_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.Update Sub Button Excramation Icon
// (Public, BlueprintCallable, BlueprintEvent)

void UMyCharacterMenu_StatusSwitcher_C::Update_Sub_Button_Excramation_Icon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_StatusSwitcher_C", "Update Sub Button Excramation Icon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.IsBattleSetButtonEnable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    OutIsEnable                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharacterMenu_StatusSwitcher_C::IsBattleSetButtonEnable(bool* OutIsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_StatusSwitcher_C", "IsBattleSetButtonEnable");

	Params::MyCharacterMenu_StatusSwitcher_C_IsBattleSetButtonEnable Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsEnable != nullptr)
		*OutIsEnable = Parms.OutIsEnable;
}


// Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.InitCostumeChangeMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMyCharaMenu_Costume_C*           InCostumeChangeMenu                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharacterMenu_StatusSwitcher_C::InitCostumeChangeMenu(class UMyCharaMenu_Costume_C* InCostumeChangeMenu)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_StatusSwitcher_C", "InitCostumeChangeMenu");

	Params::MyCharacterMenu_StatusSwitcher_C_InitCostumeChangeMenu Parms{};

	Parms.InCostumeChangeMenu = InCostumeChangeMenu;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.SetPlayerAvatarImageVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInIsVisible                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharacterMenu_StatusSwitcher_C::SetPlayerAvatarImageVisibility(bool bInIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_StatusSwitcher_C", "SetPlayerAvatarImageVisibility");

	Params::MyCharacterMenu_StatusSwitcher_C_SetPlayerAvatarImageVisibility Parms{};

	Parms.bInIsVisible = bInIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}

}

