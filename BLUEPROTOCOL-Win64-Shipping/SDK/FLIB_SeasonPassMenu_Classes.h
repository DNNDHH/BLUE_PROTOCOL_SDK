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
	 * BlueprintGeneratedClass FLIB_SeasonPassMenu.FLIB_SeasonPassMenu_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFLIB_SeasonPassMenu_C : public UBlueprintFunctionLibrary
	{
	public:
		void UpdateForceClearBtn(const struct FSBSeasonPassQuestItemData& QuestItem, class UWidget* ArrowObj, class UWidget* ClearBtn, class UObject* __WorldContext);
		void IsSeasonPassQuestRewardItem(const struct FSBSeasonPassQuestItemData& InQuestItemList, class UObject* __WorldContext, bool* OutIsRewardItem);
		void UpdateSubMenuExclamation(class UObject* Sender, class UObject* __WorldContext);
		void SetSeasonPassQuestListItem(const struct FSBSeasonPassQuestItemData& SBSeasonPassQuestItemData, ESBSeasonPassQuestCycleType Cycle, class UTextBlock* QuestName, class UTextBlock* Progress, class UWidget* Cleared, TArray<class UQuestRewardIcon_C*>* ItemIconArray, class UWidgetSwitcher* Switcher_RewardBtn, class UWidget* Button_Clear, class UWidget* Button_Clear_Arrow, class UTextBlock* RankPoint, class UWidget* Notsubscribed, bool IsGetRewardItem, class UObject* __WorldContext);
		void RegistReadedSeasonPassFlag(ENewMarkContentType NewFlag, ENewMarkContentType EndFlag, ENewMarkContentType ReceiveEndFlag, class UObject* __WorldContext);
		void GetSeasonPassTiming(class UObject* __WorldContext, bool* bValid, int32_t* Flag);
		void IsUnreadedSeasonPassFlagSub(ENewMarkContentType InCategory, class UObject* __WorldContext, bool* bResult);
		void IsUnreadedSeasonPassFlag(ENewMarkContentType InCategory, class UObject* __WorldContext, bool* bResult);
		void IsEnableSeasonPassRankPurchaseMenu(class UObject* __WorldContext, bool* bResult);
		void IsEnableSeasonPassPurchaseMenu(class UObject* __WorldContext, bool* bResult);
		void IsNearlyEndCurrentSeason(class UObject* __WorldContext, bool* bResult);
		void IsNearlyEndCurrentSeasonProgress(class UObject* __WorldContext, bool* bResult);
		void IsNearlyStartCurrentSeason(class UObject* __WorldContext, bool* bResult);
		class USBPlayerSeasonPassComponent* GetSeasonPassComponent(class UObject* __WorldContext);
		class USBPlayerSeasonPassComponent* GetSeasonPassComponentPure(class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
