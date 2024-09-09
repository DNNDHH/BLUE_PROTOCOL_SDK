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
	 * Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.CheckAnimationSkip
	 */
	struct UFang_expedition_DetailItemData_C_CheckAnimationSkip_Params
	{
	public:
		int32_t                                                    InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OutParam;                                                // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.SetNextButtonDisabled
	 */
	struct UFang_expedition_DetailItemData_C_SetNextButtonDisabled_Params
	{
	public:
		bool                                                       IsDisable;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.GetSelectTimeIndex
	 */
	struct UFang_expedition_DetailItemData_C_GetSelectTimeIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.GetAreaData
	 */
	struct UFang_expedition_DetailItemData_C_GetAreaData_Params
	{
	public:
		struct FSBFang_expeditionAreaData                          Data;                                                    // 0x0000(0x00A8)  (Parm, OutParm)
	};

	/**
	 * Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.UpdateRandomRewardData
	 */
	struct UFang_expedition_DetailItemData_C_UpdateRandomRewardData_Params
	{	};

	/**
	 * Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.SetFangVarietyNum
	 */
	struct UFang_expedition_DetailItemData_C_SetFangVarietyNum_Params
	{
	public:
		int32_t                                                    Num;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.ChangeFangValue
	 */
	struct UFang_expedition_DetailItemData_C_ChangeFangValue_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       AnimationSkip;                                           // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.UpdateRewardList
	 */
	struct UFang_expedition_DetailItemData_C_UpdateRewardList_Params
	{
	public:
		bool                                                       AnimationSkip;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.ChangeTimeIndex
	 */
	struct UFang_expedition_DetailItemData_C_ChangeTimeIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       AnimationSkip;                                           // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.UpdateTimeButtonText
	 */
	struct UFang_expedition_DetailItemData_C_UpdateTimeButtonText_Params
	{	};

	/**
	 * Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.SetAreaData
	 */
	struct UFang_expedition_DetailItemData_C_SetAreaData_Params
	{
	public:
		struct FSBFang_expeditionAreaData                          AreaData;                                                // 0x0000(0x00A8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.Construct
	 */
	struct UFang_expedition_DetailItemData_C_Construct_Params
	{	};

	/**
	 * Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.BndEvt__Fang_expedition_DetailItemData_CmnBtn16_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 */
	struct UFang_expedition_DetailItemData_C_BndEvt__Fang_expedition_DetailItemData_CmnBtn16_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.BndEvt__Fang_expedition_DetailItemData_Btn_ToSelect_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 */
	struct UFang_expedition_DetailItemData_C_BndEvt__Fang_expedition_DetailItemData_Btn_ToSelect_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.Destruct
	 */
	struct UFang_expedition_DetailItemData_C_Destruct_Params
	{	};

	/**
	 * Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.BndEvt__Fang_expedition_DetailItemData_TimeButton1_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature
	 */
	struct UFang_expedition_DetailItemData_C_BndEvt__Fang_expedition_DetailItemData_TimeButton1_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.BndEvt__Fang_expedition_DetailItemData_TimeButton2_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature
	 */
	struct UFang_expedition_DetailItemData_C_BndEvt__Fang_expedition_DetailItemData_TimeButton2_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.BndEvt__Fang_expedition_DetailItemData_TimeButton3_K2Node_ComponentBoundEvent_8_EventOnClicked__DelegateSignature
	 */
	struct UFang_expedition_DetailItemData_C_BndEvt__Fang_expedition_DetailItemData_TimeButton3_K2Node_ComponentBoundEvent_8_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.BndEvt__Fang_expedition_DetailItemData_TimeButton4_K2Node_ComponentBoundEvent_9_EventOnClicked__DelegateSignature
	 */
	struct UFang_expedition_DetailItemData_C_BndEvt__Fang_expedition_DetailItemData_TimeButton4_K2Node_ComponentBoundEvent_9_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.ExecuteUbergraph_Fang_expedition_DetailItemData
	 */
	struct UFang_expedition_DetailItemData_C_ExecuteUbergraph_Fang_expedition_DetailItemData_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.OnClickFangSelectButton__DelegateSignature
	 */
	struct UFang_expedition_DetailItemData_C_OnClickFangSelectButton__DelegateSignature_Params
	{	};

	/**
	 * Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.OnClickRandomRewardListView__DelegateSignature
	 */
	struct UFang_expedition_DetailItemData_C_OnClickRandomRewardListView__DelegateSignature_Params
	{
	public:
		struct FSBFang_expeditionAreaData                          AreaData;                                                // 0x0000(0x00A8)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    TimeIndex;                                               // 0x00A8(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    FangValue;                                               // 0x00AC(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
