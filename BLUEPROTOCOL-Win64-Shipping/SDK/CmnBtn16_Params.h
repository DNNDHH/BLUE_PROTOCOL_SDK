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
	 * Function CmnBtn16.CmnBtn16_C.SetText
	 */
	struct UCmnBtn16_C_SetText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CmnBtn16.CmnBtn16_C.Set Sound ID
	 */
	struct UCmnBtn16_C_SetSoundID_Params
	{
	public:
		ESystemSE                                                  SoundId;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CmnBtn16.CmnBtn16_C.SetTextName
	 */
	struct UCmnBtn16_C_SetTextName_Params
	{
	public:
		class FName                                                InTextName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CmnBtn16.CmnBtn16_C.SetTextId
	 */
	struct UCmnBtn16_C_SetTextId_Params
	{
	public:
		int32_t                                                    TextId;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CmnBtn16.CmnBtn16_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_113_OnButtonHoverEvent__DelegateSignature
	 */
	struct UCmnBtn16_C_BndEvt__Btn1_K2Node_ComponentBoundEvent_113_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CmnBtn16.CmnBtn16_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_130_OnButtonHoverEvent__DelegateSignature
	 */
	struct UCmnBtn16_C_BndEvt__Btn1_K2Node_ComponentBoundEvent_130_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CmnBtn16.CmnBtn16_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_140_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCmnBtn16_C_BndEvt__Btn1_K2Node_ComponentBoundEvent_140_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CmnBtn16.CmnBtn16_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 */
	struct UCmnBtn16_C_BndEvt__Btn1_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CmnBtn16.CmnBtn16_C.PreConstruct
	 */
	struct UCmnBtn16_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CmnBtn16.CmnBtn16_C.Initialize Hoverd
	 */
	struct UCmnBtn16_C_InitializeHoverd_Params
	{	};

	/**
	 * Function CmnBtn16.CmnBtn16_C.SetClickInputAction
	 */
	struct UCmnBtn16_C_SetClickInputAction_Params
	{
	public:
		class FName                                                ActionName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CmnBtn16.CmnBtn16_C.PressedButtonFunction
	 */
	struct UCmnBtn16_C_PressedButtonFunction_Params
	{	};

	/**
	 * Function CmnBtn16.CmnBtn16_C.StopClickInputAction
	 */
	struct UCmnBtn16_C_StopClickInputAction_Params
	{	};

	/**
	 * Function CmnBtn16.CmnBtn16_C.UpdateText
	 */
	struct UCmnBtn16_C_UpdateText_Params
	{	};

	/**
	 * Function CmnBtn16.CmnBtn16_C.Construct
	 */
	struct UCmnBtn16_C_Construct_Params
	{	};

	/**
	 * Function CmnBtn16.CmnBtn16_C.CustomEvent_2
	 */
	struct UCmnBtn16_C_CustomEvent_2_Params
	{
	public:
		ESBPadKeySkinType                                          SkinType;                                                // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CmnBtn16.CmnBtn16_C.Destruct
	 */
	struct UCmnBtn16_C_Destruct_Params
	{	};

	/**
	 * Function CmnBtn16.CmnBtn16_C.CustomEvent_3
	 */
	struct UCmnBtn16_C_CustomEvent_3_Params
	{	};

	/**
	 * Function CmnBtn16.CmnBtn16_C.ShowCancelKey
	 */
	struct UCmnBtn16_C_ShowCancelKey_Params
	{
	public:
		bool                                                       bShowCancelKey;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CmnBtn16.CmnBtn16_C.ExecuteUbergraph_CmnBtn16
	 */
	struct UCmnBtn16_C_ExecuteUbergraph_CmnBtn16_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CmnBtn16.CmnBtn16_C.EventOnClicked__DelegateSignature
	 */
	struct UCmnBtn16_C_EventOnClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
