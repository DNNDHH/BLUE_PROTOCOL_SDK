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
	 * Function QuestDetail_DetaiDescriptionlItem.QuestDetail_DetaiDescriptionlItem_C.SetTextContent
	 */
	struct UQuestDetail_DetaiDescriptionlItem_C_SetTextContent_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function QuestDetail_DetaiDescriptionlItem.QuestDetail_DetaiDescriptionlItem_C.SetTitle
	 */
	struct UQuestDetail_DetaiDescriptionlItem_C_SetTitle_Params
	{
	public:
		int32_t                                                    InTitleText;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestDetail_DetaiDescriptionlItem.QuestDetail_DetaiDescriptionlItem_C.PreConstruct
	 */
	struct UQuestDetail_DetaiDescriptionlItem_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function QuestDetail_DetaiDescriptionlItem.QuestDetail_DetaiDescriptionlItem_C.ExecuteUbergraph_QuestDetail_DetaiDescriptionlItem
	 */
	struct UQuestDetail_DetaiDescriptionlItem_C_ExecuteUbergraph_QuestDetail_DetaiDescriptionlItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
