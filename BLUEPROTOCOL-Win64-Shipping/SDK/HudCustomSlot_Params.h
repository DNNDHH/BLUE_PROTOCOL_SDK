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
	 * Function HudCustomSlot.HudCustomSlot_C.GenerateTexts
	 */
	struct UHudCustomSlot_C_GenerateTexts_Params
	{	};

	/**
	 * Function HudCustomSlot.HudCustomSlot_C.CollectBtnTxt
	 */
	struct UHudCustomSlot_C_CollectBtnTxt_Params
	{	};

	/**
	 * Function HudCustomSlot.HudCustomSlot_C.PreConstruct
	 */
	struct UHudCustomSlot_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HudCustomSlot.HudCustomSlot_C.Construct
	 */
	struct UHudCustomSlot_C_Construct_Params
	{	};

	/**
	 * Function HudCustomSlot.HudCustomSlot_C.OnTextInputed
	 */
	struct UHudCustomSlot_C_OnTextInputed_Params
	{
	public:
		EDialogResult                                              OnButton;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D96S[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                InputText;                                               // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function HudCustomSlot.HudCustomSlot_C.BndEvt__Btn_Cancel_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UHudCustomSlot_C_BndEvt__Btn_Cancel_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function HudCustomSlot.HudCustomSlot_C.OnPress_Cancel
	 */
	struct UHudCustomSlot_C_OnPress_Cancel_Params
	{	};

	/**
	 * Function HudCustomSlot.HudCustomSlot_C.Destruct
	 */
	struct UHudCustomSlot_C_Destruct_Params
	{	};

	/**
	 * Function HudCustomSlot.HudCustomSlot_C.BndEvt__Btn_CS1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UHudCustomSlot_C_BndEvt__Btn_CS1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function HudCustomSlot.HudCustomSlot_C.BndEvt__Btn_CS2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 */
	struct UHudCustomSlot_C_BndEvt__Btn_CS2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function HudCustomSlot.HudCustomSlot_C.BndEvt__Btn_CS3_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 */
	struct UHudCustomSlot_C_BndEvt__Btn_CS3_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function HudCustomSlot.HudCustomSlot_C.ExecuteUbergraph_HudCustomSlot
	 */
	struct UHudCustomSlot_C_ExecuteUbergraph_HudCustomSlot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HudCustomSlot.HudCustomSlot_C.RequestSave__DelegateSignature
	 */
	struct UHudCustomSlot_C_RequestSave__DelegateSignature_Params
	{
	public:
		ESBCustomHudLayoutSlot                                     Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
