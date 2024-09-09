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
	 * Function WBP_CheckBoxText.WBP_CheckBoxText_C.UpdateText
	 */
	struct UWBP_CheckBoxText_C_UpdateText_Params
	{	};

	/**
	 * Function WBP_CheckBoxText.WBP_CheckBoxText_C.Construct
	 */
	struct UWBP_CheckBoxText_C_Construct_Params
	{	};

	/**
	 * Function WBP_CheckBoxText.WBP_CheckBoxText_C.CustomEvent_2
	 */
	struct UWBP_CheckBoxText_C_CustomEvent_2_Params
	{
	public:
		ESBPadKeySkinType                                          SkinType;                                                // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CheckBoxText.WBP_CheckBoxText_C.Destruct
	 */
	struct UWBP_CheckBoxText_C_Destruct_Params
	{	};

	/**
	 * Function WBP_CheckBoxText.WBP_CheckBoxText_C.CustomEvent_3
	 */
	struct UWBP_CheckBoxText_C_CustomEvent_3_Params
	{	};

	/**
	 * Function WBP_CheckBoxText.WBP_CheckBoxText_C.SetClickInputAction
	 */
	struct UWBP_CheckBoxText_C_SetClickInputAction_Params
	{
	public:
		class FName                                                ActionName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CheckBoxText.WBP_CheckBoxText_C.CustomEvent_1
	 */
	struct UWBP_CheckBoxText_C_CustomEvent_1_Params
	{	};

	/**
	 * Function WBP_CheckBoxText.WBP_CheckBoxText_C.StopClickInputAction
	 */
	struct UWBP_CheckBoxText_C_StopClickInputAction_Params
	{	};

	/**
	 * Function WBP_CheckBoxText.WBP_CheckBoxText_C.PreConstruct
	 */
	struct UWBP_CheckBoxText_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_CheckBoxText.WBP_CheckBoxText_C.BndEvt__WBP_CheckBoxText_SBCheckBox_C_72_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWBP_CheckBoxText_C_BndEvt__WBP_CheckBoxText_SBCheckBox_C_72_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_CheckBoxText.WBP_CheckBoxText_C.ExecuteUbergraph_WBP_CheckBoxText
	 */
	struct UWBP_CheckBoxText_C_ExecuteUbergraph_WBP_CheckBoxText_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CheckBoxText.WBP_CheckBoxText_C.OnCheckChanged__DelegateSignature
	 */
	struct UWBP_CheckBoxText_C_OnCheckChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
