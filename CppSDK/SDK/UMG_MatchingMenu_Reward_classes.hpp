#pragma once

 

// Package: UMG_MatchingMenu_Reward

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C
// 0x00A0 (0x0318 - 0x0278)
class UUMG_MatchingMenu_Reward_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           CanvasPanelRewardPlus;                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageRank;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageRewardPlus;                                   // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    RuntimeTextRewardNormalFirst;                      // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    RuntimeTextRewardPlus;                             // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    RuntimeTextTimeScore;                              // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitcherCaption;                                   // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBDateTimeTextBlock*                   Txt_LimitTerm;                                     // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_LimitTermFirstName;                            // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUniformGridPanel*                      UniformGridPanelReward;                            // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBoxRewardTerm;                             // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBoxRewardTimeScore;                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ESBRewardSetType                              RewardSetType;                                     // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_8653[0x7];                                     // 0x02E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 GameMode;                                          // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	ESBDungeonEvaluation                          Evaluation;                                        // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_8654[0x7];                                     // 0x02F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnClickIcon;                                       // 0x0300(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FName                                   MapId;                                             // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnClickIcon__DelegateSignature(class UQuestRewardIcon_C* Sender);
	void ExecuteUbergraph_UMG_MatchingMenu_Reward(int32 EntryPoint);
	void OnClickIconEvent(class UQuestRewardIcon_C* Sender);
	void Setup(const class FString& Param_GameMode, class FName Param_MapId);
	void SetReward(class FName RewardInfo, int32 FloorNum, int32 FloorMax, const struct FSBRewardBoostMissionMasterData& RewardBoostData, bool RewardBoostIsValid);
	void SetReward2(class FName RewardInfo, int32 FloorNum, int32 FloorMax, const struct FSBRewardBoostMissionMasterData& RewardBoostData, bool RewardBoostIsValid);
	void SetRewardRanked(ESBRewardSetType Param_RewardSetType, const struct FSBRewardBoostMissionMasterData& RewardBoostData, bool RewardBoostIsValid);
	void SetRewardTower(const struct FSBRewardBoostMissionMasterData& RewardBoostData, bool RewardBoostIsValid);
	void SetCaption();
	void SetClearLineTime();
	void SetClearLineScore();
	void Clear();
	void GetMasterDataDungeonRankedReward(bool* bExist, struct FSBMasterDungeonRankedReward* MasterDataDungeonRankedReward);
	void ConvertMaximumValueToTime(int32 MaximumValue, class FText* Text);
	void GetRewardAmount(const struct FSBMasterRewardWithAmountRange& MasterRewardWithAmountRange, const struct FSBRewardBoostMissionMasterData& RewardBoostData, bool RewardBoostIsValid, int32* AmountFixed, int32* AmountLottery, bool* AmountChanged);
	void GetAmountByRewardBoost(const struct FSBMasterRewardWithAmountRange& MasterRewardWithAmountRange, const struct FSBRewardBoostMissionMasterData& RewardBoostData, bool RewardBoostIsValid, int32* AmountFixed, int32* AmountLottery, bool* AmountChanged);
	void GetRewardAmountByItem(const struct FSBMasterRewardWithAmountRange& MasterRewardWithAmountRange, int32* AmountFixed, int32* AmountLottery, bool* AmountChanged);
	void GetRewardAmountByNetworkCafe(const struct FSBMasterRewardWithAmountRange& MasterRewardWithAmountRange, int32* AmountFixed, int32* AmountLottery, bool* AmountChanged);
	void GetRewardAmountByLiquidMemory(const struct FSBMasterRewardWithAmountRange& MasterRewardWithAmountRange, int32* AmountFixed, int32* AmountLottery, bool* AmountChanged);
	void GetRewardList(class FName RewardInfo, TArray<struct FSBMasterRewardWithAmountRange>* OutRewardList);
	void ShouldTheFirstRewardBeRemoved_All(bool* ShouldBeRemoved);
	void ShouldTheFirstRewardBeRemoved_Individually(int32 ClearLine, bool* ShouldBeRemoved);
	void ShouldRankedRewardBeAdded(ESBRewardSetType Param_RewardSetType, const struct FSBMasterDungeonRankedReward& MasterDungeonRankedReward, bool* ShouldBeAdded);
	void SetTerm(class FName RewardId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_MatchingMenu_Reward_C">();
	}
	static class UUMG_MatchingMenu_Reward_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_MatchingMenu_Reward_C>();
	}
};
static_assert(alignof(UUMG_MatchingMenu_Reward_C) == 0x000008, "Wrong alignment on UUMG_MatchingMenu_Reward_C");
static_assert(sizeof(UUMG_MatchingMenu_Reward_C) == 0x000318, "Wrong size on UUMG_MatchingMenu_Reward_C");
static_assert(offsetof(UUMG_MatchingMenu_Reward_C, UberGraphFrame) == 0x000278, "Member 'UUMG_MatchingMenu_Reward_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Reward_C, CanvasPanelRewardPlus) == 0x000280, "Member 'UUMG_MatchingMenu_Reward_C::CanvasPanelRewardPlus' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Reward_C, ImageRank) == 0x000288, "Member 'UUMG_MatchingMenu_Reward_C::ImageRank' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Reward_C, ImageRewardPlus) == 0x000290, "Member 'UUMG_MatchingMenu_Reward_C::ImageRewardPlus' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Reward_C, RuntimeTextRewardNormalFirst) == 0x000298, "Member 'UUMG_MatchingMenu_Reward_C::RuntimeTextRewardNormalFirst' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Reward_C, RuntimeTextRewardPlus) == 0x0002A0, "Member 'UUMG_MatchingMenu_Reward_C::RuntimeTextRewardPlus' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Reward_C, RuntimeTextTimeScore) == 0x0002A8, "Member 'UUMG_MatchingMenu_Reward_C::RuntimeTextTimeScore' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Reward_C, SwitcherCaption) == 0x0002B0, "Member 'UUMG_MatchingMenu_Reward_C::SwitcherCaption' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Reward_C, Txt_LimitTerm) == 0x0002B8, "Member 'UUMG_MatchingMenu_Reward_C::Txt_LimitTerm' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Reward_C, Txt_LimitTermFirstName) == 0x0002C0, "Member 'UUMG_MatchingMenu_Reward_C::Txt_LimitTermFirstName' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Reward_C, UniformGridPanelReward) == 0x0002C8, "Member 'UUMG_MatchingMenu_Reward_C::UniformGridPanelReward' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Reward_C, VerticalBoxRewardTerm) == 0x0002D0, "Member 'UUMG_MatchingMenu_Reward_C::VerticalBoxRewardTerm' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Reward_C, VerticalBoxRewardTimeScore) == 0x0002D8, "Member 'UUMG_MatchingMenu_Reward_C::VerticalBoxRewardTimeScore' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Reward_C, RewardSetType) == 0x0002E0, "Member 'UUMG_MatchingMenu_Reward_C::RewardSetType' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Reward_C, GameMode) == 0x0002E8, "Member 'UUMG_MatchingMenu_Reward_C::GameMode' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Reward_C, Evaluation) == 0x0002F8, "Member 'UUMG_MatchingMenu_Reward_C::Evaluation' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Reward_C, OnClickIcon) == 0x000300, "Member 'UUMG_MatchingMenu_Reward_C::OnClickIcon' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Reward_C, MapId) == 0x000310, "Member 'UUMG_MatchingMenu_Reward_C::MapId' has a wrong offset!");

}

