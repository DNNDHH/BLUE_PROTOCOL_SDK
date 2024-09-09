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
	 * WidgetBlueprintGeneratedClass NotifyMessageItem.NotifyMessageItem_C
	 * Size -> 0x0039 (FullSize[0x02B1] - InheritedSize[0x0278])
	 */
	class UNotifyMessageItem_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextBlock*                                          TxtMessageLine1;                                         // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TxtMessageLine1L;                                        // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TxtMessageLine2Main;                                     // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 TxtMessageLine2Sub;                                      // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TxtMessageScreenshot;                                    // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WidgetSwitcher;                                          // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		ENotifyMessageItemType                                     Type;                                                    // 0x02B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetItemExpiry(int32_t ItemId);
		void SetRankingReward();
		void SetScreenshotFileName(const class FString& Filename);
		void SetAutoDeliveryQuestComplete(ESBSeasonPassQuestCycleType InCycleType, const class FString& InQuestName);
		void SetQuestUpdateSImple(int32_t QuestIndex);
		void SetQuestSynopsisAdded(int32_t QuestIndex);
		void SetInterruptQuestAwake(const class FName& QuestID);
		void SetQuestUpdateProgress(const struct FAcceptedQuestInfo& AcceptedQuestInfo, bool bValidProgressUiInfo, const struct FSBQuestProgressItemUIInfo& SBQuestProgressItemUIInfo);
		void SetQuestCompleted(int32_t QuestIndex);
		void SetQuestAccepted(int32_t QuestIndex);
		void SetWishList(const class FText& Name, ESBWishListType Type);
		void SetWarehouseAbility(const class FText& AbilityName, ESBWarehouseAbilityCharacterStatus Status);
		void SetTutorialHelp(const class FName& TutorialId);
		void SetNetworkCafeRewardNotification(const struct FSBNetworkCafeReward& SBNetworkCafeReward, bool* bSucceed);
		void SetNetworkCafeLoginTimeNotification(int32_t NetworkCafeTotalTimePlayedToday);
		void SetPartyMemberDead(const class FText& MemberName);
		void SetRecipe(ESBRecipeType Selection, int32_t ID);
		void SetAdventurerRank(ESBPlayerPassiveImagineSlotType Selection);
		void SetAchievement(int32_t InAchievementId);
		void SetScreenshot(const class FText& InText);
		void SetLine2(const class FText& InTextMain, const class FText& InTextSub);
		void SetLine1L(const class FText& InText);
		void SetLine1(const class FText& InText);
		void SetSwitcher(ENotifyMessageItemType Type);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_NotifyMessageItem(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
