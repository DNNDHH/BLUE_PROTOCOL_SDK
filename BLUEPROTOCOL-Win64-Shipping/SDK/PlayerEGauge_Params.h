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
	 * Function PlayerEGauge.PlayerEGauge_C.PlayAnim
	 */
	struct UPlayerEGauge_C_PlayAnim_Params
	{
	public:
		EUMGSequencePlayMode                                       PlayMode;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JHZ7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      PlaybackSpeed;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerEGauge.PlayerEGauge_C.OnInAnimation
	 */
	struct UPlayerEGauge_C_OnInAnimation_Params
	{
	public:
		bool                                                       bForward;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerEGauge.PlayerEGauge_C.SetEditMode
	 */
	struct UPlayerEGauge_C_SetEditMode_Params
	{
	public:
		bool                                                       bIsEdit;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerEGauge.PlayerEGauge_C.Construct
	 */
	struct UPlayerEGauge_C_Construct_Params
	{	};

	/**
	 * Function PlayerEGauge.PlayerEGauge_C.WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_1
	 */
	struct UPlayerEGauge_C_WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function PlayerEGauge.PlayerEGauge_C.ExecuteUbergraph_PlayerEGauge
	 */
	struct UPlayerEGauge_C_ExecuteUbergraph_PlayerEGauge_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
