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
	 * Function QuestIcon.QuestIcon_C.SetIconByQuestIndex_ForInteractableEventPoint
	 */
	struct UQuestIcon_C_SetIconByQuestIndex_ForInteractableEventPoint_Params
	{
	public:
		int32_t                                                    QuestIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bQuestionMark;                                           // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function QuestIcon.QuestIcon_C.SetQuestIconQuestion
	 */
	struct UQuestIcon_C_SetQuestIconQuestion_Params
	{	};

	/**
	 * Function QuestIcon.QuestIcon_C.SetQuestIconClosed
	 */
	struct UQuestIcon_C_SetQuestIconClosed_Params
	{	};

	/**
	 * Function QuestIcon.QuestIcon_C.SetQuestIcon
	 */
	struct UQuestIcon_C_SetQuestIcon_Params
	{
	public:
		int32_t                                                    QuestID;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestIcon.QuestIcon_C.SetIconTexture
	 */
	struct UQuestIcon_C_SetIconTexture_Params
	{
	public:
		TMap<EQuestStatus, class UTexture2D*>                      TextureList;                                             // 0x0000(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		EQuestStatus                                               Status;                                                  // 0x0050(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CCRQ[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function QuestIcon.QuestIcon_C.SetIconZOrder
	 */
	struct UQuestIcon_C_SetIconZOrder_Params
	{
	public:
		TMap<EQuestStatus, ESBMiniMapIconType>                     IconTypeList;                                            // 0x0000(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		EQuestStatus                                               Status;                                                  // 0x0050(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
