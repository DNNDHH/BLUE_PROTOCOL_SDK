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
	 * Function KeyConfig_Slider.KeyConfig_Slider_C.SetNewMark
	 */
	struct UKeyConfig_Slider_C_SetNewMark_Params
	{
	public:
		bool                                                       bShowNewMark;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function KeyConfig_Slider.KeyConfig_Slider_C.IsChangeBefore
	 */
	struct UKeyConfig_Slider_C_IsChangeBefore_Params
	{
	public:
		bool                                                       ChangeBefore;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function KeyConfig_Slider.KeyConfig_Slider_C.SetChanged
	 */
	struct UKeyConfig_Slider_C_SetChanged_Params
	{
	public:
		bool                                                       bChanged;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function KeyConfig_Slider.KeyConfig_Slider_C.GetRatio
	 */
	struct UKeyConfig_Slider_C_GetRatio_Params
	{
	public:
		float                                                      Ratio;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function KeyConfig_Slider.KeyConfig_Slider_C.ApplyRatio
	 */
	struct UKeyConfig_Slider_C_ApplyRatio_Params
	{
	public:
		float                                                      Ratio;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function KeyConfig_Slider.KeyConfig_Slider_C.GetValue
	 */
	struct UKeyConfig_Slider_C_GetValue_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function KeyConfig_Slider.KeyConfig_Slider_C.ApplyValue
	 */
	struct UKeyConfig_Slider_C_ApplyValue_Params
	{
	public:
		int32_t                                                    NewValue;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function KeyConfig_Slider.KeyConfig_Slider_C.PreConstruct
	 */
	struct UKeyConfig_Slider_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function KeyConfig_Slider.KeyConfig_Slider_C.Construct
	 */
	struct UKeyConfig_Slider_C_Construct_Params
	{	};

	/**
	 * Function KeyConfig_Slider.KeyConfig_Slider_C.CallOnChange
	 */
	struct UKeyConfig_Slider_C_CallOnChange_Params
	{
	public:
		int32_t                                                    NewValue;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Ratio;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function KeyConfig_Slider.KeyConfig_Slider_C.ExecuteUbergraph_KeyConfig_Slider
	 */
	struct UKeyConfig_Slider_C_ExecuteUbergraph_KeyConfig_Slider_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function KeyConfig_Slider.KeyConfig_Slider_C.onChangeValue__DelegateSignature
	 */
	struct UKeyConfig_Slider_C_onChangeValue__DelegateSignature_Params
	{
	public:
		int32_t                                                    NewValue;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Ratio;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EConfig_KeyconfigItems                                     Type;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_E5OI[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UKeyConfig_Slider_C*                                 Target;                                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
