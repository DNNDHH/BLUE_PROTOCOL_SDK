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
	 * Function CmnSearch1.CmnSearch1_C.GetSearchText
	 */
	struct UCmnSearch1_C_GetSearchText_Params
	{
	public:
		class FString                                              SearchText;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function CmnSearch1.CmnSearch1_C.ClearText
	 */
	struct UCmnSearch1_C_ClearText_Params
	{	};

	/**
	 * Function CmnSearch1.CmnSearch1_C.BndEvt__TextBoxPlayerName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
	 */
	struct UCmnSearch1_C_BndEvt__TextBoxPlayerName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function CmnSearch1.CmnSearch1_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_223_OnButtonHoverEvent__DelegateSignature
	 */
	struct UCmnSearch1_C_BndEvt__ResetButton_K2Node_ComponentBoundEvent_223_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CmnSearch1.CmnSearch1_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_246_OnButtonHoverEvent__DelegateSignature
	 */
	struct UCmnSearch1_C_BndEvt__ResetButton_K2Node_ComponentBoundEvent_246_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CmnSearch1.CmnSearch1_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_267_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCmnSearch1_C_BndEvt__ResetButton_K2Node_ComponentBoundEvent_267_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CmnSearch1.CmnSearch1_C.SetHintWithText
	 */
	struct UCmnSearch1_C_SetHintWithText_Params
	{
	public:
		class FText                                                Message;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CmnSearch1.CmnSearch1_C.ExecuteUbergraph_CmnSearch1
	 */
	struct UCmnSearch1_C_ExecuteUbergraph_CmnSearch1_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CLEG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CmnSearch1.CmnSearch1_C.OnTextChange__DelegateSignature
	 */
	struct UCmnSearch1_C_OnTextChange__DelegateSignature_Params
	{
	public:
		class FText                                                newText;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
