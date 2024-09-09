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
	 * Function MapEditSlider.MapEditSlider_C.SliderValueChanged
	 */
	struct UMapEditSlider_C_SliderValueChanged_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapEditSlider.MapEditSlider_C.BtnClickedPlus
	 */
	struct UMapEditSlider_C_BtnClickedPlus_Params
	{	};

	/**
	 * Function MapEditSlider.MapEditSlider_C.BtnClickedMinus
	 */
	struct UMapEditSlider_C_BtnClickedMinus_Params
	{	};

	/**
	 * Function MapEditSlider.MapEditSlider_C.GetStepSize
	 */
	struct UMapEditSlider_C_GetStepSize_Params
	{
	public:
		float                                                      StepSize;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapEditSlider.MapEditSlider_C.SetStepSize
	 */
	struct UMapEditSlider_C_SetStepSize_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapEditSlider.MapEditSlider_C.GetValueRange
	 */
	struct UMapEditSlider_C_GetValueRange_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapEditSlider.MapEditSlider_C.GetValueMax
	 */
	struct UMapEditSlider_C_GetValueMax_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapEditSlider.MapEditSlider_C.GetValueMin
	 */
	struct UMapEditSlider_C_GetValueMin_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapEditSlider.MapEditSlider_C.GetValueRate
	 */
	struct UMapEditSlider_C_GetValueRate_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapEditSlider.MapEditSlider_C.GetValue
	 */
	struct UMapEditSlider_C_GetValue_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapEditSlider.MapEditSlider_C.SetValueText
	 */
	struct UMapEditSlider_C_SetValueText_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T7EW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MapEditSlider.MapEditSlider_C.SetValueMax
	 */
	struct UMapEditSlider_C_SetValueMax_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapEditSlider.MapEditSlider_C.SetValueMin
	 */
	struct UMapEditSlider_C_SetValueMin_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapEditSlider.MapEditSlider_C.SetValueRate
	 */
	struct UMapEditSlider_C_SetValueRate_Params
	{
	public:
		float                                                      InRate;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapEditSlider.MapEditSlider_C.SetValue
	 */
	struct UMapEditSlider_C_SetValue_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapEditSlider.MapEditSlider_C.SetTitle
	 */
	struct UMapEditSlider_C_SetTitle_Params
	{
	public:
		int32_t                                                    InTextId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapEditSlider.MapEditSlider_C.BndEvt__MapEditSlider_MinusBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMapEditSlider_C_BndEvt__MapEditSlider_MinusBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MapEditSlider.MapEditSlider_C.BndEvt__MapEditSlider_PlusBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMapEditSlider_C_BndEvt__MapEditSlider_PlusBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MapEditSlider.MapEditSlider_C.BndEvt__MapEditSlider_Slider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UMapEditSlider_C_BndEvt__MapEditSlider_Slider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapEditSlider.MapEditSlider_C.PreConstruct
	 */
	struct UMapEditSlider_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MapEditSlider.MapEditSlider_C.ExecuteUbergraph_MapEditSlider
	 */
	struct UMapEditSlider_C_ExecuteUbergraph_MapEditSlider_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapEditSlider.MapEditSlider_C.OnValueChanged__DelegateSignature
	 */
	struct UMapEditSlider_C_OnValueChanged__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
