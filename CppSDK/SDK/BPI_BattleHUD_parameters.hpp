#pragma once

 

// Package: BPI_BattleHUD

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "EKeyGuideType_structs.hpp"


namespace SDK::Params
{

// Function BPI_BattleHUD.BPI_BattleHUD_C.RequestDirectChat
// 0x0040 (0x0040 - 0x0000)
struct BPI_BattleHUD_C_RequestDirectChat final
{
public:
	class FString                                 PlayerId;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   Param_Name;                                        // 0x0010(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                 CharacterId;                                       // 0x0028(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESBPrivilegeType                              Privilege_Type;                                    // 0x0038(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_BattleHUD_C_RequestDirectChat) == 0x000008, "Wrong alignment on BPI_BattleHUD_C_RequestDirectChat");
static_assert(sizeof(BPI_BattleHUD_C_RequestDirectChat) == 0x000040, "Wrong size on BPI_BattleHUD_C_RequestDirectChat");
static_assert(offsetof(BPI_BattleHUD_C_RequestDirectChat, PlayerId) == 0x000000, "Member 'BPI_BattleHUD_C_RequestDirectChat::PlayerId' has a wrong offset!");
static_assert(offsetof(BPI_BattleHUD_C_RequestDirectChat, Param_Name) == 0x000010, "Member 'BPI_BattleHUD_C_RequestDirectChat::Param_Name' has a wrong offset!");
static_assert(offsetof(BPI_BattleHUD_C_RequestDirectChat, CharacterId) == 0x000028, "Member 'BPI_BattleHUD_C_RequestDirectChat::CharacterId' has a wrong offset!");
static_assert(offsetof(BPI_BattleHUD_C_RequestDirectChat, Privilege_Type) == 0x000038, "Member 'BPI_BattleHUD_C_RequestDirectChat::Privilege_Type' has a wrong offset!");

// Function BPI_BattleHUD.BPI_BattleHUD_C.OnRequestTutorialHelp
// 0x0001 (0x0001 - 0x0000)
struct BPI_BattleHUD_C_OnRequestTutorialHelp final
{
public:
	bool                                          bCheckUnlock;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_BattleHUD_C_OnRequestTutorialHelp) == 0x000001, "Wrong alignment on BPI_BattleHUD_C_OnRequestTutorialHelp");
static_assert(sizeof(BPI_BattleHUD_C_OnRequestTutorialHelp) == 0x000001, "Wrong size on BPI_BattleHUD_C_OnRequestTutorialHelp");
static_assert(offsetof(BPI_BattleHUD_C_OnRequestTutorialHelp, bCheckUnlock) == 0x000000, "Member 'BPI_BattleHUD_C_OnRequestTutorialHelp::bCheckUnlock' has a wrong offset!");

// Function BPI_BattleHUD.BPI_BattleHUD_C.IsChatWindowActive
// 0x0001 (0x0001 - 0x0000)
struct BPI_BattleHUD_C_IsChatWindowActive final
{
public:
	bool                                          Active;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_BattleHUD_C_IsChatWindowActive) == 0x000001, "Wrong alignment on BPI_BattleHUD_C_IsChatWindowActive");
static_assert(sizeof(BPI_BattleHUD_C_IsChatWindowActive) == 0x000001, "Wrong size on BPI_BattleHUD_C_IsChatWindowActive");
static_assert(offsetof(BPI_BattleHUD_C_IsChatWindowActive, Active) == 0x000000, "Member 'BPI_BattleHUD_C_IsChatWindowActive::Active' has a wrong offset!");

// Function BPI_BattleHUD.BPI_BattleHUD_C.IsOtherPCListMenuVisible
// 0x0001 (0x0001 - 0x0000)
struct BPI_BattleHUD_C_IsOtherPCListMenuVisible final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_BattleHUD_C_IsOtherPCListMenuVisible) == 0x000001, "Wrong alignment on BPI_BattleHUD_C_IsOtherPCListMenuVisible");
static_assert(sizeof(BPI_BattleHUD_C_IsOtherPCListMenuVisible) == 0x000001, "Wrong size on BPI_BattleHUD_C_IsOtherPCListMenuVisible");
static_assert(offsetof(BPI_BattleHUD_C_IsOtherPCListMenuVisible, Visible) == 0x000000, "Member 'BPI_BattleHUD_C_IsOtherPCListMenuVisible::Visible' has a wrong offset!");

