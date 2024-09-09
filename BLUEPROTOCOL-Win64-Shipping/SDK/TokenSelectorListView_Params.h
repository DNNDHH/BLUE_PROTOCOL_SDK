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
	 * Function TokenSelectorListView.TokenSelectorListView_C.SetCraftCount
	 */
	struct UTokenSelectorListView_C_SetCraftCount_Params
	{
	public:
		int32_t                                                    CraftCount;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TokenSelectorListView.TokenSelectorListView_C.SetResepiData
	 */
	struct UTokenSelectorListView_C_SetResepiData_Params
	{
	public:
		struct FCraftMasterData                                    RecepiData;                                              // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function TokenSelectorListView.TokenSelectorListView_C.UpdateCheck
	 */
	struct UTokenSelectorListView_C_UpdateCheck_Params
	{
	public:
		class UTokenSelectorListItem_C*                            OnSelect;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TokenSelectorListView.TokenSelectorListView_C.Initialize
	 */
	struct UTokenSelectorListView_C_Initialize_Params
	{	};

	/**
	 * Function TokenSelectorListView.TokenSelectorListView_C.Construct
	 */
	struct UTokenSelectorListView_C_Construct_Params
	{	};

	/**
	 * Function TokenSelectorListView.TokenSelectorListView_C.OnSelectTicket
	 */
	struct UTokenSelectorListView_C_OnSelectTicket_Params
	{
	public:
		class UTokenSelectorListItem_C*                            Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TokenSelectorListView.TokenSelectorListView_C.Close
	 */
	struct UTokenSelectorListView_C_Close_Params
	{	};

	/**
	 * Function TokenSelectorListView.TokenSelectorListView_C.BndEvt__TokenSelectorListView_Btn_Close_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UTokenSelectorListView_C_BndEvt__TokenSelectorListView_Btn_Close_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function TokenSelectorListView.TokenSelectorListView_C.SetWindowPosition
	 */
	struct UTokenSelectorListView_C_SetWindowPosition_Params
	{
	public:
		struct FVector2D                                           InPosition;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TokenSelectorListView.TokenSelectorListView_C.Set Window Alignment
	 */
	struct UTokenSelectorListView_C_SetWindowAlignment_Params
	{
	public:
		struct FVector2D                                           InAlignment;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TokenSelectorListView.TokenSelectorListView_C.BndEvt__TokenSelectorListView_CmnClose02_K2Node_ComponentBoundEvent_3_OnClosed__DelegateSignature
	 */
	struct UTokenSelectorListView_C_BndEvt__TokenSelectorListView_CmnClose02_K2Node_ComponentBoundEvent_3_OnClosed__DelegateSignature_Params
	{	};

	/**
	 * Function TokenSelectorListView.TokenSelectorListView_C.BndEvt__TokenSelectorListView_CmnBtn16_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature
	 */
	struct UTokenSelectorListView_C_BndEvt__TokenSelectorListView_CmnBtn16_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function TokenSelectorListView.TokenSelectorListView_C.OnPressCancel
	 */
	struct UTokenSelectorListView_C_OnPressCancel_Params
	{	};

	/**
	 * Function TokenSelectorListView.TokenSelectorListView_C.Destruct
	 */
	struct UTokenSelectorListView_C_Destruct_Params
	{	};

	/**
	 * Function TokenSelectorListView.TokenSelectorListView_C.WidgetAnimationEvt_InAnim_K2Node_WidgetAnimationEvent_1
	 */
	struct UTokenSelectorListView_C_WidgetAnimationEvt_InAnim_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function TokenSelectorListView.TokenSelectorListView_C.ExecuteUbergraph_TokenSelectorListView
	 */
	struct UTokenSelectorListView_C_ExecuteUbergraph_TokenSelectorListView_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TokenSelectorListView.TokenSelectorListView_C.OnSelectClose__DelegateSignature
	 */
	struct UTokenSelectorListView_C_OnSelectClose__DelegateSignature_Params
	{
	public:
		int32_t                                                    TokenID;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TokenSelectorListView.TokenSelectorListView_C.OnClose__DelegateSignature
	 */
	struct UTokenSelectorListView_C_OnClose__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
