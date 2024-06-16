#pragma once

 

// Package: BPI_BattleHUD

#include "Basic.hpp"

#include "BPI_BattleHUD_classes.hpp"
#include "BPI_BattleHUD_parameters.hpp"


namespace SDK
{

// Function BPI_BattleHUD.BPI_BattleHUD_C.RequestDirectChat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           PlayerId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                             Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                           CharacterId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESBPrivilegeType                        Privilege_Type                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_BattleHUD_C::RequestDirectChat(const class FString& PlayerId, const class FText& Param_Name, const class FString& CharacterId, ESBPrivilegeType Privilege_Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleHUD_C", "RequestDirectChat");

	Params::BPI_BattleHUD_C_RequestDirectChat Parms{};

	Parms.PlayerId = std::move(PlayerId);
	Parms.Param_Name = std::move(Param_Name);
	Parms.CharacterId = std::move(CharacterId);
	Parms.Privilege_Type = Privilege_Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_BattleHUD.BPI_BattleHUD_C.UpdateMouseCursorIcon
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_BattleHUD_C::UpdateMouseCursorIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleHUD_C", "UpdateMouseCursorIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_BattleHUD.BPI_BattleHUD_C.KeyShortcut_Stamp
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_BattleHUD_C::KeyShortcut_Stamp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleHUD_C", "KeyShortcut_Stamp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_BattleHUD.BPI_BattleHUD_C.OnRequestTutorialHelp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bCheckUnlock                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_BattleHUD_C::OnRequestTutorialHelp(bool bCheckUnlock)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleHUD_C", "OnRequestTutorialHelp");

	Params::BPI_BattleHUD_C_OnRequestTutorialHelp Parms{};

	Parms.bCheckUnlock = bCheckUnlock;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_BattleHUD.BPI_BattleHUD_C.IsChatWindowActive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Active                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_BattleHUD_C::IsChatWindowActive(bool* Active)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleHUD_C", "IsChatWindowActive");

	Params::BPI_BattleHUD_C_IsChatWindowActive Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Active != nullptr)
		*Active = Parms.Active;
}


// Function BPI_BattleHUD.BPI_BattleHUD_C.IsOtherPCListMenuVisible
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_BattleHUD_C::IsOtherPCListMenuVisible(bool* Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleHUD_C", "IsOtherPCListMenuVisible");

	Params::BPI_BattleHUD_C_IsOtherPCListMenuVisible Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Visible != nullptr)
		*Visible = Parms.Visible;
}


// Function BPI_BattleHUD.BPI_BattleHUD_C.CallUpdateInteractionNotice
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBInteractionInfo               InteractionInfo                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)