// Function BPI_BattleHUD.BPI_BattleHUD_C.CallUpdateInteractionNotice
// 0x0018 (0x0018 - 0x0000)
struct BPI_BattleHUD_C_CallUpdateInteractionNotice final
{
public:
	struct FSBInteractionInfo                     InteractionInfo;                                   // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BPI_BattleHUD_C_CallUpdateInteractionNotice) == 0x000004, "Wrong alignment on BPI_BattleHUD_C_CallUpdateInteractionNotice");
static_assert(sizeof(BPI_BattleHUD_C_CallUpdateInteractionNotice) == 0x000018, "Wrong size on BPI_BattleHUD_C_CallUpdateInteractionNotice");
static_assert(offsetof(BPI_BattleHUD_C_CallUpdateInteractionNotice, InteractionInfo) == 0x000000, "Member 'BPI_BattleHUD_C_CallUpdateInteractionNotice::InteractionInfo' has a wrong offset!");

// Function BPI_BattleHUD.BPI_BattleHUD_C.IsEditMap
// 0x0008 (0x0008 - 0x0000)
struct BPI_BattleHUD_C_IsEditMap final
{
public:
	float                                         PressTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_BattleHUD_C_IsEditMap) == 0x000004, "Wrong alignment on BPI_BattleHUD_C_IsEditMap");
static_assert(sizeof(BPI_BattleHUD_C_IsEditMap) == 0x000008, "Wrong size on BPI_BattleHUD_C_IsEditMap");
static_assert(offsetof(BPI_BattleHUD_C_IsEditMap, PressTime) == 0x000000, "Member 'BPI_BattleHUD_C_IsEditMap::PressTime' has a wrong offset!");
static_assert(offsetof(BPI_BattleHUD_C_IsEditMap, Result) == 0x000004, "Member 'BPI_BattleHUD_C_IsEditMap::Result' has a wrong offset!");

// Function BPI_BattleHUD.BPI_BattleHUD_C.SetFocusActor
// 0x0008 (0x0008 - 0x0000)
struct BPI_BattleHUD_C_SetFocusActor final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_BattleHUD_C_SetFocusActor) == 0x000008, "Wrong alignment on BPI_BattleHUD_C_SetFocusActor");
static_assert(sizeof(BPI_BattleHUD_C_SetFocusActor) == 0x000008, "Wrong size on BPI_BattleHUD_C_SetFocusActor");
static_assert(offsetof(BPI_BattleHUD_C_SetFocusActor, Actor) == 0x000000, "Member 'BPI_BattleHUD_C_SetFocusActor::Actor' has a wrong offset!");

// Function BPI_BattleHUD.BPI_BattleHUD_C.HitIndicatorAddMarker
// 0x000C (0x000C - 0x0000)
struct BPI_BattleHUD_C_HitIndicatorAddMarker final
{
public:
	struct FVector                                HitLocation;                                       // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_BattleHUD_C_HitIndicatorAddMarker) == 0x000004, "Wrong alignment on BPI_BattleHUD_C_HitIndicatorAddMarker");
static_assert(sizeof(BPI_BattleHUD_C_HitIndicatorAddMarker) == 0x00000C, "Wrong size on BPI_BattleHUD_C_HitIndicatorAddMarker");
static_assert(offsetof(BPI_BattleHUD_C_HitIndicatorAddMarker, HitLocation) == 0x000000, "Member 'BPI_BattleHUD_C_HitIndicatorAddMarker::HitLocation' has a wrong offset!");

// Function BPI_BattleHUD.BPI_BattleHUD_C.OpenCursorModeToOtherPCMenu
// 0x0008 (0x0008 - 0x0000)
struct BPI_BattleHUD_C_OpenCursorModeToOtherPCMenu final
{
public:
	class ABP_PlayerCharacter_C*                  InOtherPC;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_BattleHUD_C_OpenCursorModeToOtherPCMenu) == 0x000008, "Wrong alignment on BPI_BattleHUD_C_OpenCursorModeToOtherPCMenu");
static_assert(sizeof(BPI_BattleHUD_C_OpenCursorModeToOtherPCMenu) == 0x000008, "Wrong size on BPI_BattleHUD_C_OpenCursorModeToOtherPCMenu");
static_assert(offsetof(BPI_BattleHUD_C_OpenCursorModeToOtherPCMenu, InOtherPC) == 0x000000, "Member 'BPI_BattleHUD_C_OpenCursorModeToOtherPCMenu::InOtherPC' has a wrong offset!");

