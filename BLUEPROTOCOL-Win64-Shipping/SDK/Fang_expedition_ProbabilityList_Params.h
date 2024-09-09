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
	 * Function Fang_expedition_ProbabilityList.Fang_expedition_ProbabilityList_C.ClearItemDetail 
	 */
	struct UFang_expedition_ProbabilityList_C_ClearItemDetail_Params
	{	};

	/**
	 * Function Fang_expedition_ProbabilityList.Fang_expedition_ProbabilityList_C.SetPlayData
	 */
	struct UFang_expedition_ProbabilityList_C_SetPlayData_Params
	{
	public:
		struct FSBFang_expeditionPlayData                          PlayData;                                                // 0x0000(0x0120)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Fang_expedition_ProbabilityList.Fang_expedition_ProbabilityList_C.Close
	 */
	struct UFang_expedition_ProbabilityList_C_Close_Params
	{	};

	/**
	 * Function Fang_expedition_ProbabilityList.Fang_expedition_ProbabilityList_C.Open
	 */
	struct UFang_expedition_ProbabilityList_C_Open_Params
	{	};

	/**
	 * Function Fang_expedition_ProbabilityList.Fang_expedition_ProbabilityList_C.CB_OnListItemClick
	 */
	struct UFang_expedition_ProbabilityList_C_CB_OnListItemClick_Params
	{
	public:
		struct FSBMasterReward                                     MasterReward;                                            // 0x0000(0x0014)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		unsigned char                                              UnknownData_9GAL[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Fang_expedition_ProbabilityList.Fang_expedition_ProbabilityList_C.ClearListData
	 */
	struct UFang_expedition_ProbabilityList_C_ClearListData_Params
	{	};

	/**
	 * Function Fang_expedition_ProbabilityList.Fang_expedition_ProbabilityList_C.SetData
	 */
	struct UFang_expedition_ProbabilityList_C_SetData_Params
	{
	public:
		struct FSBFang_expeditionAreaData                          AreaData;                                                // 0x0000(0x00A8)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    TimeIndex;                                               // 0x00A8(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    FangIndex;                                               // 0x00AC(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_ProbabilityList.Fang_expedition_ProbabilityList_C.BndEvt__Fang_expedition_ProbabilityList_UMG_ProductDetail_K2Node_ComponentBoundEvent_0_OnClickItemBoxDetail__DelegateSignature
	 */
	struct UFang_expedition_ProbabilityList_C_BndEvt__Fang_expedition_ProbabilityList_UMG_ProductDetail_K2Node_ComponentBoundEvent_0_OnClickItemBoxDetail__DelegateSignature_Params
	{
	public:
		class UBP_SBProductItemData_C*                             Data;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_ProbabilityList.Fang_expedition_ProbabilityList_C.OnBoxDetailClosed
	 */
	struct UFang_expedition_ProbabilityList_C_OnBoxDetailClosed_Params
	{
	public:
		class UUMG_ProductDetailMenu_C*                            Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_ProbabilityList.Fang_expedition_ProbabilityList_C.BndEvt__Fang_expedition_ProbabilityList_UMG_ProductDetail_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature
	 */
	struct UFang_expedition_ProbabilityList_C_BndEvt__Fang_expedition_ProbabilityList_UMG_ProductDetail_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature_Params
	{
	public:
		E_SBDetailsZoomIn                                          Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_ProbabilityList.Fang_expedition_ProbabilityList_C.BndEvt__Fang_expedition_ProbabilityList_UMG_DetailsImagineBattleZoomIn_K2Node_ComponentBoundEvent_2_OnClickZoomOut__DelegateSignature
	 */
	struct UFang_expedition_ProbabilityList_C_BndEvt__Fang_expedition_ProbabilityList_UMG_DetailsImagineBattleZoomIn_K2Node_ComponentBoundEvent_2_OnClickZoomOut__DelegateSignature_Params
	{	};

	/**
	 * Function Fang_expedition_ProbabilityList.Fang_expedition_ProbabilityList_C.BndEvt__Fang_expedition_ProbabilityList_CmnBack01_K2Node_ComponentBoundEvent_3_EventClicked__DelegateSignature
	 */
	struct UFang_expedition_ProbabilityList_C_BndEvt__Fang_expedition_ProbabilityList_CmnBack01_K2Node_ComponentBoundEvent_3_EventClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Fang_expedition_ProbabilityList.Fang_expedition_ProbabilityList_C.Destruct
	 */
	struct UFang_expedition_ProbabilityList_C_Destruct_Params
	{	};

	/**
	 * Function Fang_expedition_ProbabilityList.Fang_expedition_ProbabilityList_C.OnUI_Cancel
	 */
	struct UFang_expedition_ProbabilityList_C_OnUI_Cancel_Params
	{	};

	/**
	 * Function Fang_expedition_ProbabilityList.Fang_expedition_ProbabilityList_C.ExecuteUbergraph_Fang_expedition_ProbabilityList
	 */
	struct UFang_expedition_ProbabilityList_C_ExecuteUbergraph_Fang_expedition_ProbabilityList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_W5H9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Fang_expedition_ProbabilityList.Fang_expedition_ProbabilityList_C.OnClose__DelegateSignature
	 */
	struct UFang_expedition_ProbabilityList_C_OnClose__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
