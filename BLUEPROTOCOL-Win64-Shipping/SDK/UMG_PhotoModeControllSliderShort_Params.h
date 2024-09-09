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
	 * Function UMG_PhotoModeControllSliderShort.UMG_PhotoModeControllSliderShort_C.GetDisplayValue
	 */
	struct UUMG_PhotoModeControllSliderShort_C_GetDisplayValue_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControllSliderShort.UMG_PhotoModeControllSliderShort_C.GetLoopValue
	 */
	struct UUMG_PhotoModeControllSliderShort_C_GetLoopValue_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Min;                                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Max;                                                     // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControllSliderShort.UMG_PhotoModeControllSliderShort_C.SetValue_Internal
	 */
	struct UUMG_PhotoModeControllSliderShort_C_SetValue_Internal_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControllSliderShort.UMG_PhotoModeControllSliderShort_C.PreConstructHsv
	 */
	struct UUMG_PhotoModeControllSliderShort_C_PreConstructHsv_Params
	{	};

	/**
	 * Function UMG_PhotoModeControllSliderShort.UMG_PhotoModeControllSliderShort_C.PreConstruct
	 */
	struct UUMG_PhotoModeControllSliderShort_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_PhotoModeControllSliderShort.UMG_PhotoModeControllSliderShort_C.BndEvt__Button_Minus_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_PhotoModeControllSliderShort_C_BndEvt__Button_Minus_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_PhotoModeControllSliderShort.UMG_PhotoModeControllSliderShort_C.BndEvt__Button_Plus_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_PhotoModeControllSliderShort_C_BndEvt__Button_Plus_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_PhotoModeControllSliderShort.UMG_PhotoModeControllSliderShort_C.BndEvt__Slider_Value_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UUMG_PhotoModeControllSliderShort_C_BndEvt__Slider_Value_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControllSliderShort.UMG_PhotoModeControllSliderShort_C.SetValue
	 */
	struct UUMG_PhotoModeControllSliderShort_C_SetValue_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bOnlyDisplay;                                            // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_PhotoModeControllSliderShort.UMG_PhotoModeControllSliderShort_C.SetDefaultValue
	 */
	struct UUMG_PhotoModeControllSliderShort_C_SetDefaultValue_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControllSliderShort.UMG_PhotoModeControllSliderShort_C.Reset
	 */
	struct UUMG_PhotoModeControllSliderShort_C_Reset_Params
	{	};

	/**
	 * Function UMG_PhotoModeControllSliderShort.UMG_PhotoModeControllSliderShort_C.Initialize
	 */
	struct UUMG_PhotoModeControllSliderShort_C_Initialize_Params
	{
	public:
		float                                                      ValueDefault;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ValueMin;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ValueMax;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ValueStepSize;                                           // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControllSliderShort.UMG_PhotoModeControllSliderShort_C.Construct
	 */
	struct UUMG_PhotoModeControllSliderShort_C_Construct_Params
	{	};

	/**
	 * Function UMG_PhotoModeControllSliderShort.UMG_PhotoModeControllSliderShort_C.ExecuteUbergraph_UMG_PhotoModeControllSliderShort
	 */
	struct UUMG_PhotoModeControllSliderShort_C_ExecuteUbergraph_UMG_PhotoModeControllSliderShort_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControllSliderShort.UMG_PhotoModeControllSliderShort_C.OnValueChanged__DelegateSignature
	 */
	struct UUMG_PhotoModeControllSliderShort_C_OnValueChanged__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
