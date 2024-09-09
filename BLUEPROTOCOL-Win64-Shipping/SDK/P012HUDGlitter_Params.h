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
	 * Function P012HUDGlitter.P012HUDGlitter_C.PlayAnimReverseInOut
	 */
	struct UP012HUDGlitter_C_PlayAnimReverseInOut_Params
	{	};

	/**
	 * Function P012HUDGlitter.P012HUDGlitter_C.PlayAnimForwardInOut
	 */
	struct UP012HUDGlitter_C_PlayAnimForwardInOut_Params
	{	};

	/**
	 * Function P012HUDGlitter.P012HUDGlitter_C.OnSetEditMode
	 */
	struct UP012HUDGlitter_C_OnSetEditMode_Params
	{
	public:
		bool                                                       InIsEdit;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function P012HUDGlitter.P012HUDGlitter_C.OnTerminate
	 */
	struct UP012HUDGlitter_C_OnTerminate_Params
	{	};

	/**
	 * Function P012HUDGlitter.P012HUDGlitter_C.OnInitialize
	 */
	struct UP012HUDGlitter_C_OnInitialize_Params
	{	};

	/**
	 * Function P012HUDGlitter.P012HUDGlitter_C.OnUnbind
	 */
	struct UP012HUDGlitter_C_OnUnbind_Params
	{	};

	/**
	 * Function P012HUDGlitter.P012HUDGlitter_C.OnBind
	 */
	struct UP012HUDGlitter_C_OnBind_Params
	{	};

	/**
	 * Function P012HUDGlitter.P012HUDGlitter_C.SetLv
	 */
	struct UP012HUDGlitter_C_SetLv_Params
	{
	public:
		int32_t                                                    InLV;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_C34U[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function P012HUDGlitter.P012HUDGlitter_C.SetGauge
	 */
	struct UP012HUDGlitter_C_SetGauge_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function P012HUDGlitter.P012HUDGlitter_C.Update
	 */
	struct UP012HUDGlitter_C_Update_Params
	{
	public:
		float                                                      GaugeRatio;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Lv;                                                      // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function P012HUDGlitter.P012HUDGlitter_C.OnChangeUIVisibleSetting
	 */
	struct UP012HUDGlitter_C_OnChangeUIVisibleSetting_Params
	{
	public:
		ESBUIType                                                  InUIType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInVisibility;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInInstantly;                                            // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function P012HUDGlitter.P012HUDGlitter_C.BindVisibleSetting
	 */
	struct UP012HUDGlitter_C_BindVisibleSetting_Params
	{	};

	/**
	 * Function P012HUDGlitter.P012HUDGlitter_C.UnbindVisibleSetting
	 */
	struct UP012HUDGlitter_C_UnbindVisibleSetting_Params
	{	};

	/**
	 * Function P012HUDGlitter.P012HUDGlitter_C.ExecuteUbergraph_P012HUDGlitter
	 */
	struct UP012HUDGlitter_C_ExecuteUbergraph_P012HUDGlitter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