// Function BPI_BattleHUD.BPI_BattleHUD_C.CallAddMemberDeadNotifyMessage
// 0x0018 (0x0018 - 0x0000)
struct BPI_BattleHUD_C_CallAddMemberDeadNotifyMessage final
{
public:
	class FText                                   MemberName;                                        // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(BPI_BattleHUD_C_CallAddMemberDeadNotifyMessage) == 0x000008, "Wrong alignment on BPI_BattleHUD_C_CallAddMemberDeadNotifyMessage");
static_assert(sizeof(BPI_BattleHUD_C_CallAddMemberDeadNotifyMessage) == 0x000018, "Wrong size on BPI_BattleHUD_C_CallAddMemberDeadNotifyMessage");
static_assert(offsetof(BPI_BattleHUD_C_CallAddMemberDeadNotifyMessage, MemberName) == 0x000000, "Member 'BPI_BattleHUD_C_CallAddMemberDeadNotifyMessage::MemberName' has a wrong offset!");

// Function BPI_BattleHUD.BPI_BattleHUD_C.ChangeKeyGuideUpdate
// 0x0001 (0x0001 - 0x0000)
struct BPI_BattleHUD_C_ChangeKeyGuideUpdate final
{
public:
	EKeyGuideType                                 InKeyGuideType;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_BattleHUD_C_ChangeKeyGuideUpdate) == 0x000001, "Wrong alignment on BPI_BattleHUD_C_ChangeKeyGuideUpdate");
static_assert(sizeof(BPI_BattleHUD_C_ChangeKeyGuideUpdate) == 0x000001, "Wrong size on BPI_BattleHUD_C_ChangeKeyGuideUpdate");
static_assert(offsetof(BPI_BattleHUD_C_ChangeKeyGuideUpdate, InKeyGuideType) == 0x000000, "Member 'BPI_BattleHUD_C_ChangeKeyGuideUpdate::InKeyGuideType' has a wrong offset!");

// Function BPI_BattleHUD.BPI_BattleHUD_C.OnSaveCharaConfigUpdate
// 0x0001 (0x0001 - 0x0000)
struct BPI_BattleHUD_C_OnSaveCharaConfigUpdate final
{
public:
	EKeyGuideType                                 InKeyGuideType;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_BattleHUD_C_OnSaveCharaConfigUpdate) == 0x000001, "Wrong alignment on BPI_BattleHUD_C_OnSaveCharaConfigUpdate");
static_assert(sizeof(BPI_BattleHUD_C_OnSaveCharaConfigUpdate) == 0x000001, "Wrong size on BPI_BattleHUD_C_OnSaveCharaConfigUpdate");
static_assert(offsetof(BPI_BattleHUD_C_OnSaveCharaConfigUpdate, InKeyGuideType) == 0x000000, "Member 'BPI_BattleHUD_C_OnSaveCharaConfigUpdate::InKeyGuideType' has a wrong offset!");

// Function BPI_BattleHUD.BPI_BattleHUD_C.OnShowCombo
// 0x0004 (0x0004 - 0x0000)
struct BPI_BattleHUD_C_OnShowCombo final
{
public:
	int32                                         Combo;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_BattleHUD_C_OnShowCombo) == 0x000004, "Wrong alignment on BPI_BattleHUD_C_OnShowCombo");
static_assert(sizeof(BPI_BattleHUD_C_OnShowCombo) == 0x000004, "Wrong size on BPI_BattleHUD_C_OnShowCombo");
static_assert(offsetof(BPI_BattleHUD_C_OnShowCombo, Combo) == 0x000000, "Member 'BPI_BattleHUD_C_OnShowCombo::Combo' has a wrong offset!");

// Function BPI_BattleHUD.BPI_BattleHUD_C.OnShowRespawn
// 0x0004 (0x0004 - 0x0000)
struct BPI_BattleHUD_C_OnShowRespawn final
{
public:
	float                                         InRespawnTime;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_BattleHUD_C_OnShowRespawn) == 0x000004, "Wrong alignment on BPI_BattleHUD_C_OnShowRespawn");
static_assert(sizeof(BPI_BattleHUD_C_OnShowRespawn) == 0x000004, "Wrong size on BPI_BattleHUD_C_OnShowRespawn");
static_assert(offsetof(BPI_BattleHUD_C_OnShowRespawn, InRespawnTime) == 0x000000, "Member 'BPI_BattleHUD_C_OnShowRespawn::InRespawnTime' has a wrong offset!");

