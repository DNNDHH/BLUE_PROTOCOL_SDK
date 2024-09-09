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
	 * Function HudPresetSelect.HudPresetSelect_C.LoadCustomSaveName
	 */
	struct UHudPresetSelect_C_LoadCustomSaveName_Params
	{	};

	/**
	 * Function HudPresetSelect.HudPresetSelect_C.PreConstruct
	 */
	struct UHudPresetSelect_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HudPresetSelect.HudPresetSelect_C.Construct
	 */
	struct UHudPresetSelect_C_Construct_Params
	{	};

	/**
	 * Function HudPresetSelect.HudPresetSelect_C.Destruct
	 */
	struct UHudPresetSelect_C_Destruct_Params
	{	};

	/**
	 * Function HudPresetSelect.HudPresetSelect_C.BndEvt__BtnPreset1_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 */
	struct UHudPresetSelect_C_BndEvt__BtnPreset1_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function HudPresetSelect.HudPresetSelect_C.BndEvt__BtnPreset2_K2Node_ComponentBoundEvent_8_EventOnClicked__DelegateSignature
	 */
	struct UHudPresetSelect_C_BndEvt__BtnPreset2_K2Node_ComponentBoundEvent_8_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function HudPresetSelect.HudPresetSelect_C.BndEvt__BtnPreset3_K2Node_ComponentBoundEvent_9_EventOnClicked__DelegateSignature
	 */
	struct UHudPresetSelect_C_BndEvt__BtnPreset3_K2Node_ComponentBoundEvent_9_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function HudPresetSelect.HudPresetSelect_C.BndEvt__BtnCancel_K2Node_ComponentBoundEvent_10_EventOnClicked__DelegateSignature
	 */
	struct UHudPresetSelect_C_BndEvt__BtnCancel_K2Node_ComponentBoundEvent_10_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function HudPresetSelect.HudPresetSelect_C.BndEvt__BtnCS1_K2Node_ComponentBoundEvent_11_EventOnClicked__DelegateSignature
	 */
	struct UHudPresetSelect_C_BndEvt__BtnCS1_K2Node_ComponentBoundEvent_11_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function HudPresetSelect.HudPresetSelect_C.BndEvt__BtnCS2_K2Node_ComponentBoundEvent_12_EventOnClicked__DelegateSignature
	 */
	struct UHudPresetSelect_C_BndEvt__BtnCS2_K2Node_ComponentBoundEvent_12_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function HudPresetSelect.HudPresetSelect_C.BndEvt__BtnCS3_K2Node_ComponentBoundEvent_13_EventOnClicked__DelegateSignature
	 */
	struct UHudPresetSelect_C_BndEvt__BtnCS3_K2Node_ComponentBoundEvent_13_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function HudPresetSelect.HudPresetSelect_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1
	 */
	struct UHudPresetSelect_C_WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function HudPresetSelect.HudPresetSelect_C.PlayCloseAnimation
	 */
	struct UHudPresetSelect_C_PlayCloseAnimation_Params
	{	};

	/**
	 * Function HudPresetSelect.HudPresetSelect_C.WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_2
	 */
	struct UHudPresetSelect_C_WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_2_Params
	{	};

	/**
	 * Function HudPresetSelect.HudPresetSelect_C.RequestClose
	 */
	struct UHudPresetSelect_C_RequestClose_Params
	{	};

	/**
	 * Function HudPresetSelect.HudPresetSelect_C.ExecuteUbergraph_HudPresetSelect
	 */
	struct UHudPresetSelect_C_ExecuteUbergraph_HudPresetSelect_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HudPresetSelect.HudPresetSelect_C.OnClose__DelegateSignature
	 */
	struct UHudPresetSelect_C_OnClose__DelegateSignature_Params
	{
	public:
		bool                                                       bIsCancel;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HudPresetSelect.HudPresetSelect_C.LoadCustomSlot__DelegateSignature
	 */
	struct UHudPresetSelect_C_LoadCustomSlot__DelegateSignature_Params
	{
	public:
		ESBCustomHudLayoutSlot                                     LoadCustomSlot;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HudPresetSelect.HudPresetSelect_C.ApplyPreset__DelegateSignature
	 */
	struct UHudPresetSelect_C_ApplyPreset__DelegateSignature_Params
	{
	public:
		ELayoutPresetTypes                                         eLayoutPreset;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
