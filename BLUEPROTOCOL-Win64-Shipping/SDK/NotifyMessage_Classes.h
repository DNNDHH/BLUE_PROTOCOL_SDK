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
	 * WidgetBlueprintGeneratedClass NotifyMessage.NotifyMessage_C
	 * Size -> 0x0020 (FullSize[0x0298] - InheritedSize[0x0278])
	 */
	class UNotifyMessage_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UVerticalBox*                                        MessageList;                                             // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<struct FSBQuestProgressItemUIInfo>                  QuestProgressDiffUiInfo;                                 // 0x0288(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void OnQuestJingleCancel(class UObject* Param);
		void OnQuestJingleComplete(class UObject* Param);
		void OnQuestJingleUpdate2(TArray<int32_t> InputPin);
		void OnQuestJingleUpdate(class UObject* Param);
		void OnQuestJingleAccepted(class UObject* Param);
		void TermQuestJingle();
		void InitQuestJingle();
		void BindQuestJingleAccept();
		void BindQuestJingleUpdate();
		void BindQuestJingleClear();
		void BindQuestJingleCancel();
		void OnReceiveAcceptedQuestEvent(class UObject* Sender, class UObject* Param);
		void OnReceiveUpdateQuestProgressEvent(class UObject* Sender, class UObject* Param);
		void OnReceiveCompleteQuestEvent(class UObject* Sender, class UObject* Param);
		void OnReceiveCancelQuest(class UObject* Sender, class UObject* Param);
		void BindQuestJingleUpdate2();
		void UnbindQuestJingleUpdate2();
		void OnUpdatedQuestsJoin(TArray<int32_t> QuestIndexes);
		void UnbindQuestJingleAccept();
		void UnbindQuestJingleClear();
		void UnbindQuestJingleUpdate();
		void UnbindQuestJingleCancel();
		void Construct();
		void AddQuestAccepted(int32_t QuestIndex);
		void AddNotifyMessageItem(class UUserWidget* Widget, class UAkAudioEvent* Sound, bool bIsNeedSound);
		void AddQuestCompleted(int32_t QuestIndex);
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void AddQuestUpdateProgress(const struct FAcceptedQuestInfo& PrevAcceptedQuestInfo, const struct FAcceptedQuestInfo& AfterAcceptedQuestInfo);
		void AddInterruptQuestAwake(const class FName& QuestID);
		void AddAchievementGained(int32_t InAchievementId);
		void AddTutorialHelp(const class FName& InTutorialHelp);
		void AddAdventurerRank(ESBPlayerPassiveImagineSlotType Slot);
		void AddQuestSynopsis(int32_t QuestIndex);
		void AddQuestUpdateSimple(int32_t QuestIndex);
		void AddWishlist(const class FText& Name, ESBWishListType Type);
		void AddAutoDeliveryQuestComplete(const class FString& InQuestName, ESBSeasonPassQuestCycleType InCycleType);
		void AddWarehouseAbilityUpdated(const class FText& AbilityName, ESBWarehouseAbilityCharacterStatus Status);
		void AddRecipeUpdated(ESBRecipeType RecipeType, int32_t ID);
		void AddNetworkCafePlayTimeNotification(int32_t NetworkCafeTotalTimePlayedToday);
		void AddLoginBonusNotifyMessage(const class FText& Text);
		void AddNetworkCafeRewardNotification(const struct FSBNetworkCafeReward& InNetwordCafeReward);
		void AddMemberDead(const class FText& MemberName);
		void Destruct();
		void AddMailAcceptLimitNotification();
		void AddRankingRewardNotifyMessage();
		void AddLine1NotifyMessage(const class FText& InText);
		void AddLine1LNotifyMessage(const class FText& InText);
		void AddLine2NotifyMessage(const class FText& InTextMain, const class FText& InTextSub);
		void AddItemExpiryNotifyMessage(int32_t ItemId);
		void ExecuteUbergraph_NotifyMessage(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
