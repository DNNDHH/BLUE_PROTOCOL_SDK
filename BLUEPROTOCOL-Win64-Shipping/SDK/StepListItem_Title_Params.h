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
	 * Function StepListItem_Title.StepListItem_Title_C.OnSetIconWishList
	 */
	struct UStepListItem_Title_C_OnSetIconWishList_Params
	{
	public:
		EQuestStatus                                               InQuestStatus;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StepListItem_Title.StepListItem_Title_C.OnSetIconQuest
	 */
	struct UStepListItem_Title_C_OnSetIconQuest_Params
	{
	public:
		int32_t                                                    InQuestIndex;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StepListItem_Title.StepListItem_Title_C.SetTextDebugVisible
	 */
	struct UStepListItem_Title_C_SetTextDebugVisible_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StepListItem_Title.StepListItem_Title_C.SetTextDebug
	 */
	struct UStepListItem_Title_C_SetTextDebug_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
