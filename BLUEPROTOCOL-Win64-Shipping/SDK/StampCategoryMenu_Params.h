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
	 * Function StampCategoryMenu.StampCategoryMenu_C.IsSelectHistoryCategory
	 */
	struct UStampCategoryMenu_C_IsSelectHistoryCategory_Params
	{
	public:
		bool                                                       IsHistoryCategory;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0ZCW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function StampCategoryMenu.StampCategoryMenu_C.IsValidSelectStampCategoryMasterData
	 */
	struct UStampCategoryMenu_C_IsValidSelectStampCategoryMasterData_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_22GV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function StampCategoryMenu.StampCategoryMenu_C.GetSelectStampCategoryMasterData
	 */
	struct UStampCategoryMenu_C_GetSelectStampCategoryMasterData_Params
	{
	public:
		struct FSBStampCategoryMasterData                          Output;                                                  // 0x0000(0x0020)  (Parm, OutParm)
	};

	/**
	 * Function StampCategoryMenu.StampCategoryMenu_C.GetSelectButtonIndex
	 */
	struct UStampCategoryMenu_C_GetSelectButtonIndex_Params
	{
	public:
		int32_t                                                    SelectButtonIndex;                                       // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StampCategoryMenu.StampCategoryMenu_C.CheckLimitedTimeStamp
	 */
	struct UStampCategoryMenu_C_CheckLimitedTimeStamp_Params
	{
	public:
		int32_t                                                    StampId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K37G[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function StampCategoryMenu.StampCategoryMenu_C.SaveStampHisoryIdsData
	 */
	struct UStampCategoryMenu_C_SaveStampHisoryIdsData_Params
	{	};

	/**
	 * Function StampCategoryMenu.StampCategoryMenu_C.LoadStampHistoryIdsData
	 */
	struct UStampCategoryMenu_C_LoadStampHistoryIdsData_Params
	{	};

	/**
	 * Function StampCategoryMenu.StampCategoryMenu_C.FindStampCategoryMasterData
	 */
	struct UStampCategoryMenu_C_FindStampCategoryMasterData_Params
	{
	public:
		int32_t                                                    InCategoryId;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsFind;                                                  // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EVFZ[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBStampCategoryMasterData                          RetData;                                                 // 0x0008(0x0020)  (Parm, OutParm)
	};

	/**
	 * Function StampCategoryMenu.StampCategoryMenu_C.UpdateMyStampDataList
	 */
	struct UStampCategoryMenu_C_UpdateMyStampDataList_Params
	{
	public:
		int32_t                                                    StampId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_55MH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function StampCategoryMenu.StampCategoryMenu_C.Set History Mode
	 */
	struct UStampCategoryMenu_C_SetHistoryMode_Params
	{
	public:
		bool                                                       bSet;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BF76[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function StampCategoryMenu.StampCategoryMenu_C.UpdateEnableButton
	 */
	struct UStampCategoryMenu_C_UpdateEnableButton_Params
	{	};

	/**
	 * Function StampCategoryMenu.StampCategoryMenu_C.Update Button
	 */
	struct UStampCategoryMenu_C_UpdateButton_Params
	{	};

	/**
	 * Function StampCategoryMenu.StampCategoryMenu_C.GetMyStampDataList
	 */
	struct UStampCategoryMenu_C_GetMyStampDataList_Params
	{	};

	/**
	 * Function StampCategoryMenu.StampCategoryMenu_C.Construct
	 */
	struct UStampCategoryMenu_C_Construct_Params
	{	};

	/**
	 * Function StampCategoryMenu.StampCategoryMenu_C.BndEvt__StampCategorySelectLeftButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature
	 */
	struct UStampCategoryMenu_C_BndEvt__StampCategorySelectLeftButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function StampCategoryMenu.StampCategoryMenu_C.BndEvt__StampCategorySelectRightButton_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature
	 */
	struct UStampCategoryMenu_C_BndEvt__StampCategorySelectRightButton_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function StampCategoryMenu.StampCategoryMenu_C.BndEvt__StampCategoryButton1_K2Node_ComponentBoundEvent_711_OnClicked__DelegateSignature
	 */
	struct UStampCategoryMenu_C_BndEvt__StampCategoryButton1_K2Node_ComponentBoundEvent_711_OnClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StampCategoryMenu.StampCategoryMenu_C.BndEvt__StampCategoryButton2_K2Node_ComponentBoundEvent_715_OnClicked__DelegateSignature
	 */
	struct UStampCategoryMenu_C_BndEvt__StampCategoryButton2_K2Node_ComponentBoundEvent_715_OnClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StampCategoryMenu.StampCategoryMenu_C.BndEvt__StampCategoryButton3_K2Node_ComponentBoundEvent_720_OnClicked__DelegateSignature
	 */
	struct UStampCategoryMenu_C_BndEvt__StampCategoryButton3_K2Node_ComponentBoundEvent_720_OnClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StampCategoryMenu.StampCategoryMenu_C.BndEvt__StampCategoryButton4_K2Node_ComponentBoundEvent_726_OnClicked__DelegateSignature
	 */
	struct UStampCategoryMenu_C_BndEvt__StampCategoryButton4_K2Node_ComponentBoundEvent_726_OnClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StampCategoryMenu.StampCategoryMenu_C.BndEvt__StampCategoryButton5_K2Node_ComponentBoundEvent_218_OnClicked__DelegateSignature
	 */
	struct UStampCategoryMenu_C_BndEvt__StampCategoryButton5_K2Node_ComponentBoundEvent_218_OnClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StampCategoryMenu.StampCategoryMenu_C.BndEvt__StampCategoryButton6_K2Node_ComponentBoundEvent_226_OnClicked__DelegateSignature
	 */
	struct UStampCategoryMenu_C_BndEvt__StampCategoryButton6_K2Node_ComponentBoundEvent_226_OnClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StampCategoryMenu.StampCategoryMenu_C.Show
	 */
	struct UStampCategoryMenu_C_Show_Params
	{	};

	/**
	 * Function StampCategoryMenu.StampCategoryMenu_C.BndEvt__StampCategoryHistoryButton_K2Node_ComponentBoundEvent_181_OnClicked__DelegateSignature
	 */
	struct UStampCategoryMenu_C_BndEvt__StampCategoryHistoryButton_K2Node_ComponentBoundEvent_181_OnClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StampCategoryMenu.StampCategoryMenu_C.BndEvt__StampCategoryButton7_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UStampCategoryMenu_C_BndEvt__StampCategoryButton7_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StampCategoryMenu.StampCategoryMenu_C.BndEvt__StampCategoryButton8_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UStampCategoryMenu_C_BndEvt__StampCategoryButton8_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StampCategoryMenu.StampCategoryMenu_C.BndEvt__StampCategoryButton9_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UStampCategoryMenu_C_BndEvt__StampCategoryButton9_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StampCategoryMenu.StampCategoryMenu_C.BndEvt__StampCategoryButton10_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 */
	struct UStampCategoryMenu_C_BndEvt__StampCategoryButton10_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StampCategoryMenu.StampCategoryMenu_C.BndEvt__StampCategoryMenu_StampCategoryFavoriteButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	 */
	struct UStampCategoryMenu_C_BndEvt__StampCategoryMenu_StampCategoryFavoriteButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StampCategoryMenu.StampCategoryMenu_C.ExecuteUbergraph_StampCategoryMenu
	 */
	struct UStampCategoryMenu_C_ExecuteUbergraph_StampCategoryMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StampCategoryMenu.StampCategoryMenu_C.OnUpdateStamp__DelegateSignature
	 */
	struct UStampCategoryMenu_C_OnUpdateStamp__DelegateSignature_Params
	{
	public:
		struct FSBStampCategoryMasterData                          StampCategoryMasterData;                                 // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
