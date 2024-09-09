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
	 * Function QuestDetailForMap.QuestDetailForMap_C.IsShowMoveButton
	 */
	struct UQuestDetailForMap_C_IsShowMoveButton_Params
	{
	public:
		bool                                                       OutParam;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function QuestDetailForMap.QuestDetailForMap_C.SetMoveButton
	 */
	struct UQuestDetailForMap_C_SetMoveButton_Params
	{
	public:
		bool                                                       InShowButton;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function QuestDetailForMap.QuestDetailForMap_C.Construct
	 */
	struct UQuestDetailForMap_C_Construct_Params
	{	};

	/**
	 * Function QuestDetailForMap.QuestDetailForMap_C.WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_2
	 */
	struct UQuestDetailForMap_C_WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_2_Params
	{	};

	/**
	 * Function QuestDetailForMap.QuestDetailForMap_C.BndEvt__QuestConfirmationMenuEx_BtnScreen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UQuestDetailForMap_C_BndEvt__QuestConfirmationMenuEx_BtnScreen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function QuestDetailForMap.QuestDetailForMap_C.OnMenuFinish
	 */
	struct UQuestDetailForMap_C_OnMenuFinish_Params
	{	};

	/**
	 * Function QuestDetailForMap.QuestDetailForMap_C.Destruct
	 */
	struct UQuestDetailForMap_C_Destruct_Params
	{	};

	/**
	 * Function QuestDetailForMap.QuestDetailForMap_C.BndEvt__QuestDetailForMap_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature
	 */
	struct UQuestDetailForMap_C_BndEvt__QuestDetailForMap_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature_Params
	{	};

	/**
	 * Function QuestDetailForMap.QuestDetailForMap_C.BndEvt__QuestDetailForMap_MoveToQuestListBtn_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature
	 */
	struct UQuestDetailForMap_C_BndEvt__QuestDetailForMap_MoveToQuestListBtn_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function QuestDetailForMap.QuestDetailForMap_C.ExecuteUbergraph_QuestDetailForMap
	 */
	struct UQuestDetailForMap_C_ExecuteUbergraph_QuestDetailForMap_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestDetailForMap.QuestDetailForMap_C.OnFinish__DelegateSignature
	 */
	struct UQuestDetailForMap_C_OnFinish__DelegateSignature_Params
	{
	public:
		EQuestDetail_FinishStatus                                  FinishStatus;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7TO1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    QuestIndex;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
