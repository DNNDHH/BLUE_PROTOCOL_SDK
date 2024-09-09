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
	 * Function NumberInputBase.NumberInputBase_C.InitializeValue
	 */
	struct UNumberInputBase_C_InitializeValue_Params
	{
	public:
		int32_t                                                    Number;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NumberMin;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NumberMax;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bOnlyDisplay;                                            // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OZWE[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function NumberInputBase.NumberInputBase_C.GetValue
	 */
	struct UNumberInputBase_C_GetValue_Params
	{
	public:
		int32_t                                                    Number;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NumberInputBase.NumberInputBase_C.Construct
	 */
	struct UNumberInputBase_C_Construct_Params
	{	};

	/**
	 * Function NumberInputBase.NumberInputBase_C.NumberPlus
	 */
	struct UNumberInputBase_C_NumberPlus_Params
	{	};

	/**
	 * Function NumberInputBase.NumberInputBase_C.NumberMinus
	 */
	struct UNumberInputBase_C_NumberMinus_Params
	{	};

	/**
	 * Function NumberInputBase.NumberInputBase_C.StartRepeatPlus
	 */
	struct UNumberInputBase_C_StartRepeatPlus_Params
	{	};

	/**
	 * Function NumberInputBase.NumberInputBase_C.StartRepeatMinus
	 */
	struct UNumberInputBase_C_StartRepeatMinus_Params
	{	};

	/**
	 * Function NumberInputBase.NumberInputBase_C.OnPressPlusButton
	 */
	struct UNumberInputBase_C_OnPressPlusButton_Params
	{	};

	/**
	 * Function NumberInputBase.NumberInputBase_C.OnReleasePlusButton
	 */
	struct UNumberInputBase_C_OnReleasePlusButton_Params
	{	};

	/**
	 * Function NumberInputBase.NumberInputBase_C.OnPressMinusButton
	 */
	struct UNumberInputBase_C_OnPressMinusButton_Params
	{	};

	/**
	 * Function NumberInputBase.NumberInputBase_C.OnReleaseMinusButton
	 */
	struct UNumberInputBase_C_OnReleaseMinusButton_Params
	{	};

	/**
	 * Function NumberInputBase.NumberInputBase_C.ClearHandle
	 */
	struct UNumberInputBase_C_ClearHandle_Params
	{	};

	/**
	 * Function NumberInputBase.NumberInputBase_C.UpdateButtonStatus
	 */
	struct UNumberInputBase_C_UpdateButtonStatus_Params
	{	};

	/**
	 * Function NumberInputBase.NumberInputBase_C.ChangeValue
	 */
	struct UNumberInputBase_C_ChangeValue_Params
	{
	public:
		int32_t                                                    InChangeValue;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NumberInputBase.NumberInputBase_C.OnClickedMaxButton
	 */
	struct UNumberInputBase_C_OnClickedMaxButton_Params
	{	};

	/**
	 * Function NumberInputBase.NumberInputBase_C.OnClickedMinButton
	 */
	struct UNumberInputBase_C_OnClickedMinButton_Params
	{	};

	/**
	 * Function NumberInputBase.NumberInputBase_C.Event_OnValueChanged
	 */
	struct UNumberInputBase_C_Event_OnValueChanged_Params
	{
	public:
		bool                                                       bOnlyDisplay;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function NumberInputBase.NumberInputBase_C.ExecuteUbergraph_NumberInputBase
	 */
	struct UNumberInputBase_C_ExecuteUbergraph_NumberInputBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NumberInputBase.NumberInputBase_C.OnValueChanged__DelegateSignature
	 */
	struct UNumberInputBase_C_OnValueChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
