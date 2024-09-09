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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function QuestDetail_RewardList.QuestDetail_RewardList_C.SetRewardTypeName
	 */
	struct UQuestDetail_RewardList_C_SetRewardTypeName_Params
	{
	public:
		class FString                                              InLabelString;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestDetail_RewardList.QuestDetail_RewardList_C.SetAdditionalRewardNotice
	 */
	struct UQuestDetail_RewardList_C_SetAdditionalRewardNotice_Params
	{
	public:
		int32_t                                                    InClearCount;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestDetail_RewardList.QuestDetail_RewardList_C.SetAdditionalRewardCompleted
	 */
	struct UQuestDetail_RewardList_C_SetAdditionalRewardCompleted_Params
	{	};

	/**
	 * Function QuestDetail_RewardList.QuestDetail_RewardList_C.SetQuestIndex
	 */
	struct UQuestDetail_RewardList_C_SetQuestIndex_Params
	{
	public:
		int32_t                                                    InQuestIndex;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestDetail_RewardList.QuestDetail_RewardList_C.SetEnableAdditionalButton
	 */
	struct UQuestDetail_RewardList_C_SetEnableAdditionalButton_Params
	{
	public:
		bool                                                       Flag;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function QuestDetail_RewardList.QuestDetail_RewardList_C.GetRewardNum
	 */
	struct UQuestDetail_RewardList_C_GetRewardNum_Params
	{
	public:
		int32_t                                                    Num;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestDetail_RewardList.QuestDetail_RewardList_C.ClearReward
	 */
	struct UQuestDetail_RewardList_C_ClearReward_Params
	{	};

	/**
	 * Function QuestDetail_RewardList.QuestDetail_RewardList_C.AddReward
	 */
	struct UQuestDetail_RewardList_C_AddReward_Params
	{
	public:
		struct FRewardInfo                                         InRewardInfo;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		bool                                                       bInSelectRewardSelectable;                               // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bEnableHiddenReward;                                     // 0x0019(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZFZL[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUserWidget*                                         OutWidget;                                               // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestDetail_RewardList.QuestDetail_RewardList_C.PreConstruct
	 */
	struct UQuestDetail_RewardList_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function QuestDetail_RewardList.QuestDetail_RewardList_C.BndEvt__QuestDetail_RewardList_AdditionalRewardBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UQuestDetail_RewardList_C_BndEvt__QuestDetail_RewardList_AdditionalRewardBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function QuestDetail_RewardList.QuestDetail_RewardList_C.OnClosedAdditionalRewards
	 */
	struct UQuestDetail_RewardList_C_OnClosedAdditionalRewards_Params
	{	};

	/**
	 * Function QuestDetail_RewardList.QuestDetail_RewardList_C.ExecuteUbergraph_QuestDetail_RewardList
	 */
	struct UQuestDetail_RewardList_C_ExecuteUbergraph_QuestDetail_RewardList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
