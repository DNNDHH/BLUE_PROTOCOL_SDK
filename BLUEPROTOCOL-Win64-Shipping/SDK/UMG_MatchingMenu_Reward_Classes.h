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
	 * WidgetBlueprintGeneratedClass UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C
	 * Size -> 0x00A8 (FullSize[0x0320] - InheritedSize[0x0278])
	 */
	class UUMG_MatchingMenu_Reward_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCanvasPanel*                                        CanvasPanelRewardPlus;                                   // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ImageRank;                                               // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ImageRewardPlus;                                         // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 RuntimeTextRewardNormalFirst;                            // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 RuntimeTextRewardPlus;                                   // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 RuntimeTextTimeScore;                                    // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 RuntimeTextTimeScore_2;                                  // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     SwitcherCaption;                                         // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBDateTimeTextBlock*                                Txt_LimitTerm;                                           // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 Txt_LimitTermFirstName;                                  // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUniformGridPanel*                                   UniformGridPanelReward;                                  // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VerticalBoxRewardTerm;                                   // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VerticalBoxRewardTimeScore;                              // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		ESBRewardSetType                                           RewardSetType;                                           // 0x02E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_542O[0x7];                                   // 0x02E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              GameMode;                                                // 0x02F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash
		ESBDungeonEvaluation                                       Evaluation;                                              // 0x0300(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_LEGP[0x7];                                   // 0x0301(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnClickIcon;                                             // 0x0308(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FName                                                MapId;                                                   // 0x0318(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetTerm(const class FName& RewardId);
		void ShouldRankedRewardBeAdded(ESBRewardSetType RewardSetType, const struct FSBMasterDungeonRankedReward& MasterDungeonRankedReward, bool* ShouldBeAdded);
		void ShouldTheFirstRewardBeRemoved_Individually(int32_t ClearLine, bool* ShouldBeRemoved);
		void ShouldTheFirstRewardBeRemoved_All(bool* ShouldBeRemoved);
		void GetRewardList(const class FName& RewardInfo, TArray<struct FSBMasterRewardWithAmountRange>* OutRewardList);
		void GetRewardAmountByLiquidMemory(const struct FSBMasterRewardWithAmountRange& MasterRewardWithAmountRange, int32_t* AmountFixed, int32_t* AmountLottery, bool* AmountChanged);
		void GetRewardAmountByNetworkCafe(const struct FSBMasterRewardWithAmountRange& MasterRewardWithAmountRange, int32_t* AmountFixed, int32_t* AmountLottery, bool* AmountChanged);
		void GetRewardAmountByItem(const struct FSBMasterRewardWithAmountRange& MasterRewardWithAmountRange, int32_t* AmountFixed, int32_t* AmountLottery, bool* AmountChanged);
		void GetAmountByRewardBoost(const struct FSBMasterRewardWithAmountRange& MasterRewardWithAmountRange, const struct FSBRewardBoostMissionMasterData& RewardBoostData, bool RewardBoostIsValid, int32_t* AmountFixed, int32_t* AmountLottery, bool* AmountChanged);
		void GetRewardAmount(const struct FSBMasterRewardWithAmountRange& MasterRewardWithAmountRange, const struct FSBRewardBoostMissionMasterData& RewardBoostData, bool RewardBoostIsValid, int32_t* AmountFixed, int32_t* AmountLottery, bool* AmountChanged);
		void ConvertMaximumValueToTime(int32_t MaximumValue, class FText* Text);
		void GetMasterDataDungeonRankedReward(bool* bExist, struct FSBMasterDungeonRankedReward* MasterDataDungeonRankedReward);
		void Clear();
		void SetClearLineScore();
		void SetClearLineTime();
		void SetCaption();
		void SetRewardTower(const struct FSBRewardBoostMissionMasterData& RewardBoostData, bool RewardBoostIsValid);
		void SetRewardRanked(ESBRewardSetType RewardSetType, const struct FSBRewardBoostMissionMasterData& RewardBoostData, bool RewardBoostIsValid);
		void SetReward2(const class FName& RewardInfo, int32_t FloorNum, int32_t FloorMax, const struct FSBRewardBoostMissionMasterData& RewardBoostData, bool RewardBoostIsValid);
		void SetReward(const class FName& RewardInfo, int32_t FloorNum, int32_t FloorMax, const struct FSBRewardBoostMissionMasterData& RewardBoostData, bool RewardBoostIsValid);
		void Setup(const class FString& GameMode, const class FName& MapId);
		void OnClickIconEvent(class UQuestRewardIcon_C* Sender);
		void ExecuteUbergraph_UMG_MatchingMenu_Reward(int32_t EntryPoint);
		void OnClickIcon__DelegateSignature(class UQuestRewardIcon_C* Sender);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
