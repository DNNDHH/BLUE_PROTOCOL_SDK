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
	 * Function QuestConfirmationMenu.QuestConfirmationMenu_C.Construct
	 */
	struct UQuestConfirmationMenu_C_Construct_Params
	{	};

	/**
	 * Function QuestConfirmationMenu.QuestConfirmationMenu_C.BndEvt__QuestDetail_K2Node_ComponentBoundEvent_33_OnFinish__DelegateSignature
	 */
	struct UQuestConfirmationMenu_C_BndEvt__QuestDetail_K2Node_ComponentBoundEvent_33_OnFinish__DelegateSignature_Params
	{
	public:
		EQuestDetail_FinishStatus                                  FinishStatus;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YXGT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    QuestIndex;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestConfirmationMenu.QuestConfirmationMenu_C.WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_1
	 */
	struct UQuestConfirmationMenu_C_WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function QuestConfirmationMenu.QuestConfirmationMenu_C.ExecuteUbergraph_QuestConfirmationMenu
	 */
	struct UQuestConfirmationMenu_C_ExecuteUbergraph_QuestConfirmationMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestConfirmationMenu.QuestConfirmationMenu_C.OnFinish__DelegateSignature
	 */
	struct UQuestConfirmationMenu_C_OnFinish__DelegateSignature_Params
	{
	public:
		EQuestDetail_FinishStatus                                  FinishStatus;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QNPO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    QuestIndex;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
