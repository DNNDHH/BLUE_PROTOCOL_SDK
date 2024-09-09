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
	 * Function SoftwareNumericKeypad.SoftwareNumericKeypad_C.SetRole
	 */
	struct USoftwareNumericKeypad_C_SetRole_Params
	{
	public:
		ESecondPasswordSenderStartType                             InRole;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SoftwareNumericKeypad.SoftwareNumericKeypad_C.SetMode
	 */
	struct USoftwareNumericKeypad_C_SetMode_Params
	{
	public:
		bool                                                       HidePassword;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SoftwareNumericKeypad.SoftwareNumericKeypad_C.SetTextDigit
	 */
	struct USoftwareNumericKeypad_C_SetTextDigit_Params
	{	};

	/**
	 * Function SoftwareNumericKeypad.SoftwareNumericKeypad_C.ClearPassword
	 */
	struct USoftwareNumericKeypad_C_ClearPassword_Params
	{	};

	/**
	 * Function SoftwareNumericKeypad.SoftwareNumericKeypad_C.UpdateButtonState
	 */
	struct USoftwareNumericKeypad_C_UpdateButtonState_Params
	{	};

	/**
	 * Function SoftwareNumericKeypad.SoftwareNumericKeypad_C.GetPassword
	 */
	struct USoftwareNumericKeypad_C_GetPassword_Params
	{
	public:
		class FString                                              Password;                                                // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SoftwareNumericKeypad.SoftwareNumericKeypad_C.SetTextInput
	 */
	struct USoftwareNumericKeypad_C_SetTextInput_Params
	{	};

	/**
	 * Function SoftwareNumericKeypad.SoftwareNumericKeypad_C.DeleteLastNumber
	 */
	struct USoftwareNumericKeypad_C_DeleteLastNumber_Params
	{	};

	/**
	 * Function SoftwareNumericKeypad.SoftwareNumericKeypad_C.InputNumber
	 */
	struct USoftwareNumericKeypad_C_InputNumber_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JH3P[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SoftwareNumericKeypad.SoftwareNumericKeypad_C.GetText
	 */
	struct USoftwareNumericKeypad_C_GetText_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CDKH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTextBlock*                                          Text;                                                    // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SoftwareNumericKeypad.SoftwareNumericKeypad_C.SetNumber
	 */
	struct USoftwareNumericKeypad_C_SetNumber_Params
	{	};

	/**
	 * Function SoftwareNumericKeypad.SoftwareNumericKeypad_C.Construct
	 */
	struct USoftwareNumericKeypad_C_Construct_Params
	{	};

	/**
	 * Function SoftwareNumericKeypad.SoftwareNumericKeypad_C.BndEvt__Button_enter_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct USoftwareNumericKeypad_C_BndEvt__Button_enter_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SoftwareNumericKeypad.SoftwareNumericKeypad_C.BndEvt__Button_00_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct USoftwareNumericKeypad_C_BndEvt__Button_00_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SoftwareNumericKeypad.SoftwareNumericKeypad_C.BndEvt__Button_01_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct USoftwareNumericKeypad_C_BndEvt__Button_01_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SoftwareNumericKeypad.SoftwareNumericKeypad_C.BndEvt__Button_02_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct USoftwareNumericKeypad_C_BndEvt__Button_02_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SoftwareNumericKeypad.SoftwareNumericKeypad_C.BndEvt__Button_10_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 */
	struct USoftwareNumericKeypad_C_BndEvt__Button_10_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SoftwareNumericKeypad.SoftwareNumericKeypad_C.BndEvt__Button_11_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 */
	struct USoftwareNumericKeypad_C_BndEvt__Button_11_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SoftwareNumericKeypad.SoftwareNumericKeypad_C.BndEvt__Button_12_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
	 */
	struct USoftwareNumericKeypad_C_BndEvt__Button_12_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SoftwareNumericKeypad.SoftwareNumericKeypad_C.BndEvt__Button_20_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
	 */
	struct USoftwareNumericKeypad_C_BndEvt__Button_20_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SoftwareNumericKeypad.SoftwareNumericKeypad_C.BndEvt__Button_21_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
	 */
	struct USoftwareNumericKeypad_C_BndEvt__Button_21_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SoftwareNumericKeypad.SoftwareNumericKeypad_C.BndEvt__Button_22_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
	 */
	struct USoftwareNumericKeypad_C_BndEvt__Button_22_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SoftwareNumericKeypad.SoftwareNumericKeypad_C.BndEvt__Button_30_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
	 */
	struct USoftwareNumericKeypad_C_BndEvt__Button_30_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SoftwareNumericKeypad.SoftwareNumericKeypad_C.BndEvt__Button_delete_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
	 */
	struct USoftwareNumericKeypad_C_BndEvt__Button_delete_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SoftwareNumericKeypad.SoftwareNumericKeypad_C.Tick
	 */
	struct USoftwareNumericKeypad_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SoftwareNumericKeypad.SoftwareNumericKeypad_C.BndEvt__Button_enter_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct USoftwareNumericKeypad_C_BndEvt__Button_enter_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SoftwareNumericKeypad.SoftwareNumericKeypad_C.BndEvt__Button_enter_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature
	 */
	struct USoftwareNumericKeypad_C_BndEvt__Button_enter_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SoftwareNumericKeypad.SoftwareNumericKeypad_C.BndEvt__Button_delete_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature
	 */
	struct USoftwareNumericKeypad_C_BndEvt__Button_delete_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SoftwareNumericKeypad.SoftwareNumericKeypad_C.BndEvt__Button_delete_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature
	 */
	struct USoftwareNumericKeypad_C_BndEvt__Button_delete_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SoftwareNumericKeypad.SoftwareNumericKeypad_C.BndEvt__Button_30_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature
	 */
	struct USoftwareNumericKeypad_C_BndEvt__Button_30_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SoftwareNumericKeypad.SoftwareNumericKeypad_C.BndEvt__Button_30_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature
	 */
	struct USoftwareNumericKeypad_C_BndEvt__Button_30_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SoftwareNumericKeypad.SoftwareNumericKeypad_C.BndEvt__Button_22_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature
	 */
	struct USoftwareNumericKeypad_C_BndEvt__Button_22_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SoftwareNumericKeypad.SoftwareNumericKeypad_C.BndEvt__Button_22_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature
	 */
	struct USoftwareNumericKeypad_C_BndEvt__Button_22_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SoftwareNumericKeypad.SoftwareNumericKeypad_C.BndEvt__Button_21_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature
	 */
	struct USoftwareNumericKeypad_C_BndEvt__Button_21_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SoftwareNumericKeypad.SoftwareNumericKeypad_C.BndEvt__Button_21_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature
	 */
	struct USoftwareNumericKeypad_C_BndEvt__Button_21_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SoftwareNumericKeypad.SoftwareNumericKeypad_C.BndEvt__Button_20_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature
	 */
	struct USoftwareNumericKeypad_C_BndEvt__Button_20_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SoftwareNumericKeypad.SoftwareNumericKeypad_C.BndEvt__Button_20_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature
	 */
	struct USoftwareNumericKeypad_C_BndEvt__Button_20_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SoftwareNumericKeypad.SoftwareNumericKeypad_C.BndEvt__Button_12_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature
	 */
	struct USoftwareNumericKeypad_C_BndEvt__Button_12_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SoftwareNumericKeypad.SoftwareNumericKeypad_C.BndEvt__Button_12_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature
	 */
	struct USoftwareNumericKeypad_C_BndEvt__Button_12_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SoftwareNumericKeypad.SoftwareNumericKeypad_C.BndEvt__Button_11_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature
	 */
	struct USoftwareNumericKeypad_C_BndEvt__Button_11_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SoftwareNumericKeypad.SoftwareNumericKeypad_C.BndEvt__Button_11_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature
	 */
	struct USoftwareNumericKeypad_C_BndEvt__Button_11_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SoftwareNumericKeypad.SoftwareNumericKeypad_C.BndEvt__Button_10_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature
	 */
	struct USoftwareNumericKeypad_C_BndEvt__Button_10_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SoftwareNumericKeypad.SoftwareNumericKeypad_C.BndEvt__Button_10_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature
	 */
	struct USoftwareNumericKeypad_C_BndEvt__Button_10_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SoftwareNumericKeypad.SoftwareNumericKeypad_C.BndEvt__Button_02_K2Node_ComponentBoundEvent_30_OnButtonHoverEvent__DelegateSignature
	 */
	struct USoftwareNumericKeypad_C_BndEvt__Button_02_K2Node_ComponentBoundEvent_30_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SoftwareNumericKeypad.SoftwareNumericKeypad_C.BndEvt__Button_02_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature
	 */
	struct USoftwareNumericKeypad_C_BndEvt__Button_02_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SoftwareNumericKeypad.SoftwareNumericKeypad_C.BndEvt__Button_01_K2Node_ComponentBoundEvent_32_OnButtonHoverEvent__DelegateSignature
	 */
	struct USoftwareNumericKeypad_C_BndEvt__Button_01_K2Node_ComponentBoundEvent_32_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SoftwareNumericKeypad.SoftwareNumericKeypad_C.BndEvt__Button_01_K2Node_ComponentBoundEvent_33_OnButtonHoverEvent__DelegateSignature
	 */
	struct USoftwareNumericKeypad_C_BndEvt__Button_01_K2Node_ComponentBoundEvent_33_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SoftwareNumericKeypad.SoftwareNumericKeypad_C.BndEvt__Button_00_K2Node_ComponentBoundEvent_34_OnButtonHoverEvent__DelegateSignature
	 */
	struct USoftwareNumericKeypad_C_BndEvt__Button_00_K2Node_ComponentBoundEvent_34_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SoftwareNumericKeypad.SoftwareNumericKeypad_C.BndEvt__Button_00_K2Node_ComponentBoundEvent_35_OnButtonHoverEvent__DelegateSignature
	 */
	struct USoftwareNumericKeypad_C_BndEvt__Button_00_K2Node_ComponentBoundEvent_35_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SoftwareNumericKeypad.SoftwareNumericKeypad_C.ExecuteUbergraph_SoftwareNumericKeypad
	 */
	struct USoftwareNumericKeypad_C_ExecuteUbergraph_SoftwareNumericKeypad_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SoftwareNumericKeypad.SoftwareNumericKeypad_C.OnClickedEnter__DelegateSignature
	 */
	struct USoftwareNumericKeypad_C_OnClickedEnter__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
