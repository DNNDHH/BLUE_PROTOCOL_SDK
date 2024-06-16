#pragma once

 

// Package: BPI_BattleHUD

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "SkyBlue_structs.hpp"
#include "EKeyGuideType_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_BattleHUD.BPI_BattleHUD_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_BattleHUD_C final : public IInterface
{
public:
	void RequestDirectChat(const class FString& PlayerId, const class FText& Param_Name, const class FString& CharacterId, ESBPrivilegeType Privilege_Type);
	void UpdateMouseCursorIcon();
	void KeyShortcut_Stamp();
	void OnRequestTutorialHelp(bool bCheckUnlock);
	void IsChatWindowActive(bool* Active);
	void IsOtherPCListMenuVisible(bool* Visible);
	void CallUpdateInteractionNotice(const struct FSBInteractionInfo& InteractionInfo);
	void ShowChatHUD();
	void ForceCloseChatHUD();
	void ShortcutRingSwitch();
	void ShortcutRingOpen();
	void ShortcutRingClose();
	void ItemSelectorMoveRightRepeat();
	void ItemSelectorMoveRightPress();
	void ItemSelectorMoveLeftRepeat();
	void ItemSelectorMoveLeftPress();
	void ItemSelectorExe();
	void NextQuestInfo();
	void IsEditMap(float PressTime, bool* Result);
	void Switching_Map();
	void SetFocusActor(class AActor* Actor);
	void HitIndicatorAddMarker(const struct FVector& HitLocation);
	void OpenCursorModeToOtherPCMenu(class ABP_PlayerCharacter_C* InOtherPC);
	void CallAddMemberDeadNotifyMessage(const class FText& MemberName);
	void OnClickedCloseChatHUD();
	void ChangeKeyGuideUpdate(EKeyGuideType InKeyGuideType);
	void OnSaveCharaConfigUpdate(EKeyGuideType InKeyGuideType);
	void OnShowCombo(int32 Combo);
	void OnShowRespawn(float InRespawnTime);
	void OnDisableRespawn();
	void OnShowRespawnBattleArea();
	void OnUpdateRespawnGauge();
	void SetEditMode(bool bEditMode);
	void OpenInitSelect();
	void ChangeKeyGuide1_2Visibility();
	void BattleAreaDisableMessage();
	void SetBattleInfoHUDVisible(ESlateVisibility InVisibility);
	void SetKeyGuideTextVisible(ESkillActionPosition InSkillActionPosition, bool InIsVisible);
	void InitTimerRespawnHUD(ETimerHUDType HUDType);
	void InitDhcBattleHUD(class AActor* Actor);
	void ShortcutRingExecuteF5();
	void ShortcutRingExecuteF6();
	void ShortcutRingExecuteF7();
	void ShortcutRingExecuteF8();
	void ShortcutRingExecuteF9();
	void ShortcutRingExecuteF10();
	void ShortcutRingExecuteF11();
	void ShortcutRingExecuteF12();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_BattleHUD_C">();
	}
	static class IBPI_BattleHUD_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_BattleHUD_C>();
	}
};
static_assert(alignof(IBPI_BattleHUD_C) == 0x000008, "Wrong alignment on IBPI_BattleHUD_C");
static_assert(sizeof(IBPI_BattleHUD_C) == 0x000028, "Wrong size on IBPI_BattleHUD_C");

}

