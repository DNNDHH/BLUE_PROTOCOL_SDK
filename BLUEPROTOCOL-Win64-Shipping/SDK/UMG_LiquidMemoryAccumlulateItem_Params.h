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
	 * Function UMG_LiquidMemoryAccumlulateItem.UMG_LiquidMemoryAccumlulateItem_C.SetLimitOver
	 */
	struct UUMG_LiquidMemoryAccumlulateItem_C_SetLimitOver_Params
	{
	public:
		bool                                                       IsLimitOver;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_LiquidMemoryAccumlulateItem.UMG_LiquidMemoryAccumlulateItem_C.GetUseToken
	 */
	struct UUMG_LiquidMemoryAccumlulateItem_C_GetUseToken_Params
	{
	public:
		int32_t                                                    TokenID;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    UseNum;                                                  // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_LiquidMemoryAccumlulateItem.UMG_LiquidMemoryAccumlulateItem_C.SetData
	 */
	struct UUMG_LiquidMemoryAccumlulateItem_C_SetData_Params
	{
	public:
		struct FSBTokenState                                       TokenState;                                              // 0x0000(0x0048)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       IsFullCharge;                                            // 0x0048(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DZLT[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_LiquidMemoryAccumlulateItem.UMG_LiquidMemoryAccumlulateItem_C.Construct
	 */
	struct UUMG_LiquidMemoryAccumlulateItem_C_Construct_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryAccumlulateItem.UMG_LiquidMemoryAccumlulateItem_C.BndEvt__SBButton_Minus_K2Node_ComponentBoundEvent_78_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UUMG_LiquidMemoryAccumlulateItem_C_BndEvt__SBButton_Minus_K2Node_ComponentBoundEvent_78_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryAccumlulateItem.UMG_LiquidMemoryAccumlulateItem_C.StartRepeatMinus
	 */
	struct UUMG_LiquidMemoryAccumlulateItem_C_StartRepeatMinus_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryAccumlulateItem.UMG_LiquidMemoryAccumlulateItem_C.NumberMinus
	 */
	struct UUMG_LiquidMemoryAccumlulateItem_C_NumberMinus_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryAccumlulateItem.UMG_LiquidMemoryAccumlulateItem_C.BndEvt__SBButton_Minus_K2Node_ComponentBoundEvent_198_OnButtonPressedEvent__DelegateSignature
	 */
	struct UUMG_LiquidMemoryAccumlulateItem_C_BndEvt__SBButton_Minus_K2Node_ComponentBoundEvent_198_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryAccumlulateItem.UMG_LiquidMemoryAccumlulateItem_C.BndEvt__SBButton_Plus_K2Node_ComponentBoundEvent_53_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UUMG_LiquidMemoryAccumlulateItem_C_BndEvt__SBButton_Plus_K2Node_ComponentBoundEvent_53_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryAccumlulateItem.UMG_LiquidMemoryAccumlulateItem_C.StartRepeatPlus
	 */
	struct UUMG_LiquidMemoryAccumlulateItem_C_StartRepeatPlus_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryAccumlulateItem.UMG_LiquidMemoryAccumlulateItem_C.NumberPlus
	 */
	struct UUMG_LiquidMemoryAccumlulateItem_C_NumberPlus_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryAccumlulateItem.UMG_LiquidMemoryAccumlulateItem_C.BndEvt__SBButton_Plus_K2Node_ComponentBoundEvent_219_OnButtonPressedEvent__DelegateSignature
	 */
	struct UUMG_LiquidMemoryAccumlulateItem_C_BndEvt__SBButton_Plus_K2Node_ComponentBoundEvent_219_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryAccumlulateItem.UMG_LiquidMemoryAccumlulateItem_C.ExecuteUbergraph_UMG_LiquidMemoryAccumlulateItem
	 */
	struct UUMG_LiquidMemoryAccumlulateItem_C_ExecuteUbergraph_UMG_LiquidMemoryAccumlulateItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_LiquidMemoryAccumlulateItem.UMG_LiquidMemoryAccumlulateItem_C.OnUseTokenNumChanged__DelegateSignature
	 */
	struct UUMG_LiquidMemoryAccumlulateItem_C_OnUseTokenNumChanged__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
