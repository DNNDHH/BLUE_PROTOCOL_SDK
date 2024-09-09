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
	 * Function CmnBtn24.CmnBtn24_C.SetText
	 */
	struct UCmnBtn24_C_SetText_Params
	{
	public:
		class USBTextTableAsset*                                   InTextTable;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InTextId;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P4RA[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CmnBtn24.CmnBtn24_C.SetHoveredSoundId
	 */
	struct UCmnBtn24_C_SetHoveredSoundId_Params
	{
	public:
		ESystemSE                                                  InSoundId;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CmnBtn24.CmnBtn24_C.SetPressedSoundId
	 */
	struct UCmnBtn24_C_SetPressedSoundId_Params
	{
	public:
		ESystemSE                                                  InSoundId;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CmnBtn24.CmnBtn24_C.PreConstruct
	 */
	struct UCmnBtn24_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CmnBtn24.CmnBtn24_C.BndEvt__Btn01_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
	 */
	struct UCmnBtn24_C_BndEvt__Btn01_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CmnBtn24.CmnBtn24_C.BndEvt__Btn01_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature
	 */
	struct UCmnBtn24_C_BndEvt__Btn01_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CmnBtn24.CmnBtn24_C.BndEvt__Btn01_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCmnBtn24_C_BndEvt__Btn01_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CmnBtn24.CmnBtn24_C.ExecuteUbergraph_CmnBtn24
	 */
	struct UCmnBtn24_C_ExecuteUbergraph_CmnBtn24_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CmnBtn24.CmnBtn24_C.EventOnClicked__DelegateSignature
	 */
	struct UCmnBtn24_C_EventOnClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
