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
	 * Function HudCustomMenu.HudCustomMenu_C.SetApplyButtonEnabled
	 */
	struct UHudCustomMenu_C_SetApplyButtonEnabled_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HudCustomMenu.HudCustomMenu_C.Construct
	 */
	struct UHudCustomMenu_C_Construct_Params
	{	};

	/**
	 * Function HudCustomMenu.HudCustomMenu_C.Destruct
	 */
	struct UHudCustomMenu_C_Destruct_Params
	{	};

	/**
	 * Function HudCustomMenu.HudCustomMenu_C.BndEvt__BtnCancel_K2Node_ComponentBoundEvent_10_EventOnClicked__DelegateSignature
	 */
	struct UHudCustomMenu_C_BndEvt__BtnCancel_K2Node_ComponentBoundEvent_10_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function HudCustomMenu.HudCustomMenu_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1
	 */
	struct UHudCustomMenu_C_WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function HudCustomMenu.HudCustomMenu_C.BndEvt__HudCustomMenu_BtnAppli_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 */
	struct UHudCustomMenu_C_BndEvt__HudCustomMenu_BtnAppli_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function HudCustomMenu.HudCustomMenu_C.BndEvt__HudCustomMenu_BtnContinue_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
	 */
	struct UHudCustomMenu_C_BndEvt__HudCustomMenu_BtnContinue_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function HudCustomMenu.HudCustomMenu_C.ExecuteUbergraph_HudCustomMenu
	 */
	struct UHudCustomMenu_C_ExecuteUbergraph_HudCustomMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GFV8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function HudCustomMenu.HudCustomMenu_C.OnApplied__DelegateSignature
	 */
	struct UHudCustomMenu_C_OnApplied__DelegateSignature_Params
	{	};

	/**
	 * Function HudCustomMenu.HudCustomMenu_C.OnClose__DelegateSignature
	 */
	struct UHudCustomMenu_C_OnClose__DelegateSignature_Params
	{
	public:
		bool                                                       bIsCancel;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
