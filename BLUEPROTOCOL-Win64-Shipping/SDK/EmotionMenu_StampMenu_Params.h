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
	 * Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.GetStampList
	 */
	struct UEmotionMenu_StampMenu_C_GetStampList_Params
	{
	public:
		struct FSBStampCategoryMasterData                          InCategoryMasterData;                                    // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FSBStampCategoryMasterData                          OutCategoryMasterData;                                   // 0x0020(0x0020)  (Parm, OutParm)
	};

	/**
	 * Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.SelectStamp
	 */
	struct UEmotionMenu_StampMenu_C_SelectStamp_Params
	{
	public:
		int32_t                                                    InStampId;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZI8R[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UChatStampButtonItem_C*                              InStampItem;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.Hide
	 */
	struct UEmotionMenu_StampMenu_C_Hide_Params
	{	};

	/**
	 * Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.Show
	 */
	struct UEmotionMenu_StampMenu_C_Show_Params
	{	};

	/**
	 * Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.SetDragable
	 */
	struct UEmotionMenu_StampMenu_C_SetDragable_Params
	{
	public:
		bool                                                       InDragable;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3DWJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.UpdateIconSelect
	 */
	struct UEmotionMenu_StampMenu_C_UpdateIconSelect_Params
	{
	public:
		class UChatStampButtonItem_C*                              InSelectIcon;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.SetHistoryMode
	 */
	struct UEmotionMenu_StampMenu_C_SetHistoryMode_Params
	{
	public:
		bool                                                       bSet;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.CreateStamp
	 */
	struct UEmotionMenu_StampMenu_C_CreateStamp_Params
	{
	public:
		struct FSBStampCategoryMasterData                          StampData;                                               // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.Construct
	 */
	struct UEmotionMenu_StampMenu_C_Construct_Params
	{	};

	/**
	 * Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.OnStampClicked_Event
	 */
	struct UEmotionMenu_StampMenu_C_OnStampClicked_Event_Params
	{
	public:
		int32_t                                                    StampId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XH0D[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UChatStampButtonItem_C*                              InSelectItem;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.BndEvt__StampCategoryMenu_K2Node_ComponentBoundEvent_21_OnUpdateStamp__DelegateSignature
	 */
	struct UEmotionMenu_StampMenu_C_BndEvt__StampCategoryMenu_K2Node_ComponentBoundEvent_21_OnUpdateStamp__DelegateSignature_Params
	{
	public:
		struct FSBStampCategoryMasterData                          StampCategoryMasterData;                                 // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.Destruct
	 */
	struct UEmotionMenu_StampMenu_C_Destruct_Params
	{	};

	/**
	 * Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.OnChangeCoolTimeEmotion
	 */
	struct UEmotionMenu_StampMenu_C_OnChangeCoolTimeEmotion_Params
	{
	public:
		bool                                                       IsCoolTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.BndEvt__EmotionMenu_StampMenu_ChatSortItem_K2Node_ComponentBoundEvent_0_OnSortChage__DelegateSignature
	 */
	struct UEmotionMenu_StampMenu_C_BndEvt__EmotionMenu_StampMenu_ChatSortItem_K2Node_ComponentBoundEvent_0_OnSortChage__DelegateSignature_Params
	{
	public:
		int32_t                                                    SortType;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.UpdateSortType
	 */
	struct UEmotionMenu_StampMenu_C_UpdateSortType_Params
	{
	public:
		int32_t                                                    SortType;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.ExecuteUbergraph_EmotionMenu_StampMenu
	 */
	struct UEmotionMenu_StampMenu_C_ExecuteUbergraph_EmotionMenu_StampMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
