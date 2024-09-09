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
	 * Function PlayerSTGauge.PlayerSTGauge_C.PlaySTGaugeRecoverAnim
	 */
	struct UPlayerSTGauge_C_PlaySTGaugeRecoverAnim_Params
	{	};

	/**
	 * Function PlayerSTGauge.PlayerSTGauge_C.SetBgVisibility
	 */
	struct UPlayerSTGauge_C_SetBgVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerSTGauge.PlayerSTGauge_C.Construct
	 */
	struct UPlayerSTGauge_C_Construct_Params
	{	};

	/**
	 * Function PlayerSTGauge.PlayerSTGauge_C.Tick
	 */
	struct UPlayerSTGauge_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerSTGauge.PlayerSTGauge_C.OnStaminaRecovery
	 */
	struct UPlayerSTGauge_C_OnStaminaRecovery_Params
	{	};

	/**
	 * Function PlayerSTGauge.PlayerSTGauge_C.SetEditMode
	 */
	struct UPlayerSTGauge_C_SetEditMode_Params
	{
	public:
		bool                                                       bIsEdit;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerSTGauge.PlayerSTGauge_C.UnbindStaminaRecoveredDelegate
	 */
	struct UPlayerSTGauge_C_UnbindStaminaRecoveredDelegate_Params
	{	};

	/**
	 * Function PlayerSTGauge.PlayerSTGauge_C.Destruct
	 */
	struct UPlayerSTGauge_C_Destruct_Params
	{	};

	/**
	 * Function PlayerSTGauge.PlayerSTGauge_C.UnbindShowAlwaysHUDDelegate
	 */
	struct UPlayerSTGauge_C_UnbindShowAlwaysHUDDelegate_Params
	{	};

	/**
	 * Function PlayerSTGauge.PlayerSTGauge_C.OnChangeShowAlwaysHUD_event
	 */
	struct UPlayerSTGauge_C_OnChangeShowAlwaysHUD_event_Params
	{
	public:
		bool                                                       bIsShow;                                                 // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerSTGauge.PlayerSTGauge_C.PlayerBind
	 */
	struct UPlayerSTGauge_C_PlayerBind_Params
	{	};

	/**
	 * Function PlayerSTGauge.PlayerSTGauge_C.CustomEvent_2
	 */
	struct UPlayerSTGauge_C_CustomEvent_2_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerSTGauge.PlayerSTGauge_C.OnAnimation
	 */
	struct UPlayerSTGauge_C_OnAnimation_Params
	{
	public:
		bool                                                       Forward;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerSTGauge.PlayerSTGauge_C.WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_1
	 */
	struct UPlayerSTGauge_C_WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function PlayerSTGauge.PlayerSTGauge_C.OnInAnimation
	 */
	struct UPlayerSTGauge_C_OnInAnimation_Params
	{
	public:
		bool                                                       bForward;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerSTGauge.PlayerSTGauge_C.ExecuteUbergraph_PlayerSTGauge
	 */
	struct UPlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T0S0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
