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
	 * Function QuestBoard_ListItem.QuestBoard_ListItem_C.GetQuestIndex
	 */
	struct UQuestBoard_ListItem_C_GetQuestIndex_Params
	{
	public:
		int32_t                                                    QuestIndex;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestBoard_ListItem.QuestBoard_ListItem_C.SetVisibleNewIcon
	 */
	struct UQuestBoard_ListItem_C_SetVisibleNewIcon_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function QuestBoard_ListItem.QuestBoard_ListItem_C.HideNewIcon
	 */
	struct UQuestBoard_ListItem_C_HideNewIcon_Params
	{	};

	/**
	 * Function QuestBoard_ListItem.QuestBoard_ListItem_C.SetBtnSelected
	 */
	struct UQuestBoard_ListItem_C_SetBtnSelected_Params
	{
	public:
		bool                                                       bSelected;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HEK3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function QuestBoard_ListItem.QuestBoard_ListItem_C.SetQuestStatus
	 */
	struct UQuestBoard_ListItem_C_SetQuestStatus_Params
	{
	public:
		int32_t                                                    InQuestIndex;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestBoard_ListItem.QuestBoard_ListItem_C.SetInfo
	 */
	struct UQuestBoard_ListItem_C_SetInfo_Params
	{	};

	/**
	 * Function QuestBoard_ListItem.QuestBoard_ListItem_C.Construct
	 */
	struct UQuestBoard_ListItem_C_Construct_Params
	{	};

	/**
	 * Function QuestBoard_ListItem.QuestBoard_ListItem_C.BndEvt__SBButton_C_76_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UQuestBoard_ListItem_C_BndEvt__SBButton_C_76_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function QuestBoard_ListItem.QuestBoard_ListItem_C.ExecuteUbergraph_QuestBoard_ListItem
	 */
	struct UQuestBoard_ListItem_C_ExecuteUbergraph_QuestBoard_ListItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestBoard_ListItem.QuestBoard_ListItem_C.OnBtnSelected__DelegateSignature
	 */
	struct UQuestBoard_ListItem_C_OnBtnSelected__DelegateSignature_Params
	{
	public:
		class UQuestBoard_ListItem_C*                              item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestBoard_ListItem.QuestBoard_ListItem_C.OnClick__DelegateSignature
	 */
	struct UQuestBoard_ListItem_C_OnClick__DelegateSignature_Params
	{
	public:
		int32_t                                                    QuestIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
