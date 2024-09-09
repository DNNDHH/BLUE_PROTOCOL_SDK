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
	 * Function WBP_FilterSelecterWindow.WBP_FilterSelecterWindow_C.PlayAnimOut
	 */
	struct UWBP_FilterSelecterWindow_C_PlayAnimOut_Params
	{	};

	/**
	 * Function WBP_FilterSelecterWindow.WBP_FilterSelecterWindow_C.PlayAnimIn
	 */
	struct UWBP_FilterSelecterWindow_C_PlayAnimIn_Params
	{	};

	/**
	 * Function WBP_FilterSelecterWindow.WBP_FilterSelecterWindow_C.SetWindowPosition
	 */
	struct UWBP_FilterSelecterWindow_C_SetWindowPosition_Params
	{
	public:
		struct FVector2D                                           InPosition;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_FilterSelecterWindow.WBP_FilterSelecterWindow_C.ChangeFilterType
	 */
	struct UWBP_FilterSelecterWindow_C_ChangeFilterType_Params
	{
	public:
		EFilter_Type                                               FilterType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_FilterSelecterWindow.WBP_FilterSelecterWindow_C.PreConstruct
	 */
	struct UWBP_FilterSelecterWindow_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_FilterSelecterWindow.WBP_FilterSelecterWindow_C.Construct
	 */
	struct UWBP_FilterSelecterWindow_C_Construct_Params
	{	};

	/**
	 * Function WBP_FilterSelecterWindow.WBP_FilterSelecterWindow_C.BndEvt__FilterSelector_K2Node_ComponentBoundEvent_0_OnFilterApply__DelegateSignature
	 */
	struct UWBP_FilterSelecterWindow_C_BndEvt__FilterSelector_K2Node_ComponentBoundEvent_0_OnFilterApply__DelegateSignature_Params
	{
	public:
		TArray<struct FFilterGroup>                                Filters;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_FilterSelecterWindow.WBP_FilterSelecterWindow_C.BndEvt__FilterSelector_K2Node_ComponentBoundEvent_1_OnClose__DelegateSignature
	 */
	struct UWBP_FilterSelecterWindow_C_BndEvt__FilterSelector_K2Node_ComponentBoundEvent_1_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_FilterSelecterWindow.WBP_FilterSelecterWindow_C.BndEvt__SBButtonTransparent_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_FilterSelecterWindow_C_BndEvt__SBButtonTransparent_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_FilterSelecterWindow.WBP_FilterSelecterWindow_C.OnPress_Cancel
	 */
	struct UWBP_FilterSelecterWindow_C_OnPress_Cancel_Params
	{	};

	/**
	 * Function WBP_FilterSelecterWindow.WBP_FilterSelecterWindow_C.ExecuteUbergraph_WBP_FilterSelecterWindow
	 */
	struct UWBP_FilterSelecterWindow_C_ExecuteUbergraph_WBP_FilterSelecterWindow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_FilterSelecterWindow.WBP_FilterSelecterWindow_C.OnFilterApply__DelegateSignature
	 */
	struct UWBP_FilterSelecterWindow_C_OnFilterApply__DelegateSignature_Params
	{
	public:
		TArray<struct FFilterGroup>                                Filters;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_FilterSelecterWindow.WBP_FilterSelecterWindow_C.OnClose__DelegateSignature
	 */
	struct UWBP_FilterSelecterWindow_C_OnClose__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
