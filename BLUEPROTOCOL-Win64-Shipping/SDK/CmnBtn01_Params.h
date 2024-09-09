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
	 * Function CmnBtn01.CmnBtn01_C.Set Text
	 */
	struct UCmnBtn01_C_SetText_Params
	{
	public:
		class USBTextTableAsset*                                   InTextTable;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InTextId;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                InTextName;                                              // 0x000C(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESystemSE                                                  InPressedSound;                                          // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CmnBtn01.CmnBtn01_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCmnBtn01_C_BndEvt__Btn1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CmnBtn01.CmnBtn01_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UCmnBtn01_C_BndEvt__Btn1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CmnBtn01.CmnBtn01_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UCmnBtn01_C_BndEvt__Btn1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CmnBtn01.CmnBtn01_C.UpdateText
	 */
	struct UCmnBtn01_C_UpdateText_Params
	{	};

	/**
	 * Function CmnBtn01.CmnBtn01_C.SetClickInputAction
	 */
	struct UCmnBtn01_C_SetClickInputAction_Params
	{
	public:
		class FName                                                ActionName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CmnBtn01.CmnBtn01_C.CustomEvent_1
	 */
	struct UCmnBtn01_C_CustomEvent_1_Params
	{	};

	/**
	 * Function CmnBtn01.CmnBtn01_C.StopClickInputAction
	 */
	struct UCmnBtn01_C_StopClickInputAction_Params
	{	};

	/**
	 * Function CmnBtn01.CmnBtn01_C.Construct
	 */
	struct UCmnBtn01_C_Construct_Params
	{	};

	/**
	 * Function CmnBtn01.CmnBtn01_C.CustomEvent_2
	 */
	struct UCmnBtn01_C_CustomEvent_2_Params
	{
	public:
		ESBPadKeySkinType                                          SkinType;                                                // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CmnBtn01.CmnBtn01_C.Destruct
	 */
	struct UCmnBtn01_C_Destruct_Params
	{	};

	/**
	 * Function CmnBtn01.CmnBtn01_C.CustomEvent_3
	 */
	struct UCmnBtn01_C_CustomEvent_3_Params
	{	};

	/**
	 * Function CmnBtn01.CmnBtn01_C.PreConstruct
	 */
	struct UCmnBtn01_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CmnBtn01.CmnBtn01_C.ExecuteUbergraph_CmnBtn01
	 */
	struct UCmnBtn01_C_ExecuteUbergraph_CmnBtn01_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CmnBtn01.CmnBtn01_C.EventOnClicked__DelegateSignature
	 */
	struct UCmnBtn01_C_EventOnClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
