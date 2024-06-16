#pragma once

 

// Package: FLIB_SeasonPassMenu

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass FLIB_SeasonPassMenu.FLIB_SeasonPassMenu_C
// 0x0000 (0x0028 - 0x0028)
class UFLIB_SeasonPassMenu_C final : public UBlueprintFunctionLibrary
{
public:
	static class USBPlayerSeasonPassComponent* GetSeasonPassComponentPure(class UObject* __WorldContext);
	static class USBPlayerSeasonPassComponent* GetSeasonPassComponent(class UObject* __WorldContext);
	static void IsNearlyStartCurrentSeason(class UObject* __WorldContext, bool* bResult);
	static void IsNearlyEndCurrentSeasonProgress(class UObject* __WorldContext, bool* bResult);
	static void IsNearlyEndCurrentSeason(class UObject* __WorldContext, bool* bResult);
	static void IsEnableSeasonPassPurchaseMenu(class UObject* __WorldContext, bool* bResult);
	static void IsEnableSeasonPassRankPurchaseMenu(class UObject* __WorldContext, bool* bResult);
	static void IsUnreadedSeasonPassFlag(ENewMarkContentType InCategory, class UObject* __WorldContext, bool* bResult);
	static void IsUnreadedSeasonPassFlagSub(ENewMarkContentType InCategory, class UObject* __WorldContext, bool* bResult);
	static void GetSeasonPassTiming(class UObject* __WorldContext, bool* bValid, int32* Flag);
	static void RegistReadedSeasonPassFlag(ENewMarkContentType NewFlag, ENewMarkContentType EndFlag, ENewMarkContentType ReceiveEndFlag, class UObject* __WorldContext);
	static void SetSeasonPassQuestListItem(const struct FSBSeasonPassQuestItemData& SBSeasonPassQuestItemData, const ESBSeasonPassQuestCycleType Cycle, class UTextBlock* QuestName, class UTextBlock* Progress, class UWidget* Cleared, TArray<class UQuestRewardIcon_C*>& ItemIconArray, class UWidgetSwitcher* Switcher_RewardBtn, class UWidget* Button_Clear, class UWidget* Button_Clear_Arrow, class UTextBlock* RankPoint, class UUMG_SeasonPassQuestRibbon_C* PassRibbon, class UWidget* Notsubscribed, bool IsGetRewardItem, class UObject* __WorldContext);
	static void UpdateSubMenuExclamation(class UObject* Sender, class UObject* __WorldContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FLIB_SeasonPassMenu_C">();
	}
	static class UFLIB_SeasonPassMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFLIB_SeasonPassMenu_C>();
	}
};
static_assert(alignof(UFLIB_SeasonPassMenu_C) == 0x000008, "Wrong alignment on UFLIB_SeasonPassMenu_C");
static_assert(sizeof(UFLIB_SeasonPassMenu_C) == 0x000028, "Wrong size on UFLIB_SeasonPassMenu_C");

}

