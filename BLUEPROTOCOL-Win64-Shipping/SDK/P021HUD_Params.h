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
	 * Function P021HUD.P021HUD_C.Set P021Counter
	 */
	struct UP021HUD_C_SetP021Counter_Params
	{
	public:
		class UP021Counter_C*                                      SetP021Counter;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function P021HUD.P021HUD_C.PlayAnimReverseNoise
	 */
	struct UP021HUD_C_PlayAnimReverseNoise_Params
	{	};

	/**
	 * Function P021HUD.P021HUD_C.PlayAnimForwardNoise
	 */
	struct UP021HUD_C_PlayAnimForwardNoise_Params
	{	};

	/**
	 * Function P021HUD.P021HUD_C.StopAnimGainLineEffect
	 */
	struct UP021HUD_C_StopAnimGainLineEffect_Params
	{	};

	/**
	 * Function P021HUD.P021HUD_C.PlayAnimGainLineEffect
	 */
	struct UP021HUD_C_PlayAnimGainLineEffect_Params
	{	};

	/**
	 * Function P021HUD.P021HUD_C.StopAnimGainMax
	 */
	struct UP021HUD_C_StopAnimGainMax_Params
	{	};

	/**
	 * Function P021HUD.P021HUD_C.PlayAnimGainMax
	 */
	struct UP021HUD_C_PlayAnimGainMax_Params
	{	};

	/**
	 * Function P021HUD.P021HUD_C.StopAnimEffectFever2
	 */
	struct UP021HUD_C_StopAnimEffectFever2_Params
	{	};

	/**
	 * Function P021HUD.P021HUD_C.PlayAnimEffectFever2
	 */
	struct UP021HUD_C_PlayAnimEffectFever2_Params
	{	};

	/**
	 * Function P021HUD.P021HUD_C.StopAnimEffectFever1
	 */
	struct UP021HUD_C_StopAnimEffectFever1_Params
	{	};

	/**
	 * Function P021HUD.P021HUD_C.PlayAnimEffectFever1
	 */
	struct UP021HUD_C_PlayAnimEffectFever1_Params
	{	};

	/**
	 * Function P021HUD.P021HUD_C.PlayAnimBG
	 */
	struct UP021HUD_C_PlayAnimBG_Params
	{
	public:
		int32_t                                                    InBGIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function P021HUD.P021HUD_C.StopAnimEffectMax
	 */
	struct UP021HUD_C_StopAnimEffectMax_Params
	{	};

	/**
	 * Function P021HUD.P021HUD_C.PlayAnimEffectMax
	 */
	struct UP021HUD_C_PlayAnimEffectMax_Params
	{	};

	/**
	 * Function P021HUD.P021HUD_C.OnTerminate
	 */
	struct UP021HUD_C_OnTerminate_Params
	{	};

	/**
	 * Function P021HUD.P021HUD_C.OnInitialize
	 */
	struct UP021HUD_C_OnInitialize_Params
	{	};

	/**
	 * Function P021HUD.P021HUD_C.OnUnbind
	 */
	struct UP021HUD_C_OnUnbind_Params
	{	};

	/**
	 * Function P021HUD.P021HUD_C.OnBind
	 */
	struct UP021HUD_C_OnBind_Params
	{	};

	/**
	 * Function P021HUD.P021HUD_C.PlayAnimReverseInOut
	 */
	struct UP021HUD_C_PlayAnimReverseInOut_Params
	{	};

	/**
	 * Function P021HUD.P021HUD_C.PlayAnimForwardInOut
	 */
	struct UP021HUD_C_PlayAnimForwardInOut_Params
	{	};

	/**
	 * Function P021HUD.P021HUD_C.StopAnim
	 */
	struct UP021HUD_C_StopAnim_Params
	{
	public:
		class UWidgetAnimation*                                    InAnimation;                                             // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function P021HUD.P021HUD_C.PlayAnim
	 */
	struct UP021HUD_C_PlayAnim_Params
	{
	public:
		class UWidgetAnimation*                                    InAnimation;                                             // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NumLoopsToPlay;                                          // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EUMGSequencePlayMode                                       PlayMode;                                                // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function P021HUD.P021HUD_C.BindChangeVoltageRate
	 */
	struct UP021HUD_C_BindChangeVoltageRate_Params
	{	};

	/**
	 * Function P021HUD.P021HUD_C.UnbindChangeVoltageRate
	 */
	struct UP021HUD_C_UnbindChangeVoltageRate_Params
	{	};

	/**
	 * Function P021HUD.P021HUD_C.CustomEvent_1
	 */
	struct UP021HUD_C_CustomEvent_1_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function P021HUD.P021HUD_C.BindFeverEnd
	 */
	struct UP021HUD_C_BindFeverEnd_Params
	{	};

	/**
	 * Function P021HUD.P021HUD_C.UnbindFeverEnd
	 */
	struct UP021HUD_C_UnbindFeverEnd_Params
	{	};

	/**
	 * Function P021HUD.P021HUD_C.BindFeverStart
	 */
	struct UP021HUD_C_BindFeverStart_Params
	{	};

	/**
	 * Function P021HUD.P021HUD_C.UnbindFeverStart
	 */
	struct UP021HUD_C_UnbindFeverStart_Params
	{	};

	/**
	 * Function P021HUD.P021HUD_C.CustomEvent
	 */
	struct UP021HUD_C_CustomEvent_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function P021HUD.P021HUD_C.CustomEvent_2
	 */
	struct UP021HUD_C_CustomEvent_2_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function P021HUD.P021HUD_C.OnChangeUIVisibleSetting
	 */
	struct UP021HUD_C_OnChangeUIVisibleSetting_Params
	{
	public:
		ESBUIType                                                  InUIType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInVisibility;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInInstantly;                                            // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function P021HUD.P021HUD_C.BindVisibleSetting
	 */
	struct UP021HUD_C_BindVisibleSetting_Params
	{	};

	/**
	 * Function P021HUD.P021HUD_C.UnbindVisibleSetting
	 */
	struct UP021HUD_C_UnbindVisibleSetting_Params
	{	};

	/**
	 * Function P021HUD.P021HUD_C.WidgetAnimationEvt_AnimEffectFever1_K2Node_WidgetAnimationEvent_2
	 */
	struct UP021HUD_C_WidgetAnimationEvt_AnimEffectFever1_K2Node_WidgetAnimationEvent_2_Params
	{	};

	/**
	 * Function P021HUD.P021HUD_C.WidgetAnimationEvt_AnimGainLineEffect_K2Node_WidgetAnimationEvent_1
	 */
	struct UP021HUD_C_WidgetAnimationEvt_AnimGainLineEffect_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function P021HUD.P021HUD_C.ExecuteUbergraph_P021HUD
	 */
	struct UP021HUD_C_ExecuteUbergraph_P021HUD_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
