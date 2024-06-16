#pragma once

 

// Package: ResultRewardList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "QuestRewardIconInfo_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ResultRewardList.ResultRewardList_C
// 0x0060 (0x02D8 - 0x0278)
class UResultRewardList_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UGridPanel*                             GridPanel_Reward;                                  // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FQuestRewardIconInfo>           QuestRewardIconInfo;                               // 0x0288(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FOwnItemInfo>                   OwnItemInfo;                                       // 0x0298(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSBMasterRewardControl                 RewardControl;                                     // 0x02A8(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	uint8                                         Pad_96D1[0x4];                                     // 0x02BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBMasterGuildBonus>            TeamBonus;                                         // 0x02C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsBuffItemBonusLuno;                               // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsBuffItemBonusEXP;                                // 0x02D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsBuffItemBonusGC;                                 // 0x02D2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_ResultRewardList(int32 EntryPoint);
	void Construct();
	void Clear();
	void SetMoney(int32 InAmount);
	void SetExp(int32 InAmount);
	void SetGC(int32 InAmount);
	void SetItem(TArray<struct FOwnItemInfo>& InOwnItems);
	void SetSkyCoin(int32 InAmount);
	void SetReward(TArray<class FName>& InReawrdIDList);
	void AddInfo(const class FString& InUniqueId, int32 InAmount, int32 InId, int32 InStorageNumber, ESBRewardItemType InType, int32 IsTeamBonusPercent);
	void ClearInfo();
	void AddIcon();
	void CreateIcon(bool bIsClickToShowDetail, class UQuestRewardIcon_C** OutIcon);
	void SetSKill(TArray<struct FSBSkillParam>& InSkillParam);
	void DeleteIcon();
	void SetAlertIcon(bool IsYellow, bool Param_IsVisible);
	void SetAmountColorType(const class FString& ColorName);
	void SetVisibleIconBG(bool Param_IsVisible);
	void Debug_Dump_Own_Item_Info();
	void Debug_Dump_Integer_Array(TArray<int32>& InArray);
	void Debug_Dump_Lottery_Groups_Rewards(class FName RewardId, TArray<struct FSBMasterRewardLotteryGroupsRewards>& Rewards);
	void SetRoseOrb(int32 InAmount);
	void SetToken(int32 InId, int32 InAmount);
	void SetTokens(TArray<struct FSBRewardToken>& InTokenInfo);
	void SetMedal(TArray<int32>& InId);
	void SetOverLimit(const struct FSBOverLimit& SBOverLimit);
	void Build();
	void SetOwnItemInfo(TArray<struct FOwnItemInfo>& Param_OwnItemInfo);
	void SetRewardControl(const struct FSBMasterRewardControl& InRewardControl);
	void SetBuffBonus(bool IsBuffItemBonusLuno_, bool IsBuffItemBonusEXP_, bool IsBuffItemBonusGC_);
	void SetTeamBonus(TArray<struct FSBMasterGuildBonus>& InTeamBonus);

	void IsMargeType(ESBRewardItemType Type, bool* Result) const;
	void IsBonus(const struct FQuestRewardIconInfo& InInfo, bool* Result) const;
	int32 GetIconNum() const;
	void GetOwnItemInfo(TArray<struct FOwnItemInfo>* Param_OwnItemInfo) const;
	void FindOwnItemInfo(const class FString& InUniqueId, bool* Result, struct FOwnItemInfo* ItemInfo) const;
	void IsShowDetailWindow(bool* Result) const;
	void GetRewardControl(struct FSBMasterRewardControl* Param_RewardControl) const;
	bool IsRewardControlLunoMulti() const;
	bool IsRewardControlEXPMulti() const;
	bool IsRewardControlMaterialAmountMulti() const;
	bool IsRewardControlMaterialAmountAdd() const;
	bool IsRewardControlMaterialRate() const;
	void IsBuffLunoBonus(bool* Result) const;
	void IsBuffEXPBonus(bool* Result) const;
	void IsBuffGCBonus(bool* Result) const;
	void GetTeamBonus(TArray<struct FSBMasterGuildBonus>* Param_TeamBonus) const;
	bool GetTeamBonusPercentForType(ESBRewardItemType InType, int32* Percent) const;
	bool GetTeamBonusPercentForItemID(const int32& InItemID, int32* Percent) const;
	bool GetTeamBonusPercentForRewardID(const class FName& InRewardId, int32* Percent) const;
	bool IsGC(ESBRewardItemType InType, int32 InId) const;
	bool IsIgnoreReward(const struct FSBMasterReward& SBMasterReward) const;
	void ConvertItemTypeToRewardType(EItemType ItemType, ESBRewardItemType* RewardItemType) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ResultRewardList_C">();
	}
	static class UResultRewardList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UResultRewardList_C>();
	}
};
static_assert(alignof(UResultRewardList_C) == 0x000008, "Wrong alignment on UResultRewardList_C");
static_assert(sizeof(UResultRewardList_C) == 0x0002D8, "Wrong size on UResultRewardList_C");
static_assert(offsetof(UResultRewardList_C, UberGraphFrame) == 0x000278, "Member 'UResultRewardList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UResultRewardList_C, GridPanel_Reward) == 0x000280, "Member 'UResultRewardList_C::GridPanel_Reward' has a wrong offset!");
static_assert(offsetof(UResultRewardList_C, QuestRewardIconInfo) == 0x000288, "Member 'UResultRewardList_C::QuestRewardIconInfo' has a wrong offset!");
static_assert(offsetof(UResultRewardList_C, OwnItemInfo) == 0x000298, "Member 'UResultRewardList_C::OwnItemInfo' has a wrong offset!");
static_assert(offsetof(UResultRewardList_C, RewardControl) == 0x0002A8, "Member 'UResultRewardList_C::RewardControl' has a wrong offset!");
static_assert(offsetof(UResultRewardList_C, TeamBonus) == 0x0002C0, "Member 'UResultRewardList_C::TeamBonus' has a wrong offset!");
static_assert(offsetof(UResultRewardList_C, IsBuffItemBonusLuno) == 0x0002D0, "Member 'UResultRewardList_C::IsBuffItemBonusLuno' has a wrong offset!");
static_assert(offsetof(UResultRewardList_C, IsBuffItemBonusEXP) == 0x0002D1, "Member 'UResultRewardList_C::IsBuffItemBonusEXP' has a wrong offset!");
static_assert(offsetof(UResultRewardList_C, IsBuffItemBonusGC) == 0x0002D2, "Member 'UResultRewardList_C::IsBuffItemBonusGC' has a wrong offset!");

}

