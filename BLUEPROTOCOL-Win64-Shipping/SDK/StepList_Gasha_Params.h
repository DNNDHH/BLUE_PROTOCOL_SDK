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
	 * Function StepList_Gasha.StepList_Gasha_C.GetGashaInfo
	 */
	struct UStepList_Gasha_C_GetGashaInfo_Params
	{
	public:
		int32_t                                                    BtnId;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_42IO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBGashaInfo                                        OutGashaInfo;                                            // 0x0008(0x01C8)  (Parm, OutParm)
	};

	/**
	 * Function StepList_Gasha.StepList_Gasha_C.UpdateBtnPage
	 */
	struct UStepList_Gasha_C_UpdateBtnPage_Params
	{	};

	/**
	 * Function StepList_Gasha.StepList_Gasha_C.GetSelectBtn
	 */
	struct UStepList_Gasha_C_GetSelectBtn_Params
	{
	public:
		int32_t                                                    OutSelectBtnId;                                          // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StepList_Gasha.StepList_Gasha_C.GetSelectStepNum
	 */
	struct UStepList_Gasha_C_GetSelectStepNum_Params
	{
	public:
		int32_t                                                    OutSelectStepNum;                                        // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StepList_Gasha.StepList_Gasha_C.SetBtnSelected
	 */
	struct UStepList_Gasha_C_SetBtnSelected_Params
	{
	public:
		int32_t                                                    SelectedBtnID;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StepList_Gasha.StepList_Gasha_C.SetBtnVisivility
	 */
	struct UStepList_Gasha_C_SetBtnVisivility_Params
	{
	public:
		ESlateVisibility                                           IsVisibility;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StepList_Gasha.StepList_Gasha_C.CreateBtnList
	 */
	struct UStepList_Gasha_C_CreateBtnList_Params
	{	};

	/**
	 * Function StepList_Gasha.StepList_Gasha_C.InitSetStepInfo
	 */
	struct UStepList_Gasha_C_InitSetStepInfo_Params
	{
	public:
		int32_t                                                    SelectStep;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StepMax;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StepList_Gasha.StepList_Gasha_C.BndEvt__btn_page_next_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UStepList_Gasha_C_BndEvt__btn_page_next_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function StepList_Gasha.StepList_Gasha_C.BndEvt__btn_page_prev_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UStepList_Gasha_C_BndEvt__btn_page_prev_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function StepList_Gasha.StepList_Gasha_C.CommonBtnClicked
	 */
	struct UStepList_Gasha_C_CommonBtnClicked_Params
	{
	public:
		int32_t                                                    BtnId;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StepList_Gasha.StepList_Gasha_C.BndEvt__StepList_Gasha_StepListItem_Gasha_1_K2Node_ComponentBoundEvent_9_OnBtnClicked__DelegateSignature
	 */
	struct UStepList_Gasha_C_BndEvt__StepList_Gasha_StepListItem_Gasha_1_K2Node_ComponentBoundEvent_9_OnBtnClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    BtnId;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StepList_Gasha.StepList_Gasha_C.BndEvt__StepList_Gasha_StepListItem_Gasha_2_K2Node_ComponentBoundEvent_10_OnBtnClicked__DelegateSignature
	 */
	struct UStepList_Gasha_C_BndEvt__StepList_Gasha_StepListItem_Gasha_2_K2Node_ComponentBoundEvent_10_OnBtnClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    BtnId;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StepList_Gasha.StepList_Gasha_C.BndEvt__StepList_Gasha_StepListItem_Gasha_3_K2Node_ComponentBoundEvent_11_OnBtnClicked__DelegateSignature
	 */
	struct UStepList_Gasha_C_BndEvt__StepList_Gasha_StepListItem_Gasha_3_K2Node_ComponentBoundEvent_11_OnBtnClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    BtnId;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StepList_Gasha.StepList_Gasha_C.BndEvt__StepList_Gasha_StepListItem_Gasha_4_K2Node_ComponentBoundEvent_12_OnBtnClicked__DelegateSignature
	 */
	struct UStepList_Gasha_C_BndEvt__StepList_Gasha_StepListItem_Gasha_4_K2Node_ComponentBoundEvent_12_OnBtnClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    BtnId;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StepList_Gasha.StepList_Gasha_C.BndEvt__StepList_Gasha_StepListItem_Gasha_5_K2Node_ComponentBoundEvent_13_OnBtnClicked__DelegateSignature
	 */
	struct UStepList_Gasha_C_BndEvt__StepList_Gasha_StepListItem_Gasha_5_K2Node_ComponentBoundEvent_13_OnBtnClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    BtnId;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StepList_Gasha.StepList_Gasha_C.ExecuteUbergraph_StepList_Gasha
	 */
	struct UStepList_Gasha_C_ExecuteUbergraph_StepList_Gasha_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StepList_Gasha.StepList_Gasha_C.OnChangeStep__DelegateSignature
	 */
	struct UStepList_Gasha_C_OnChangeStep__DelegateSignature_Params
	{
	public:
		struct FSBGashaInfo                                        GashaInfo;                                               // 0x0000(0x01C8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
