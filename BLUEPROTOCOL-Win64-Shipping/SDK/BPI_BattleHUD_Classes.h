#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BPI_BattleHUD.BPI_BattleHUD_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_BattleHUD_C : public UInterface
	{
	public:
		void ShortcutRingExecuteF12();
		void ShortcutRingExecuteF11();
		void ShortcutRingExecuteF10();
		void ShortcutRingExecuteF9();
		void ShortcutRingExecuteF8();
		void ShortcutRingExecuteF7();
		void ShortcutRingExecuteF6();
		void ShortcutRingExecuteF5();
		void InitDhcBattleHUD(class AActor* Actor);
		void InitTimerRespawnHUD(ETimerHUDType HUDType);
		void SetKeyGuideTextVisible(ESkillActionPosition InSkillActionPosition, bool InIsVisible);
		void SetBattleInfoHUDVisible(ESlateVisibility InVisibility);
		void BattleAreaDisableMessage();
		void ChangeKeyGuide1_2Visibility();
		void OpenInitSelect();
		void SetEditMode(bool bEditMode);
		void OnUpdateRespawnGauge();
		void OnShowRespawnBattleArea();
		void OnDisableRespawn();
		void OnShowRespawn(float InRespawnTime);
		void OnShowCombo(int32_t Combo);
		void OnSaveCharaConfigUpdate(EKeyGuideType InKeyGuideType);
		void ChangeKeyGuideUpdate(EKeyGuideType InKeyGuideType);
		void OnClickedCloseChatHUD();
		void CallAddMemberDeadNotifyMessage(const class FText& MemberName);
		void OpenCursorModeToOtherPCMenu(class ABP_PlayerCharacter_C* InOtherPC);
		void HitIndicatorAddMarker(const struct FVector& HitLocation);
		void SetFocusActor(class AActor* Actor);
		void SwitchingMap();
		void IsEditMap(float PressTime, bool* Result);
		void NextQuestInfo();
		void ItemSelectorExe();
		void ItemSelectorMoveLeftPress();
		void ItemSelectorMoveLeftRepeat();
		void ItemSelectorMoveRightPress();
		void ItemSelectorMoveRightRepeat();
		void ShortcutRingClose();
		void ShortcutRingOpen();
		void ShortcutRingSwitch();
		void ForceCloseChatHUD();
		void ShowChatHUD();
		void CallUpdateInteractionNotice(const struct FSBInteractionInfo& InteractionInfo);
		void IsOtherPCListMenuVisible(bool* Visible);
		void IsChatWindowActive(bool* Active);
		void OnRequestTutorialHelp(bool bCheckUnlock);
		void KeyShortcut_Stamp();
		void UpdateMouseCursorIcon();
		void RequestDirectChat(const class FString& PlayerId, const class FText& Name, const class FString& CharacterId, ESBPrivilegeType PrivilegeType);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
