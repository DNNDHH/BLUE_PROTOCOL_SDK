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
	 * Function UMG_LiquidMemoryAccumlulateList.UMG_LiquidMemoryAccumlulateList_C.SetAccumlulateList
	 */
	struct UUMG_LiquidMemoryAccumlulateList_C_SetAccumlulateList_Params
	{
	public:
		int32_t                                                    LiquidMemoryId;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SXQ7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FSBLiquidMemoryAccumulateTokenInfo>          AccumlulateItemMaster;                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FSBTokenState>                               InTokenList;                                             // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       IsFullCharge;                                            // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SLJT[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_LiquidMemoryAccumlulateList.UMG_LiquidMemoryAccumlulateList_C.Construct
	 */
	struct UUMG_LiquidMemoryAccumlulateList_C_Construct_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryAccumlulateList.UMG_LiquidMemoryAccumlulateList_C.BndEvt__UMG_LiquidMemoryAccumlulateList_ButtonClose_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_LiquidMemoryAccumlulateList_C_BndEvt__UMG_LiquidMemoryAccumlulateList_ButtonClose_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryAccumlulateList.UMG_LiquidMemoryAccumlulateList_C.BndEvt__UMG_LiquidMemoryAccumlulateList_ButtonUse_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_LiquidMemoryAccumlulateList_C_BndEvt__UMG_LiquidMemoryAccumlulateList_ButtonUse_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryAccumlulateList.UMG_LiquidMemoryAccumlulateList_C.カスタムイベント_1
	 */
	struct UUMG_LiquidMemoryAccumlulateList_C__1_Params
	{
	public:
		int32_t                                                    InRetCode;                                               // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZIBM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FSBLiquidMemoryInfo>                         InUpdatedLiquidMemoryInfos;                              // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UMG_LiquidMemoryAccumlulateList.UMG_LiquidMemoryAccumlulateList_C.SelfClose
	 */
	struct UUMG_LiquidMemoryAccumlulateList_C_SelfClose_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryAccumlulateList.UMG_LiquidMemoryAccumlulateList_C.OnUseDialogClosed
	 */
	struct UUMG_LiquidMemoryAccumlulateList_C_OnUseDialogClosed_Params
	{
	public:
		EYesNoDialogResult                                         Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_LiquidMemoryAccumlulateList.UMG_LiquidMemoryAccumlulateList_C.OnUseTokenNumChanged
	 */
	struct UUMG_LiquidMemoryAccumlulateList_C_OnUseTokenNumChanged_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryAccumlulateList.UMG_LiquidMemoryAccumlulateList_C.BndEvt__UMG_LiquidMemoryAccumlulateList_TransParentButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_LiquidMemoryAccumlulateList_C_BndEvt__UMG_LiquidMemoryAccumlulateList_TransParentButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryAccumlulateList.UMG_LiquidMemoryAccumlulateList_C.BndEvt__UMG_LiquidMemoryAccumlulateList_ButtonUse_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
	 */
	struct UUMG_LiquidMemoryAccumlulateList_C_BndEvt__UMG_LiquidMemoryAccumlulateList_ButtonUse_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryAccumlulateList.UMG_LiquidMemoryAccumlulateList_C.BndEvt__UMG_LiquidMemoryAccumlulateList_ButtonUse_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUMG_LiquidMemoryAccumlulateList_C_BndEvt__UMG_LiquidMemoryAccumlulateList_ButtonUse_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryAccumlulateList.UMG_LiquidMemoryAccumlulateList_C.BndEvt__UMG_LiquidMemoryAccumlulateList_ButtonUse_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUMG_LiquidMemoryAccumlulateList_C_BndEvt__UMG_LiquidMemoryAccumlulateList_ButtonUse_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryAccumlulateList.UMG_LiquidMemoryAccumlulateList_C.ExecuteUbergraph_UMG_LiquidMemoryAccumlulateList
	 */
	struct UUMG_LiquidMemoryAccumlulateList_C_ExecuteUbergraph_UMG_LiquidMemoryAccumlulateList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_LiquidMemoryAccumlulateList.UMG_LiquidMemoryAccumlulateList_C.OnAccumulateCompleted__DelegateSignature
	 */
	struct UUMG_LiquidMemoryAccumlulateList_C_OnAccumulateCompleted__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
