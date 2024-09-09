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
	 * Function ImagineSelect.ImagineSelect_C.ApplyImagineType
	 */
	struct UImagineSelect_C_ApplyImagineType_Params
	{
	public:
		struct FOwnItemInfo                                        ItemData;                                                // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ImagineSelect.ImagineSelect_C.Terminate
	 */
	struct UImagineSelect_C_Terminate_Params
	{	};

	/**
	 * Function ImagineSelect.ImagineSelect_C.Initialize
	 */
	struct UImagineSelect_C_Initialize_Params
	{	};

	/**
	 * Function ImagineSelect.ImagineSelect_C.Destruct
	 */
	struct UImagineSelect_C_Destruct_Params
	{	};

	/**
	 * Function ImagineSelect.ImagineSelect_C.RequestClose
	 */
	struct UImagineSelect_C_RequestClose_Params
	{	};

	/**
	 * Function ImagineSelect.ImagineSelect_C.WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_2
	 */
	struct UImagineSelect_C_WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_2_Params
	{	};

	/**
	 * Function ImagineSelect.ImagineSelect_C.End
	 */
	struct UImagineSelect_C_End_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ImagineSelect.ImagineSelect_C.BndEvt__WeaponSelect_SelectGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature
	 */
	struct UImagineSelect_C_BndEvt__WeaponSelect_SelectGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature_Params
	{
	public:
		struct FOwnItemInfo                                        SelectItem;                                              // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ImagineSelect.ImagineSelect_C.Construct
	 */
	struct UImagineSelect_C_Construct_Params
	{	};

	/**
	 * Function ImagineSelect.ImagineSelect_C.BndEvt__ImagineSelect_CmnClose03_K2Node_ComponentBoundEvent_5_OnClosed__DelegateSignature
	 */
	struct UImagineSelect_C_BndEvt__ImagineSelect_CmnClose03_K2Node_ComponentBoundEvent_5_OnClosed__DelegateSignature_Params
	{	};

	/**
	 * Function ImagineSelect.ImagineSelect_C.BndEvt__ImagineSelect_Btn_Selected_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UImagineSelect_C_BndEvt__ImagineSelect_Btn_Selected_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ImagineSelect.ImagineSelect_C.PreConstruct
	 */
	struct UImagineSelect_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ImagineSelect.ImagineSelect_C.Event On Begin Selected Imagine
	 */
	struct UImagineSelect_C_EventOnBeginSelectedImagine_Params
	{	};

	/**
	 * Function ImagineSelect.ImagineSelect_C.Event On Abort Selected Imagine
	 */
	struct UImagineSelect_C_EventOnAbortSelectedImagine_Params
	{	};

	/**
	 * Function ImagineSelect.ImagineSelect_C.Event On End Selected Imagine
	 */
	struct UImagineSelect_C_EventOnEndSelectedImagine_Params
	{	};

	/**
	 * Function ImagineSelect.ImagineSelect_C.ExecuteUbergraph_ImagineSelect
	 */
	struct UImagineSelect_C_ExecuteUbergraph_ImagineSelect_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JH7E[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ImagineSelect.ImagineSelect_C.OnClose__DelegateSignature
	 */
	struct UImagineSelect_C_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function ImagineSelect.ImagineSelect_C.ImagineSelectApply__DelegateSignature
	 */
	struct UImagineSelect_C_ImagineSelectApply__DelegateSignature_Params
	{
	public:
		struct FOwnItemInfo                                        ItemInfo;                                                // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
