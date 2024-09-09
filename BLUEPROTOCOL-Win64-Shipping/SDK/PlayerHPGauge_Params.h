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
	 * Function PlayerHPGauge.PlayerHPGauge_C.UpdateHPLossGaunge
	 */
	struct UPlayerHPGauge_C_UpdateHPLossGaunge_Params
	{	};

	/**
	 * Function PlayerHPGauge.PlayerHPGauge_C.UpdatePrevHP
	 */
	struct UPlayerHPGauge_C_UpdatePrevHP_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9IM4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PlayerHPGauge.PlayerHPGauge_C.AdjustHPGaugeSize
	 */
	struct UPlayerHPGauge_C_AdjustHPGaugeSize_Params
	{	};

	/**
	 * Function PlayerHPGauge.PlayerHPGauge_C.SetBgVisibility
	 */
	struct UPlayerHPGauge_C_SetBgVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerHPGauge.PlayerHPGauge_C.カスタムイベント_2
	 */
	struct UPlayerHPGauge_C__2_Params
	{	};

	/**
	 * Function PlayerHPGauge.PlayerHPGauge_C.SetEditMode
	 */
	struct UPlayerHPGauge_C_SetEditMode_Params
	{
	public:
		bool                                                       bIsEdit;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerHPGauge.PlayerHPGauge_C.Destruct
	 */
	struct UPlayerHPGauge_C_Destruct_Params
	{	};

	/**
	 * Function PlayerHPGauge.PlayerHPGauge_C.OnChangeShowAlwaysHUD_event
	 */
	struct UPlayerHPGauge_C_OnChangeShowAlwaysHUD_event_Params
	{
	public:
		bool                                                       bIsShow;                                                 // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerHPGauge.PlayerHPGauge_C.OnInAnimation
	 */
	struct UPlayerHPGauge_C_OnInAnimation_Params
	{
	public:
		bool                                                       bForward;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerHPGauge.PlayerHPGauge_C.Tick
	 */
	struct UPlayerHPGauge_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerHPGauge.PlayerHPGauge_C.OnAnimation
	 */
	struct UPlayerHPGauge_C_OnAnimation_Params
	{
	public:
		bool                                                       Forward;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerHPGauge.PlayerHPGauge_C.WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_1
	 */
	struct UPlayerHPGauge_C_WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function PlayerHPGauge.PlayerHPGauge_C.Construct
	 */
	struct UPlayerHPGauge_C_Construct_Params
	{	};

	/**
	 * Function PlayerHPGauge.PlayerHPGauge_C.ExecuteUbergraph_PlayerHPGauge
	 */
	struct UPlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
