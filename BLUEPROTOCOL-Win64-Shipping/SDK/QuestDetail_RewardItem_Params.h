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
	 * Function QuestDetail_RewardItem.QuestDetail_RewardItem_C.SetRewardContentByRewardId
	 */
	struct UQuestDetail_RewardItem_C_SetRewardContentByRewardId_Params
	{
	public:
		TArray<struct FRewardInfo>                                 RewardInfoList;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function QuestDetail_RewardItem.QuestDetail_RewardItem_C.SetCoomonRewardLabelString
	 */
	struct UQuestDetail_RewardItem_C_SetCoomonRewardLabelString_Params
	{
	public:
		class FString                                              InLabelString;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestDetail_RewardItem.QuestDetail_RewardItem_C.GetSpcifiedAdditionalReward
	 */
	struct UQuestDetail_RewardItem_C_GetSpcifiedAdditionalReward_Params
	{
	public:
		int32_t                                                    InQuestIndex;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InClearCount;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FRewardInfo>                                 OutRewardInfos;                                          // 0x0008(0x0010)  (Parm, OutParm)
		int32_t                                                    OutNextClearCount;                                       // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestDetail_RewardItem.QuestDetail_RewardItem_C.IsExistAdditionalReward
	 */
	struct UQuestDetail_RewardItem_C_IsExistAdditionalReward_Params
	{
	public:
		int32_t                                                    InQuestIndex;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Ret;                                                     // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_57VV[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function QuestDetail_RewardItem.QuestDetail_RewardItem_C.DebugDumpRewardInfo
	 */
	struct UQuestDetail_RewardItem_C_DebugDumpRewardInfo_Params
	{
	public:
		TArray<struct FRewardInfo>                                 InRewardInfo;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function QuestDetail_RewardItem.QuestDetail_RewardItem_C.IsEmptyList
	 */
	struct UQuestDetail_RewardItem_C_IsEmptyList_Params
	{
	public:
		bool                                                       bIsEmpty;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WMWO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function QuestDetail_RewardItem.QuestDetail_RewardItem_C.ShouldAddCommonRewardList
	 */
	struct UQuestDetail_RewardItem_C_ShouldAddCommonRewardList_Params
	{
	public:
		struct FRewardInfo                                         InRewardInfo;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function QuestDetail_RewardItem.QuestDetail_RewardItem_C.SetRewardContent
	 */
	struct UQuestDetail_RewardItem_C_SetRewardContent_Params
	{
	public:
		struct FQuestMasterData                                    InQuestMasterData;                                       // 0x0000(0x0118)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       bInChoiceRewardSelectable;                               // 0x0118(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bEnableHiddenReward;                                     // 0x0119(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RDO4[0x2];                                   // 0x011A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function QuestDetail_RewardItem.QuestDetail_RewardItem_C.SetTitle
	 */
	struct UQuestDetail_RewardItem_C_SetTitle_Params
	{
	public:
		int32_t                                                    InTitleText;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestDetail_RewardItem.QuestDetail_RewardItem_C.PreConstruct
	 */
	struct UQuestDetail_RewardItem_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function QuestDetail_RewardItem.QuestDetail_RewardItem_C.OnToggleChecked
	 */
	struct UQuestDetail_RewardItem_C_OnToggleChecked_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UWPS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UQuestRewardIcon_C*                                  CheckedItem;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestDetail_RewardItem.QuestDetail_RewardItem_C.ExecuteUbergraph_QuestDetail_RewardItem
	 */
	struct UQuestDetail_RewardItem_C_ExecuteUbergraph_QuestDetail_RewardItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestDetail_RewardItem.QuestDetail_RewardItem_C.OnToggleCheck_Deligate__DelegateSignature
	 */
	struct UQuestDetail_RewardItem_C_OnToggleCheck_Deligate__DelegateSignature_Params
	{
	public:
		bool                                                       Property;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PEMS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UQuestRewardIcon_C*                                  ClickedObject;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