// Function BPI_BattleHUD.BPI_BattleHUD_C.SetEditMode
// 0x0001 (0x0001 - 0x0000)
struct BPI_BattleHUD_C_SetEditMode final
{
public:
	bool                                          bEditMode;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_BattleHUD_C_SetEditMode) == 0x000001, "Wrong alignment on BPI_BattleHUD_C_SetEditMode");
static_assert(sizeof(BPI_BattleHUD_C_SetEditMode) == 0x000001, "Wrong size on BPI_BattleHUD_C_SetEditMode");
static_assert(offsetof(BPI_BattleHUD_C_SetEditMode, bEditMode) == 0x000000, "Member 'BPI_BattleHUD_C_SetEditMode::bEditMode' has a wrong offset!");

// Function BPI_BattleHUD.BPI_BattleHUD_C.SetBattleInfoHUDVisible
// 0x0001 (0x0001 - 0x0000)
struct BPI_BattleHUD_C_SetBattleInfoHUDVisible final
{
public:
	ESlateVisibility                              InVisibility;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_BattleHUD_C_SetBattleInfoHUDVisible) == 0x000001, "Wrong alignment on BPI_BattleHUD_C_SetBattleInfoHUDVisible");
static_assert(sizeof(BPI_BattleHUD_C_SetBattleInfoHUDVisible) == 0x000001, "Wrong size on BPI_BattleHUD_C_SetBattleInfoHUDVisible");
static_assert(offsetof(BPI_BattleHUD_C_SetBattleInfoHUDVisible, InVisibility) == 0x000000, "Member 'BPI_BattleHUD_C_SetBattleInfoHUDVisible::InVisibility' has a wrong offset!");

// Function BPI_BattleHUD.BPI_BattleHUD_C.SetKeyGuideTextVisible
// 0x0002 (0x0002 - 0x0000)
struct BPI_BattleHUD_C_SetKeyGuideTextVisible final
{
public:
	ESkillActionPosition                          InSkillActionPosition;                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InIsVisible;                                       // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_BattleHUD_C_SetKeyGuideTextVisible) == 0x000001, "Wrong alignment on BPI_BattleHUD_C_SetKeyGuideTextVisible");
static_assert(sizeof(BPI_BattleHUD_C_SetKeyGuideTextVisible) == 0x000002, "Wrong size on BPI_BattleHUD_C_SetKeyGuideTextVisible");
static_assert(offsetof(BPI_BattleHUD_C_SetKeyGuideTextVisible, InSkillActionPosition) == 0x000000, "Member 'BPI_BattleHUD_C_SetKeyGuideTextVisible::InSkillActionPosition' has a wrong offset!");
static_assert(offsetof(BPI_BattleHUD_C_SetKeyGuideTextVisible, InIsVisible) == 0x000001, "Member 'BPI_BattleHUD_C_SetKeyGuideTextVisible::InIsVisible' has a wrong offset!");

// Function BPI_BattleHUD.BPI_BattleHUD_C.InitTimerRespawnHUD
// 0x0001 (0x0001 - 0x0000)
struct BPI_BattleHUD_C_InitTimerRespawnHUD final
{
public:
	ETimerHUDType                                 HUDType;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_BattleHUD_C_InitTimerRespawnHUD) == 0x000001, "Wrong alignment on BPI_BattleHUD_C_InitTimerRespawnHUD");
static_assert(sizeof(BPI_BattleHUD_C_InitTimerRespawnHUD) == 0x000001, "Wrong size on BPI_BattleHUD_C_InitTimerRespawnHUD");
static_assert(offsetof(BPI_BattleHUD_C_InitTimerRespawnHUD, HUDType) == 0x000000, "Member 'BPI_BattleHUD_C_InitTimerRespawnHUD::HUDType' has a wrong offset!");

// Function BPI_BattleHUD.BPI_BattleHUD_C.InitDhcBattleHUD
// 0x0008 (0x0008 - 0x0000)
struct BPI_BattleHUD_C_InitDhcBattleHUD final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_BattleHUD_C_InitDhcBattleHUD) == 0x000008, "Wrong alignment on BPI_BattleHUD_C_InitDhcBattleHUD");
static_assert(sizeof(BPI_BattleHUD_C_InitDhcBattleHUD) == 0x000008, "Wrong size on BPI_BattleHUD_C_InitDhcBattleHUD");
static_assert(offsetof(BPI_BattleHUD_C_InitDhcBattleHUD, Actor) == 0x000000, "Member 'BPI_BattleHUD_C_InitDhcBattleHUD::Actor' has a wrong offset!");

}

