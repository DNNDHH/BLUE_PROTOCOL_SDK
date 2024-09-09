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
	 * Function P007HUD.P007HUD_C.PlayAnimReverseInOut
	 */
	struct UP007HUD_C_PlayAnimReverseInOut_Params
	{	};

	/**
	 * Function P007HUD.P007HUD_C.PlayAnimForwardInOut
	 */
	struct UP007HUD_C_PlayAnimForwardInOut_Params
	{	};

	/**
	 * Function P007HUD.P007HUD_C.OnSetEditMode
	 */
	struct UP007HUD_C_OnSetEditMode_Params
	{
	public:
		bool                                                       InIsEdit;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function P007HUD.P007HUD_C.OnTick
	 */
	struct UP007HUD_C_OnTick_Params
	{	};

	/**
	 * Function P007HUD.P007HUD_C.OnTerminate
	 */
	struct UP007HUD_C_OnTerminate_Params
	{	};

	/**
	 * Function P007HUD.P007HUD_C.OnInitialize
	 */
	struct UP007HUD_C_OnInitialize_Params
	{	};

	/**
	 * Function P007HUD.P007HUD_C.OnUnbind
	 */
	struct UP007HUD_C_OnUnbind_Params
	{	};

	/**
	 * Function P007HUD.P007HUD_C.OnBind
	 */
	struct UP007HUD_C_OnBind_Params
	{	};

	/**
	 * Function P007HUD.P007HUD_C.OnUpdateGauge
	 */
	struct UP007HUD_C_OnUpdateGauge_Params
	{	};

	/**
	 * Function P007HUD.P007HUD_C.BindVisibleSetting
	 */
	struct UP007HUD_C_BindVisibleSetting_Params
	{	};

	/**
	 * Function P007HUD.P007HUD_C.UnbindVisibleSetting
	 */
	struct UP007HUD_C_UnbindVisibleSetting_Params
	{	};

	/**
	 * Function P007HUD.P007HUD_C.OnChangeUIVisibleSetting
	 */
	struct UP007HUD_C_OnChangeUIVisibleSetting_Params
	{
	public:
		ESBUIType                                                  InUIType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInVisibility;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInInstantly;                                            // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function P007HUD.P007HUD_C.ExecuteUbergraph_P007HUD
	 */
	struct UP007HUD_C_ExecuteUbergraph_P007HUD_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
