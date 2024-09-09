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
	 * WidgetBlueprintGeneratedClass QuestDetail_RewardItem.QuestDetail_RewardItem_C
	 * Size -> 0x0040 (FullSize[0x02B8] - InheritedSize[0x0278])
	 */
	class UQuestDetail_RewardItem_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UQuestDetail_RewardList_C*                           AdditionalRewardList;                                    // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UQuestDetail_RewardList_C*                           ChoiceRewardList;                                        // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UQuestDetail_RewardList_C*                           CommonRewardList;                                        // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 Label_Title;                                             // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    TitleTextId;                                             // 0x02A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_9KIQ[0x4];                                   // 0x02A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnToggleCheck_Deligate;                                  // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void SetRewardContentByRewardId(TArray<struct FRewardInfo>* RewardInfoList);
		void SetCoomonRewardLabelString(const class FString& InLabelString);
		void GetSpcifiedAdditionalReward(int32_t InQuestIndex, int32_t InClearCount, TArray<struct FRewardInfo>* OutRewardInfos, int32_t* OutNextClearCount);
		void IsExistAdditionalReward(int32_t InQuestIndex, bool* Ret);
		void DebugDumpRewardInfo(TArray<struct FRewardInfo>* InRewardInfo);
		void IsEmptyList(bool* bIsEmpty);
		bool ShouldAddCommonRewardList(struct FRewardInfo* InRewardInfo);
		void SetRewardContent(struct FQuestMasterData* InQuestMasterData, bool bInChoiceRewardSelectable, bool bEnableHiddenReward);
		void SetTitle(int32_t InTitleText);
		void PreConstruct(bool IsDesignTime);
		void OnToggleChecked(bool IsChecked, class UQuestRewardIcon_C* CheckedItem);
		void ExecuteUbergraph_QuestDetail_RewardItem(int32_t EntryPoint);
		void OnToggleCheck_Deligate__DelegateSignature(bool Property, class UQuestRewardIcon_C* ClickedObject);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
