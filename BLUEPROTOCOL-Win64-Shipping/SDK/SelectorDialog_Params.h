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
	 * Function SelectorDialog.SelectorDialog_C.PreConstruct
	 */
	struct USelectorDialog_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SelectorDialog.SelectorDialog_C.Construct
	 */
	struct USelectorDialog_C_Construct_Params
	{	};

	/**
	 * Function SelectorDialog.SelectorDialog_C.BndEvt__Btn_OutBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct USelectorDialog_C_BndEvt__Btn_OutBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SelectorDialog.SelectorDialog_C.Close
	 */
	struct USelectorDialog_C_Close_Params
	{	};

	/**
	 * Function SelectorDialog.SelectorDialog_C.BndEvt__Btn_Decide_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct USelectorDialog_C_BndEvt__Btn_Decide_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SelectorDialog.SelectorDialog_C.StartSelectDialog
	 */
	struct USelectorDialog_C_StartSelectDialog_Params
	{
	public:
		bool                                                       Vertical;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7RSC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Desc;                                                    // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		TArray<class FString>                                      SelectItem;                                              // 0x0018(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    DefaultSelect;                                           // 0x0028(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      BtnWidth;                                                // 0x002C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       SelectOnClose;                                           // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SelectorDialog.SelectorDialog_C.OnSelectedItem
	 */
	struct USelectorDialog_C_OnSelectedItem_Params
	{
	public:
		class USelectorDialogBtn_C*                                Selected;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SelectNum;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectorDialog.SelectorDialog_C.OnUI_Cancel
	 */
	struct USelectorDialog_C_OnUI_Cancel_Params
	{	};

	/**
	 * Function SelectorDialog.SelectorDialog_C.Destruct
	 */
	struct USelectorDialog_C_Destruct_Params
	{	};

	/**
	 * Function SelectorDialog.SelectorDialog_C.BndEvt__Btn_Decide_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct USelectorDialog_C_BndEvt__Btn_Decide_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SelectorDialog.SelectorDialog_C.BndEvt__Btn_Decide_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 */
	struct USelectorDialog_C_BndEvt__Btn_Decide_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SelectorDialog.SelectorDialog_C.BndEvt__BtnClose_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 */
	struct USelectorDialog_C_BndEvt__BtnClose_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SelectorDialog.SelectorDialog_C.BndEvt__BtnClose_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct USelectorDialog_C_BndEvt__BtnClose_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SelectorDialog.SelectorDialog_C.BndEvt__BtnClose_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
	 */
	struct USelectorDialog_C_BndEvt__BtnClose_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SelectorDialog.SelectorDialog_C.AutoSelect
	 */
	struct USelectorDialog_C_AutoSelect_Params
	{	};

	/**
	 * Function SelectorDialog.SelectorDialog_C.BndEvt__SelectorDialog_CmnClose01_K2Node_ComponentBoundEvent_7_OnClosed__DelegateSignature
	 */
	struct USelectorDialog_C_BndEvt__SelectorDialog_CmnClose01_K2Node_ComponentBoundEvent_7_OnClosed__DelegateSignature_Params
	{	};

	/**
	 * Function SelectorDialog.SelectorDialog_C.ExecuteUbergraph_SelectorDialog
	 */
	struct USelectorDialog_C_ExecuteUbergraph_SelectorDialog_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectorDialog.SelectorDialog_C.OnCanceled__DelegateSignature
	 */
	struct USelectorDialog_C_OnCanceled__DelegateSignature_Params
	{	};

	/**
	 * Function SelectorDialog.SelectorDialog_C.OnSelected__DelegateSignature
	 */
	struct USelectorDialog_C_OnSelected__DelegateSignature_Params
	{
	public:
		int32_t                                                    Selected;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
