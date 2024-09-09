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
	 * Function StepListItem_Quest.StepListItem_Quest_C.OnSetNFTTitle
	 */
	struct UStepListItem_Quest_C_OnSetNFTTitle_Params
	{	};

	/**
	 * Function StepListItem_Quest.StepListItem_Quest_C.OnSetInterruptQuestTitle
	 */
	struct UStepListItem_Quest_C_OnSetInterruptQuestTitle_Params
	{	};

	/**
	 * Function StepListItem_Quest.StepListItem_Quest_C.OnSetQuestTitle
	 */
	struct UStepListItem_Quest_C_OnSetQuestTitle_Params
	{
	public:
		struct FQuestMasterData                                    QuestMasterData;                                         // 0x0000(0x0118)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function StepListItem_Quest.StepListItem_Quest_C.GetTitle
	 */
	struct UStepListItem_Quest_C_GetTitle_Params
	{
	public:
		class UStepListItem_Title_C*                               AsStepListItemTitle;                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
