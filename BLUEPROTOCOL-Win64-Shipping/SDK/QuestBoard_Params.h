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
	 * Function QuestBoard.QuestBoard_C.RandomPlayAnimation2
	 */
	struct UQuestBoard_C_RandomPlayAnimation2_Params
	{	};

	/**
	 * Function QuestBoard.QuestBoard_C.RandomPlayAnimation
	 */
	struct UQuestBoard_C_RandomPlayAnimation_Params
	{	};

	/**
	 * Function QuestBoard.QuestBoard_C.FindListItem
	 */
	struct UQuestBoard_C_FindListItem_Params
	{
	public:
		int32_t                                                    InQuestIndex;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OutListIndex;                                            // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestBoard.QuestBoard_C.RemoveListItem
	 */
	struct UQuestBoard_C_RemoveListItem_Params
	{
	public:
		int32_t                                                    InQuestIndex;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestBoard.QuestBoard_C.ChangeQuestStatus
	 */
	struct UQuestBoard_C_ChangeQuestStatus_Params
	{
	public:
		int32_t                                                    QuestIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestBoard.QuestBoard_C.Destruct
	 */
	struct UQuestBoard_C_Destruct_Params
	{	};

	/**
	 * Function QuestBoard.QuestBoard_C.CreateQuestList
	 */
	struct UQuestBoard_C_CreateQuestList_Params
	{	};

	/**
	 * Function QuestBoard.QuestBoard_C.CreateListItem
	 */
	struct UQuestBoard_C_CreateListItem_Params
	{
	public:
		TArray<struct FQuestBoardQuestData>                        InQuestList;                                             // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function QuestBoard.QuestBoard_C.Construct
	 */
	struct UQuestBoard_C_Construct_Params
	{	};

	/**
	 * Function QuestBoard.QuestBoard_C.OnClick_Event_1
	 */
	struct UQuestBoard_C_OnClick_Event_1_Params
	{
	public:
		int32_t                                                    QuestIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestBoard.QuestBoard_C.BndEvt__QuestDetail_Accepted_K2Node_ComponentBoundEvent_103_OnFinish__DelegateSignature
	 */
	struct UQuestBoard_C_BndEvt__QuestDetail_Accepted_K2Node_ComponentBoundEvent_103_OnFinish__DelegateSignature_Params
	{
	public:
		EQuestDetail_FinishStatus                                  FinishStatus;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FAZZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    QuestIndex;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestBoard.QuestBoard_C.OnAnimationFinished
	 */
	struct UQuestBoard_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestBoard.QuestBoard_C.OnPress_Cancel
	 */
	struct UQuestBoard_C_OnPress_Cancel_Params
	{	};

	/**
	 * Function QuestBoard.QuestBoard_C.OnListItemSelected
	 */
	struct UQuestBoard_C_OnListItemSelected_Params
	{
	public:
		class UQuestBoard_ListItem_C*                              item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestBoard.QuestBoard_C.BndEvt__FilterButton_K2Node_ComponentBoundEvent_4_OnApplyFilter__DelegateSignature
	 */
	struct UQuestBoard_C_BndEvt__FilterButton_K2Node_ComponentBoundEvent_4_OnApplyFilter__DelegateSignature_Params
	{
	public:
		TArray<struct FFilterGroup>                                Filters;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function QuestBoard.QuestBoard_C.BuildListItem
	 */
	struct UQuestBoard_C_BuildListItem_Params
	{	};

	/**
	 * Function QuestBoard.QuestBoard_C.RefreshDisplay
	 */
	struct UQuestBoard_C_RefreshDisplay_Params
	{	};

	/**
	 * Function QuestBoard.QuestBoard_C.BndEvt__CmnBack01_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature
	 */
	struct UQuestBoard_C_BndEvt__CmnBack01_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature_Params
	{	};

	/**
	 * Function QuestBoard.QuestBoard_C.onAnimTimer
	 */
	struct UQuestBoard_C_onAnimTimer_Params
	{	};

	/**
	 * Function QuestBoard.QuestBoard_C.WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1
	 */
	struct UQuestBoard_C_WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function QuestBoard.QuestBoard_C.ExecuteUbergraph_QuestBoard
	 */
	struct UQuestBoard_C_ExecuteUbergraph_QuestBoard_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestBoard.QuestBoard_C.OnClose__DelegateSignature
	 */
	struct UQuestBoard_C_OnClose__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
