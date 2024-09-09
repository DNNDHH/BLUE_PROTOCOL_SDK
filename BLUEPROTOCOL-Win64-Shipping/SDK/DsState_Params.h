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
	 * Function DsState.DsState_C.SetCount
	 */
	struct UDsState_C_SetCount_Params
	{
	public:
		int32_t                                                    InCount;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DsState.DsState_C.Hide
	 */
	struct UDsState_C_Hide_Params
	{	};

	/**
	 * Function DsState.DsState_C.Show
	 */
	struct UDsState_C_Show_Params
	{	};

	/**
	 * Function DsState.DsState_C.Construct
	 */
	struct UDsState_C_Construct_Params
	{	};

	/**
	 * Function DsState.DsState_C.OnAnimationFinished
	 */
	struct UDsState_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DsState.DsState_C.OnShow
	 */
	struct UDsState_C_OnShow_Params
	{	};

	/**
	 * Function DsState.DsState_C.OnHide
	 */
	struct UDsState_C_OnHide_Params
	{	};

	/**
	 * Function DsState.DsState_C.OnSetCount
	 */
	struct UDsState_C_OnSetCount_Params
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DsState.DsState_C.OnChangeEffect
	 */
	struct UDsState_C_OnChangeEffect_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DsState.DsState_C.WidgetAnimationEvt_AnimCountDownPinch_K2Node_WidgetAnimationEvent_1
	 */
	struct UDsState_C_WidgetAnimationEvt_AnimCountDownPinch_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function DsState.DsState_C.WidgetAnimationEvt_AnimCountDown_K2Node_WidgetAnimationEvent_3
	 */
	struct UDsState_C_WidgetAnimationEvt_AnimCountDown_K2Node_WidgetAnimationEvent_3_Params
	{	};

	/**
	 * Function DsState.DsState_C.ExecuteUbergraph_DsState
	 */
	struct UDsState_C_ExecuteUbergraph_DsState_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AZ8Y[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
