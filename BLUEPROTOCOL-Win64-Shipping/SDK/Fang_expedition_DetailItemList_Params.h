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
	 * Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.ResetRewardData
	 */
	struct UFang_expedition_DetailItemList_C_ResetRewardData_Params
	{	};

	/**
	 * Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.SetupRandomRewardPage
	 */
	struct UFang_expedition_DetailItemList_C_SetupRandomRewardPage_Params
	{
	public:
		int32_t                                                    Page;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.AddRandomRewardData
	 */
	struct UFang_expedition_DetailItemList_C_AddRandomRewardData_Params
	{
	public:
		TArray<struct FSBFang_expeditionRandomRewardData>          RandomReward;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.SetupPageButton
	 */
	struct UFang_expedition_DetailItemList_C_SetupPageButton_Params
	{	};

	/**
	 * Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.ChangePage_RandomItem
	 */
	struct UFang_expedition_DetailItemList_C_ChangePage_RandomItem_Params
	{
	public:
		int32_t                                                    Page;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XE7R[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.SetRandomRewardData
	 */
	struct UFang_expedition_DetailItemList_C_SetRandomRewardData_Params
	{
	public:
		TArray<struct FSBFang_expeditionRandomRewardData>          RandomReward;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.UpdatePageButtonVisibility
	 */
	struct UFang_expedition_DetailItemList_C_UpdatePageButtonVisibility_Params
	{	};

	/**
	 * Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.ChangePage_FixedItem
	 */
	struct UFang_expedition_DetailItemList_C_ChangePage_FixedItem_Params
	{
	public:
		int32_t                                                    Page;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BX1U[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.ChangePage
	 */
	struct UFang_expedition_DetailItemList_C_ChangePage_Params
	{
	public:
		int32_t                                                    Page;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_O2RT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.SetRewardData
	 */
	struct UFang_expedition_DetailItemList_C_SetRewardData_Params
	{
	public:
		TArray<struct FSBMasterReward>                             RewardList;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.Construct
	 */
	struct UFang_expedition_DetailItemList_C_Construct_Params
	{	};

	/**
	 * Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.BndEvt__Fang_expedition_DetailItemList_LeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UFang_expedition_DetailItemList_C_BndEvt__Fang_expedition_DetailItemList_LeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.BndEvt__Fang_expedition_DetailItemList_RightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UFang_expedition_DetailItemList_C_BndEvt__Fang_expedition_DetailItemList_RightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.CB_OnPageButtonClick
	 */
	struct UFang_expedition_DetailItemList_C_CB_OnPageButtonClick_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.Destruct
	 */
	struct UFang_expedition_DetailItemList_C_Destruct_Params
	{	};

	/**
	 * Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.ExecuteUbergraph_Fang_expedition_DetailItemList
	 */
	struct UFang_expedition_DetailItemList_C_ExecuteUbergraph_Fang_expedition_DetailItemList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
