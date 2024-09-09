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
	 * Function QuestDetail_ReceiveCondition.QuestDetail_ReceiveCondition_C.SetConditionForNextMainQuest
	 */
	struct UQuestDetail_ReceiveCondition_C_SetConditionForNextMainQuest_Params
	{
	public:
		struct FSBQuestPreconditionUIInfo                          InInfo;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function QuestDetail_ReceiveCondition.QuestDetail_ReceiveCondition_C.SelectCautionText
	 */
	struct UQuestDetail_ReceiveCondition_C_SelectCautionText_Params
	{
	public:
		bool                                                       IsProceeding;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function QuestDetail_ReceiveCondition.QuestDetail_ReceiveCondition_C.SetCondition
	 */
	struct UQuestDetail_ReceiveCondition_C_SetCondition_Params
	{
	public:
		TArray<struct FSBQuestPreconditionUIInfo>                  InConditions;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function QuestDetail_ReceiveCondition.QuestDetail_ReceiveCondition_C.Construct
	 */
	struct UQuestDetail_ReceiveCondition_C_Construct_Params
	{	};

	/**
	 * Function QuestDetail_ReceiveCondition.QuestDetail_ReceiveCondition_C.ExecuteUbergraph_QuestDetail_ReceiveCondition
	 */
	struct UQuestDetail_ReceiveCondition_C_ExecuteUbergraph_QuestDetail_ReceiveCondition_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
