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
	 * Function MountSelect.MountSelect_C.UpdateSelectBtn
	 */
	struct UMountSelect_C_UpdateSelectBtn_Params
	{	};

	/**
	 * Function MountSelect.MountSelect_C.Terminate
	 */
	struct UMountSelect_C_Terminate_Params
	{	};

	/**
	 * Function MountSelect.MountSelect_C.Initialize
	 */
	struct UMountSelect_C_Initialize_Params
	{	};

	/**
	 * Function MountSelect.MountSelect_C.Unbind Close UI_Cancel
	 */
	struct UMountSelect_C_UnbindCloseUI_Cancel_Params
	{	};

	/**
	 * Function MountSelect.MountSelect_C.Construct
	 */
	struct UMountSelect_C_Construct_Params
	{	};

	/**
	 * Function MountSelect.MountSelect_C.BndEvt__WeaponSelect_SelectGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature
	 */
	struct UMountSelect_C_BndEvt__WeaponSelect_SelectGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature_Params
	{
	public:
		struct FOwnItemInfo                                        SelectItem;                                              // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function MountSelect.MountSelect_C.Destruct
	 */
	struct UMountSelect_C_Destruct_Params
	{	};

	/**
	 * Function MountSelect.MountSelect_C.RequestClose
	 */
	struct UMountSelect_C_RequestClose_Params
	{	};

	/**
	 * Function MountSelect.MountSelect_C.WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_2
	 */
	struct UMountSelect_C_WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_2_Params
	{	};

	/**
	 * Function MountSelect.MountSelect_C.End
	 */
	struct UMountSelect_C_End_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MountSelect.MountSelect_C.Bind Close UI_Cancel
	 */
	struct UMountSelect_C_BindCloseUI_Cancel_Params
	{	};

	/**
	 * Function MountSelect.MountSelect_C.BndEvt__MountSelect_CmnClose03_K2Node_ComponentBoundEvent_5_OnClosed__DelegateSignature
	 */
	struct UMountSelect_C_BndEvt__MountSelect_CmnClose03_K2Node_ComponentBoundEvent_5_OnClosed__DelegateSignature_Params
	{	};

	/**
	 * Function MountSelect.MountSelect_C.BndEvt__MountSelect_Btn_Selected_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UMountSelect_C_BndEvt__MountSelect_Btn_Selected_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function MountSelect.MountSelect_C.Event On Begin Selected Mount
	 */
	struct UMountSelect_C_EventOnBeginSelectedMount_Params
	{	};

	/**
	 * Function MountSelect.MountSelect_C.Event On Abort Selected Mount
	 */
	struct UMountSelect_C_EventOnAbortSelectedMount_Params
	{	};

	/**
	 * Function MountSelect.MountSelect_C.Event On End Selected Mount
	 */
	struct UMountSelect_C_EventOnEndSelectedMount_Params
	{	};

	/**
	 * Function MountSelect.MountSelect_C.ExecuteUbergraph_MountSelect
	 */
	struct UMountSelect_C_ExecuteUbergraph_MountSelect_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LMZV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MountSelect.MountSelect_C.OnClose__DelegateSignature
	 */
	struct UMountSelect_C_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function MountSelect.MountSelect_C.ImagineSelectApply__DelegateSignature
	 */
	struct UMountSelect_C_ImagineSelectApply__DelegateSignature_Params
	{
	public:
		struct FOwnItemInfo                                        ItemInfo;                                                // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
