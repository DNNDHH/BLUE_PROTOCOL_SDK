#pragma once

 

// Package: NotifyMessageItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "NotifyMessageItemType_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass NotifyMessageItem.NotifyMessageItem_C
// 0x0040 (0x02B8 - 0x0278)
class UNotifyMessageItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             TxtMessageLine1;                                   // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtMessageLine1L;                                  // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtMessageLine2Main;                               // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtMessageLine2Sub;                                // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtMessageScreenshot;                              // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher;                                    // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ENotifyMessageItemType                        Type;                                              // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_NotifyMessageItem(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetSwitcher(ENotifyMessageItemType Param_Type);
	void SetLine1(const class FText& InText);
	void SetLine1L(const class FText& InText);
	void SetLine2(const class FText& InTextMain, const class FText& InTextSub);
	void SetScreenshot(const class FText& InText);
	void SetAchievement(int32 InAchievementId);
	void SetAdventurerRank(ESBPlayerPassiveImagineSlotType Selection);
	void SetRecipe(ESBRecipeType Selection, int32 ID);
	void SetPartyMemberDead(const class FText& MemberName);
	void SetNetworkCafeLoginTimeNotification(int32 NetworkCafeTotalTimePlayedToday);
	void SetNetworkCafeRewardNotification(const struct FSBNetworkCafeReward& SBNetworkCafeReward, bool* bSucceed);
	void SetTutorialHelp(class FName TutorialId);
	void SetWarehouseAbility(const class FText& AbilityName, ESBWarehouseAbilityCharacterStatus Status);
	void SetWishList(const class FText& Param_Name, ESBWishListType Param_Type);
	void SetQuestAccepted(const int32 QuestIndex);
	void SetQuestCompleted(const int32 QuestIndex);
	void SetQuestUpdateProgress(const struct FAcceptedQuestInfo& AcceptedQuestInfo, bool bValidProgressUiInfo, const struct FSBQuestProgressItemUIInfo& SBQuestProgressItemUIInfo);
	void SetInterruptQuestAwake(class FName QuestID);
	void SetQuestSynopsisAdded(const int32 QuestIndex);
	void SetQuestUpdateSImple(const int32 QuestIndex);
	void SetAutoDeliveryQuestComplete(ESBSeasonPassQuestCycleType InCycleType, const class FString& InQuestName);
	void SetScreenshotFileName(const class FString& Filename);
	void SetRankingReward();
	void SetItemExpiry(int32 ItemId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NotifyMessageItem_C">();
	}
	static class UNotifyMessageItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNotifyMessageItem_C>();
	}
};
static_assert(alignof(UNotifyMessageItem_C) == 0x000008, "Wrong alignment on UNotifyMessageItem_C");
static_assert(sizeof(UNotifyMessageItem_C) == 0x0002B8, "Wrong size on UNotifyMessageItem_C");
static_assert(offsetof(UNotifyMessageItem_C, UberGraphFrame) == 0x000278, "Member 'UNotifyMessageItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UNotifyMessageItem_C, TxtMessageLine1) == 0x000280, "Member 'UNotifyMessageItem_C::TxtMessageLine1' has a wrong offset!");
static_assert(offsetof(UNotifyMessageItem_C, TxtMessageLine1L) == 0x000288, "Member 'UNotifyMessageItem_C::TxtMessageLine1L' has a wrong offset!");
static_assert(offsetof(UNotifyMessageItem_C, TxtMessageLine2Main) == 0x000290, "Member 'UNotifyMessageItem_C::TxtMessageLine2Main' has a wrong offset!");
static_assert(offsetof(UNotifyMessageItem_C, TxtMessageLine2Sub) == 0x000298, "Member 'UNotifyMessageItem_C::TxtMessageLine2Sub' has a wrong offset!");
static_assert(offsetof(UNotifyMessageItem_C, TxtMessageScreenshot) == 0x0002A0, "Member 'UNotifyMessageItem_C::TxtMessageScreenshot' has a wrong offset!");
static_assert(offsetof(UNotifyMessageItem_C, WidgetSwitcher) == 0x0002A8, "Member 'UNotifyMessageItem_C::WidgetSwitcher' has a wrong offset!");
static_assert(offsetof(UNotifyMessageItem_C, Type) == 0x0002B0, "Member 'UNotifyMessageItem_C::Type' has a wrong offset!");

}