void IBPI_BattleHUD_C::CallUpdateInteractionNotice(const struct FSBInteractionInfo& InteractionInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleHUD_C", "CallUpdateInteractionNotice");

	Params::BPI_BattleHUD_C_CallUpdateInteractionNotice Parms{};

	Parms.InteractionInfo = std::move(InteractionInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_BattleHUD.BPI_BattleHUD_C.ShowChatHUD
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_BattleHUD_C::ShowChatHUD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleHUD_C", "ShowChatHUD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_BattleHUD.BPI_BattleHUD_C.ForceCloseChatHUD
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_BattleHUD_C::ForceCloseChatHUD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleHUD_C", "ForceCloseChatHUD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_BattleHUD.BPI_BattleHUD_C.ShortcutRingSwitch
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_BattleHUD_C::ShortcutRingSwitch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleHUD_C", "ShortcutRingSwitch");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_BattleHUD.BPI_BattleHUD_C.ShortcutRingOpen
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_BattleHUD_C::ShortcutRingOpen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleHUD_C", "ShortcutRingOpen");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_BattleHUD.BPI_BattleHUD_C.ShortcutRingClose
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_BattleHUD_C::ShortcutRingClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleHUD_C", "ShortcutRingClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_BattleHUD.BPI_BattleHUD_C.ItemSelectorMoveRightRepeat
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_BattleHUD_C::ItemSelectorMoveRightRepeat()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleHUD_C", "ItemSelectorMoveRightRepeat");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_BattleHUD.BPI_BattleHUD_C.ItemSelectorMoveRightPress
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_BattleHUD_C::ItemSelectorMoveRightPress()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleHUD_C", "ItemSelectorMoveRightPress");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_BattleHUD.BPI_BattleHUD_C.ItemSelectorMoveLeftRepeat
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_BattleHUD_C::ItemSelectorMoveLeftRepeat()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleHUD_C", "ItemSelectorMoveLeftRepeat");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_BattleHUD.BPI_BattleHUD_C.ItemSelectorMoveLeftPress
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_BattleHUD_C::ItemSelectorMoveLeftPress()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleHUD_C", "ItemSelectorMoveLeftPress");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_BattleHUD.BPI_BattleHUD_C.ItemSelectorExe
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_BattleHUD_C::ItemSelectorExe()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleHUD_C", "ItemSelectorExe");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_BattleHUD.BPI_BattleHUD_C.NextQuestInfo
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_BattleHUD_C::NextQuestInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleHUD_C", "NextQuestInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_BattleHUD.BPI_BattleHUD_C.IsEditMap
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   PressTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_BattleHUD_C::IsEditMap(float PressTime, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleHUD_C", "IsEditMap");

	Params::BPI_BattleHUD_C_IsEditMap Parms{};

	Parms.PressTime = PressTime;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function BPI_BattleHUD.BPI_BattleHUD_C.Switching Map
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_BattleHUD_C::Switching_Map()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleHUD_C", "Switching Map");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_BattleHUD.BPI_BattleHUD_C.SetFocusActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_BattleHUD_C::SetFocusActor(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleHUD_C", "SetFocusActor");

	Params::BPI_BattleHUD_C_SetFocusActor Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_BattleHUD.BPI_BattleHUD_C.HitIndicatorAddMarker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          HitLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_BattleHUD_C::HitIndicatorAddMarker(const struct FVector& HitLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleHUD_C", "HitIndicatorAddMarker");

	Params::BPI_BattleHUD_C_HitIndicatorAddMarker Parms{};

	Parms.HitLocation = std::move(HitLocation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_BattleHUD.BPI_BattleHUD_C.OpenCursorModeToOtherPCMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerCharacter_C*            InOtherPC                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_BattleHUD_C::OpenCursorModeToOtherPCMenu(class ABP_PlayerCharacter_C* InOtherPC)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleHUD_C", "OpenCursorModeToOtherPCMenu");

	Params::BPI_BattleHUD_C_OpenCursorModeToOtherPCMenu Parms{};

	Parms.InOtherPC = InOtherPC;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_BattleHUD.BPI_BattleHUD_C.CallAddMemberDeadNotifyMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             MemberName                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void IBPI_BattleHUD_C::CallAddMemberDeadNotifyMessage(const class FText& MemberName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleHUD_C", "CallAddMemberDeadNotifyMessage");

	Params::BPI_BattleHUD_C_CallAddMemberDeadNotifyMessage Parms{};

	Parms.MemberName = std::move(MemberName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_BattleHUD.BPI_BattleHUD_C.OnClickedCloseChatHUD
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_BattleHUD_C::OnClickedCloseChatHUD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleHUD_C", "OnClickedCloseChatHUD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_BattleHUD.BPI_BattleHUD_C.ChangeKeyGuideUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EKeyGuideType                           InKeyGuideType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_BattleHUD_C::ChangeKeyGuideUpdate(EKeyGuideType InKeyGuideType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleHUD_C", "ChangeKeyGuideUpdate");

	Params::BPI_BattleHUD_C_ChangeKeyGuideUpdate Parms{};

	Parms.InKeyGuideType = InKeyGuideType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_BattleHUD.BPI_BattleHUD_C.OnSaveCharaConfigUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EKeyGuideType                           InKeyGuideType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_BattleHUD_C::OnSaveCharaConfigUpdate(EKeyGuideType InKeyGuideType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleHUD_C", "OnSaveCharaConfigUpdate");

	Params::BPI_BattleHUD_C_OnSaveCharaConfigUpdate Parms{};

	Parms.InKeyGuideType = InKeyGuideType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_BattleHUD.BPI_BattleHUD_C.OnShowCombo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Combo                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_BattleHUD_C::OnShowCombo(int32 Combo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleHUD_C", "OnShowCombo");

	Params::BPI_BattleHUD_C_OnShowCombo Parms{};

	Parms.Combo = Combo;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_BattleHUD.BPI_BattleHUD_C.OnShowRespawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InRespawnTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_BattleHUD_C::OnShowRespawn(float InRespawnTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleHUD_C", "OnShowRespawn");

	Params::BPI_BattleHUD_C_OnShowRespawn Parms{};

	Parms.InRespawnTime = InRespawnTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_BattleHUD.BPI_BattleHUD_C.OnDisableRespawn
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_BattleHUD_C::OnDisableRespawn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleHUD_C", "OnDisableRespawn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_BattleHUD.BPI_BattleHUD_C.OnShowRespawnBattleArea
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_BattleHUD_C::OnShowRespawnBattleArea()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleHUD_C", "OnShowRespawnBattleArea");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_BattleHUD.BPI_BattleHUD_C.OnUpdateRespawnGauge
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_BattleHUD_C::OnUpdateRespawnGauge()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleHUD_C", "OnUpdateRespawnGauge");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_BattleHUD.BPI_BattleHUD_C.SetEditMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bEditMode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_BattleHUD_C::SetEditMode(bool bEditMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleHUD_C", "SetEditMode");

	Params::BPI_BattleHUD_C_SetEditMode Parms{};

	Parms.bEditMode = bEditMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_BattleHUD.BPI_BattleHUD_C.OpenInitSelect
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_BattleHUD_C::OpenInitSelect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleHUD_C", "OpenInitSelect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_BattleHUD.BPI_BattleHUD_C.ChangeKeyGuide1_2Visibility
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_BattleHUD_C::ChangeKeyGuide1_2Visibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleHUD_C", "ChangeKeyGuide1_2Visibility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_BattleHUD.BPI_BattleHUD_C.BattleAreaDisableMessage
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_BattleHUD_C::BattleAreaDisableMessage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleHUD_C", "BattleAreaDisableMessage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_BattleHUD.BPI_BattleHUD_C.SetBattleInfoHUDVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility                        InVisibility                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_BattleHUD_C::SetBattleInfoHUDVisible(ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleHUD_C", "SetBattleInfoHUDVisible");

	Params::BPI_BattleHUD_C_SetBattleInfoHUDVisible Parms{};

	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_BattleHUD.BPI_BattleHUD_C.SetKeyGuideTextVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESkillActionPosition                    InSkillActionPosition                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_BattleHUD_C::SetKeyGuideTextVisible(ESkillActionPosition InSkillActionPosition, bool InIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleHUD_C", "SetKeyGuideTextVisible");

	Params::BPI_BattleHUD_C_SetKeyGuideTextVisible Parms{};

	Parms.InSkillActionPosition = InSkillActionPosition;
	Parms.InIsVisible = InIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_BattleHUD.BPI_BattleHUD_C.InitTimerRespawnHUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ETimerHUDType                           HUDType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_BattleHUD_C::InitTimerRespawnHUD(ETimerHUDType HUDType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleHUD_C", "InitTimerRespawnHUD");

	Params::BPI_BattleHUD_C_InitTimerRespawnHUD Parms{};

	Parms.HUDType = HUDType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_BattleHUD.BPI_BattleHUD_C.InitDhcBattleHUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_BattleHUD_C::InitDhcBattleHUD(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleHUD_C", "InitDhcBattleHUD");

	Params::BPI_BattleHUD_C_InitDhcBattleHUD Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_BattleHUD.BPI_BattleHUD_C.ShortcutRingExecuteF5
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_BattleHUD_C::ShortcutRingExecuteF5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleHUD_C", "ShortcutRingExecuteF5");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_BattleHUD.BPI_BattleHUD_C.ShortcutRingExecuteF6
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_BattleHUD_C::ShortcutRingExecuteF6()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleHUD_C", "ShortcutRingExecuteF6");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_BattleHUD.BPI_BattleHUD_C.ShortcutRingExecuteF7
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_BattleHUD_C::ShortcutRingExecuteF7()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleHUD_C", "ShortcutRingExecuteF7");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_BattleHUD.BPI_BattleHUD_C.ShortcutRingExecuteF8
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_BattleHUD_C::ShortcutRingExecuteF8()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleHUD_C", "ShortcutRingExecuteF8");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_BattleHUD.BPI_BattleHUD_C.ShortcutRingExecuteF9
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_BattleHUD_C::ShortcutRingExecuteF9()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleHUD_C", "ShortcutRingExecuteF9");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_BattleHUD.BPI_BattleHUD_C.ShortcutRingExecuteF10
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_BattleHUD_C::ShortcutRingExecuteF10()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleHUD_C", "ShortcutRingExecuteF10");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_BattleHUD.BPI_BattleHUD_C.ShortcutRingExecuteF11
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_BattleHUD_C::ShortcutRingExecuteF11()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleHUD_C", "ShortcutRingExecuteF11");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_BattleHUD.BPI_BattleHUD_C.ShortcutRingExecuteF12
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_BattleHUD_C::ShortcutRingExecuteF12()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleHUD_C", "ShortcutRingExecuteF12");

	UObject::ProcessEvent(Func, nullptr);
}

}

