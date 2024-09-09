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
	 * Function BP_TextInputDialog.BP_TextInputDialog_C.SetHint
	 */
	struct UBP_TextInputDialog_C_SetHint_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_TextInputDialog.BP_TextInputDialog_C.SetInitializeInput
	 */
	struct UBP_TextInputDialog_C_SetInitializeInput_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_TextInputDialog.BP_TextInputDialog_C.SetNgWordCheck
	 */
	struct UBP_TextInputDialog_C_SetNgWordCheck_Params
	{
	public:
		bool                                                       CheckNgWord;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_TextInputDialog.BP_TextInputDialog_C.SetMaxInput
	 */
	struct UBP_TextInputDialog_C_SetMaxInput_Params
	{
	public:
		int32_t                                                    MaxLength;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TextInputDialog.BP_TextInputDialog_C.SetMinInput
	 */
	struct UBP_TextInputDialog_C_SetMinInput_Params
	{
	public:
		int32_t                                                    MinLength;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TextInputDialog.BP_TextInputDialog_C.Construct
	 */
	struct UBP_TextInputDialog_C_Construct_Params
	{	};

	/**
	 * Function BP_TextInputDialog.BP_TextInputDialog_C.Destruct
	 */
	struct UBP_TextInputDialog_C_Destruct_Params
	{	};

	/**
	 * Function BP_TextInputDialog.BP_TextInputDialog_C.Hide
	 */
	struct UBP_TextInputDialog_C_Hide_Params
	{	};

	/**
	 * Function BP_TextInputDialog.BP_TextInputDialog_C.OnAnimationFinished
	 */
	struct UBP_TextInputDialog_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TextInputDialog.BP_TextInputDialog_C.Start InputDialog
	 */
	struct UBP_TextInputDialog_C_StartInputDialog_Params
	{
	public:
		class FText                                                Message;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_TextInputDialog.BP_TextInputDialog_C.ChangeText
	 */
	struct UBP_TextInputDialog_C_ChangeText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_TextInputDialog.BP_TextInputDialog_C.BndEvt__InputTxt_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
	 */
	struct UBP_TextInputDialog_C_BndEvt__InputTxt_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_TextInputDialog.BP_TextInputDialog_C.BndEvt__BtnOk_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature
	 */
	struct UBP_TextInputDialog_C_BndEvt__BtnOk_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BP_TextInputDialog.BP_TextInputDialog_C.BndEvt__BP_TextInputDialog_CmnClose02_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature
	 */
	struct UBP_TextInputDialog_C_BndEvt__BP_TextInputDialog_CmnClose02_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_TextInputDialog.BP_TextInputDialog_C.BndEvt__BP_TextInputDialog_ButtonFullScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_TextInputDialog_C_BndEvt__BP_TextInputDialog_ButtonFullScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_TextInputDialog.BP_TextInputDialog_C.UI_Cancel
	 */
	struct UBP_TextInputDialog_C_UI_Cancel_Params
	{	};

	/**
	 * Function BP_TextInputDialog.BP_TextInputDialog_C.ExecuteUbergraph_BP_TextInputDialog
	 */
	struct UBP_TextInputDialog_C_ExecuteUbergraph_BP_TextInputDialog_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3588[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_TextInputDialog.BP_TextInputDialog_C.OnClose__DelegateSignature
	 */
	struct UBP_TextInputDialog_C_OnClose__DelegateSignature_Params
	{
	public:
		EDialogResult                                              OnButton;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_X6Y4[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                InputText;                                               // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
