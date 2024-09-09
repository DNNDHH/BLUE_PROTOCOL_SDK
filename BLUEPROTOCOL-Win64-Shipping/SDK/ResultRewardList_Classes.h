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
	 * WidgetBlueprintGeneratedClass ResultRewardList.ResultRewardList_C
	 * Size -> 0x0070 (FullSize[0x02E8] - InheritedSize[0x0278])
	 */
	class UResultRewardList_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UGridPanel*                                          GridPanel_Reward;                                        // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<struct FQuestRewardIconInfo>                        QuestRewardIconInfo;                                     // 0x0288(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FOwnItemInfo>                                OwnItemInfo;                                             // 0x0298(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSBMasterRewardControl                              RewardControl;                                           // 0x02A8(0x0014) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		unsigned char                                              UnknownData_H9ZU[0x4];                                   // 0x02BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSBMasterGuildBonus>                         TeamBonus;                                               // 0x02C0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       IsBuffItemBonusLuno;                                     // 0x02D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsBuffItemBonusEXP;                                      // 0x02D1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsBuffItemBonusGC;                                       // 0x02D2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XVWI[0x5];                                   // 0x02D3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            InIsBuffTokenIDList;                                     // 0x02D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		bool IsIgnoreReward(const struct FSBMasterReward& SBMasterReward);
		bool IsGC(ESBRewardItemType InType, int32_t InId);
		bool GetTeamBonusPercentForRewardID(const class FName& InRewardId, int32_t* Percent);
		bool GetTeamBonusPercentForItemID(int32_t InItemID, int32_t* Percent);
		bool GetTeamBonusPercentForType(ESBRewardItemType InType, int32_t* Percent);
		void GetTeamBonus(TArray<struct FSBMasterGuildBonus>* TeamBonus);
		void SetTeamBonus(TArray<struct FSBMasterGuildBonus>* InTeamBonus);
		bool IsBuffBonusToken(int32_t ID);
		void IsBuffBonusGC(bool* Result);
		void IsBuffBonusEXP(bool* Result);
		void IsBuffBonusLuno(bool* Result);
		void SetBuffBonus(bool InIsBuffItemBonusLuno, bool InIsBuffItemBonusEXP, bool InIsBuffItemBonusGC, TArray<int32_t>* InIsBuffTokenIDList);
		bool IsRewardControlMaterialRate();
		bool IsRewardControlMaterialAmountAdd();
		bool IsRewardControlMaterialAmountMulti();
		bool IsRewardControlEXPMulti();
		bool IsRewardControlLunoMulti();
		void GetRewardControl(struct FSBMasterRewardControl* RewardControl);
		void SetRewardControl(const struct FSBMasterRewardControl& InRewardControl);
		void IsShowDetailWindow(bool* Result);
		void FindOwnItemInfo(const class FString& InUniqueId, bool* Result, struct FOwnItemInfo* ItemInfo);
		void GetOwnItemInfo(TArray<struct FOwnItemInfo>* OwnItemInfo);
		void SetOwnItemInfo(TArray<struct FOwnItemInfo>* OwnItemInfo);
		void Build();
		void SetOverLimit(const struct FSBOverLimit& SBOverLimit);
		void SetMedal(TArray<int32_t>* InId);
		void SetTokens(TArray<struct FSBRewardToken>* InTokenInfo);
		void SetToken(int32_t InId, int32_t InAmount);
		void SetRoseOrb(int32_t InAmount);
		void DebugDumpLotteryGroupsRewards(const class FName& RewardId, TArray<struct FSBMasterRewardLotteryGroupsRewards>* Rewards);
		void DebugDumpIntegerArray(TArray<int32_t>* inArray);
		void DebugDumpOwnItemInfo();
		void SetVisibleIconBG(bool IsVisible);
		void SetAmountColorType(const class FString& ColorName);
		void SetAlertIcon(bool IsYellow, bool IsVisible);
		int32_t GetIconNum();
		void DeleteIcon();
		void SetSkill(TArray<struct FSBSkillParam>* InSkillParam);
		void CreateIcon(bool bIsClickToShowDetail, class UQuestRewardIcon_C** OutIcon);
		void IsBonus(const struct FQuestRewardIconInfo& InInfo, bool* Result);
		void AddIcon();
		void IsMargeType(ESBRewardItemType Type, bool* Result);
		void ClearInfo();
		void AddInfo(const class FString& InUniqueId, int32_t InAmount, int32_t InId, int32_t InStorageNumber, ESBRewardItemType InType, int32_t IsTeamBonusPercent);
		void SetReward(TArray<class FName>* InReawrdIDList);
		void SetSkyCoin(int32_t InAmount);
		void SetItem(TArray<struct FOwnItemInfo>* InOwnItems);
		void SetGC(int32_t InAmount);
		void SetExp(int32_t InAmount);
		void SetMoney(int32_t InAmount);
		void Clear();
		void Construct();
		void ExecuteUbergraph_ResultRewardList(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
