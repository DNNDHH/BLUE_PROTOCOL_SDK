#pragma once

 

// Package: NotifyMessage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass NotifyMessage.NotifyMessage_C
// 0x0020 (0x0298 - 0x0278)
class UNotifyMessage_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                           MessageList;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FSBQuestProgressItemUIInfo>     QuestProgressDiffUiInfo;                           // 0x0288(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_NotifyMessage(int32 EntryPoint);
	void AddItemExpiryNotifyMessage(int32 ItemId);
	void AddLine2NotifyMessage(const class FText& InTextMain, const class FText& InTextSub);
	void AddLine1LNotifyMessage(const class FText& InText);
	void AddLine1NotifyMessage(const class FText& InText);
	void AddRankingRewardNotifyMessage();
	void AddMailAcceptLimitNotification();
	void Destruct();
	void AddMemberDead(const class FText& MemberName);
	void AddNetworkCafeRewardNotification(const struct FSBNetworkCafeReward& InNetwordCafeReward);
	void AddLoginBonusNotifyMessage(const class FText& Text);
	void AddNetworkCafePlayTimeNotification(int32 NetworkCafeTotalTimePlayedToday);
	void AddRecipeUpdated(ESBRecipeType RecipeType, int32 ID);
	void AddWarehouseAbilityUpdated(const class FText& AbilityName, ESBWarehouseAbilityCharacterStatus Status);
	void AddAutoDeliveryQuestComplete(const class FString& InQuestName, ESBSeasonPassQuestCycleType InCycleType);
	void AddWishlist(const class FText& Param_Name, ESBWishListType Type);
	void AddQuestUpdateSimple(int32 QuestIndex);
	void AddQuestSynopsis(int32 QuestIndex);
	void AddAdventurerRank(ESBPlayerPassiveImagineSlotType Param_Slot);
	void AddTutorialHelp(class FName InTutorialHelp);
	void AddAchievementGained(int32 InAchievementId);
	void AddInterruptQuestAwake(class FName QuestID);
	void AddQuestUpdateProgress(const struct FAcceptedQuestInfo& PrevAcceptedQuestInfo, const struct FAcceptedQuestInfo& AfterAcceptedQuestInfo);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void AddQuestCompleted(int32 QuestIndex);
	void AddNotifyMessageItem(class UUserWidget* Widget, class UAkAudioEvent* Sound, bool bIsNeedSound);
	void AddQuestAccepted(int32 QuestIndex);
	void Construct();
	void UnbindQuestJingleCancel();
	void UnbindQuestJingleUpdate();
	void UnbindQuestJingleClear();
	void UnbindQuestJingleAccept();
	void OnUpdatedQuestsJoin(const TArray<int32>& QuestIndexes);
	void UnbindQuestJingleUpdate2();
	void BindQuestJingleUpdate2();
	void OnReceiveCancelQuest(class UObject* Sender, class UObject* Param);
	void OnReceiveCompleteQuestEvent(class UObject* Sender, class UObject* Param);
	void OnReceiveUpdateQuestProgressEvent(class UObject* Sender, class UObject* Param);
	void OnReceiveAcceptedQuestEvent(class UObject* Sender, class UObject* Param);
	void BindQuestJingleCancel();
	void BindQuestJingleClear();
	void BindQuestJingleUpdate();
	void BindQuestJingleAccept();
	void InitQuestJingle();
	void TermQuestJingle();
	void OnQuestJingleAccepted(class UObject* Param);
	void OnQuestJingleUpdate(class UObject* Param);
	void OnQuestJingleUpdate2(const TArray<int32>& InputPin);
	void OnQuestJingleComplete(class UObject* Param);
	void OnQuestJingleCancel(class UObject* Param);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NotifyMessage_C">();
	}
	static class UNotifyMessage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNotifyMessage_C>();
	}
};
static_assert(alignof(UNotifyMessage_C) == 0x000008, "Wrong alignment on UNotifyMessage_C");
static_assert(sizeof(UNotifyMessage_C) == 0x000298, "Wrong size on UNotifyMessage_C");
static_assert(offsetof(UNotifyMessage_C, UberGraphFrame) == 0x000278, "Member 'UNotifyMessage_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UNotifyMessage_C, MessageList) == 0x000280, "Member 'UNotifyMessage_C::MessageList' has a wrong offset!");
static_assert(offsetof(UNotifyMessage_C, QuestProgressDiffUiInfo) == 0x000288, "Member 'UNotifyMessage_C::QuestProgressDiffUiInfo' has a wrong offset!");

}

