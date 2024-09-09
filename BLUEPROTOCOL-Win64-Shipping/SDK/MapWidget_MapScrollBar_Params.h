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
	 * Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.GetSliderVMinAndMaxValue
	 */
	struct UMapWidget_MapScrollBar_C_GetSliderVMinAndMaxValue_Params
	{
	public:
		float                                                      OutMinValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      OutMaxValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.GetSliderVMaxValue
	 */
	struct UMapWidget_MapScrollBar_C_GetSliderVMaxValue_Params
	{
	public:
		float                                                      OutValue;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.GetSliderVMinValue
	 */
	struct UMapWidget_MapScrollBar_C_GetSliderVMinValue_Params
	{
	public:
		float                                                      OutValue;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.GetSliderVValue
	 */
	struct UMapWidget_MapScrollBar_C_GetSliderVValue_Params
	{
	public:
		float                                                      OutValue;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.GetSliderHMinAndMaxValue
	 */
	struct UMapWidget_MapScrollBar_C_GetSliderHMinAndMaxValue_Params
	{
	public:
		float                                                      OutMinValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      OutMaxValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.GetSliderHMaxValue
	 */
	struct UMapWidget_MapScrollBar_C_GetSliderHMaxValue_Params
	{
	public:
		float                                                      OutValue;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.GetSliderHMinValue
	 */
	struct UMapWidget_MapScrollBar_C_GetSliderHMinValue_Params
	{
	public:
		float                                                      OutValue;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.GetSliderHValue
	 */
	struct UMapWidget_MapScrollBar_C_GetSliderHValue_Params
	{
	public:
		float                                                      OutValue;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.SetSliderVMinAndMaxValue
	 */
	struct UMapWidget_MapScrollBar_C_SetSliderVMinAndMaxValue_Params
	{
	public:
		float                                                      InMinValue;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InMaxValue;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.SetSliderVMaxValue
	 */
	struct UMapWidget_MapScrollBar_C_SetSliderVMaxValue_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.SetSliderVMinValue
	 */
	struct UMapWidget_MapScrollBar_C_SetSliderVMinValue_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.SetSliderVValue
	 */
	struct UMapWidget_MapScrollBar_C_SetSliderVValue_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.SetSliderHMinAndMaxValue
	 */
	struct UMapWidget_MapScrollBar_C_SetSliderHMinAndMaxValue_Params
	{
	public:
		float                                                      InMinValue;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InMaxValue;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.SetSliderHMaxValue
	 */
	struct UMapWidget_MapScrollBar_C_SetSliderHMaxValue_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.SetSliderHMinValue
	 */
	struct UMapWidget_MapScrollBar_C_SetSliderHMinValue_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.SetSliderHValue
	 */
	struct UMapWidget_MapScrollBar_C_SetSliderHValue_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.BndEvt__SliderH_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UMapWidget_MapScrollBar_C_BndEvt__SliderH_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.BndEvt__SliderV_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UMapWidget_MapScrollBar_C_BndEvt__SliderV_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.BndEvt__SliderH_K2Node_ComponentBoundEvent_2_OnMouseCaptureBeginEvent__DelegateSignature
	 */
	struct UMapWidget_MapScrollBar_C_BndEvt__SliderH_K2Node_ComponentBoundEvent_2_OnMouseCaptureBeginEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.BndEvt__SliderH_K2Node_ComponentBoundEvent_3_OnMouseCaptureEndEvent__DelegateSignature
	 */
	struct UMapWidget_MapScrollBar_C_BndEvt__SliderH_K2Node_ComponentBoundEvent_3_OnMouseCaptureEndEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.BndEvt__SliderV_K2Node_ComponentBoundEvent_4_OnMouseCaptureBeginEvent__DelegateSignature
	 */
	struct UMapWidget_MapScrollBar_C_BndEvt__SliderV_K2Node_ComponentBoundEvent_4_OnMouseCaptureBeginEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.BndEvt__SliderV_K2Node_ComponentBoundEvent_5_OnMouseCaptureEndEvent__DelegateSignature
	 */
	struct UMapWidget_MapScrollBar_C_BndEvt__SliderV_K2Node_ComponentBoundEvent_5_OnMouseCaptureEndEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.ExecuteUbergraph_MapWidget_MapScrollBar
	 */
	struct UMapWidget_MapScrollBar_C_ExecuteUbergraph_MapWidget_MapScrollBar_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.OnMouseCaptureEnd__DelegateSignature
	 */
	struct UMapWidget_MapScrollBar_C_OnMouseCaptureEnd__DelegateSignature_Params
	{	};

	/**
	 * Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.OnMouseCaptureBegin__DelegateSignature
	 */
	struct UMapWidget_MapScrollBar_C_OnMouseCaptureBegin__DelegateSignature_Params
	{	};

	/**
	 * Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.OnSliderVValueChanged__DelegateSignature
	 */
	struct UMapWidget_MapScrollBar_C_OnSliderVValueChanged__DelegateSignature_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.OnSliderHValueChanged__DelegateSignature
	 */
	struct UMapWidget_MapScrollBar_C_OnSliderHValueChanged__DelegateSignature_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
