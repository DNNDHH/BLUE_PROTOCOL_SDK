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
	 * Function CmnBtn20.CmnBtn20_C.SetText
	 */
	struct UCmnBtn20_C_SetText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CmnBtn20.CmnBtn20_C.SetSoundID
	 */
	struct UCmnBtn20_C_SetSoundID_Params
	{
	public:
		ESystemSE                                                  SoundId;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CmnBtn20.CmnBtn20_C.SetTextName
	 */
	struct UCmnBtn20_C_SetTextName_Params
	{
	public:
		class FName                                                InTextName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CmnBtn20.CmnBtn20_C.SetTextId
	 */
	struct UCmnBtn20_C_SetTextId_Params
	{
	public:
		int32_t                                                    TextId;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4C0B[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CmnBtn20.CmnBtn20_C.PreConstruct
	 */
	struct UCmnBtn20_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CmnBtn20.CmnBtn20_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_113_OnButtonHoverEvent__DelegateSignature
	 */
	struct UCmnBtn20_C_BndEvt__Btn1_K2Node_ComponentBoundEvent_113_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CmnBtn20.CmnBtn20_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_130_OnButtonHoverEvent__DelegateSignature
	 */
	struct UCmnBtn20_C_BndEvt__Btn1_K2Node_ComponentBoundEvent_130_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CmnBtn20.CmnBtn20_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_140_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCmnBtn20_C_BndEvt__Btn1_K2Node_ComponentBoundEvent_140_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CmnBtn20.CmnBtn20_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 */
	struct UCmnBtn20_C_BndEvt__Btn1_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CmnBtn20.CmnBtn20_C.ExecuteUbergraph_CmnBtn20
	 */
	struct UCmnBtn20_C_ExecuteUbergraph_CmnBtn20_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CmnBtn20.CmnBtn20_C.EventOnClicked__DelegateSignature
	 */
	struct UCmnBtn20_C_EventOnClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
