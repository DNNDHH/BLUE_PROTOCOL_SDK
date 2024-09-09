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
	 * Function GatherIcon.GatherIcon_C.LiquidMemoryIconCheck
	 */
	struct UGatherIcon_C_LiquidMemoryIconCheck_Params
	{	};

	/**
	 * Function GatherIcon.GatherIcon_C.DebugFunc
	 */
	struct UGatherIcon_C_DebugFunc_Params
	{
	public:
		float                                                      NewParam;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      NewParam1;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      NewParam2;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Y67M[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GatherIcon.GatherIcon_C.Change Size
	 */
	struct UGatherIcon_C_ChangeSize_Params
	{
	public:
		float                                                      CharaDistance;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReachDistance;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GatherIcon.GatherIcon_C.Update Gather Icon
	 */
	struct UGatherIcon_C_UpdateGatherIcon_Params
	{
	public:
		bool                                                       IsGaugeFadeIn;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsMotionCanceled;                                        // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7OJO[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GatherIcon.GatherIcon_C.SetGatherImage
	 */
	struct UGatherIcon_C_SetGatherImage_Params
	{
	public:
		ESBTreasureBoxRarity                                       TargetComponent;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GatherIcon.GatherIcon_C.ChargeUp
	 */
	struct UGatherIcon_C_ChargeUp_Params
	{	};

	/**
	 * Function GatherIcon.GatherIcon_C.Fade In
	 */
	struct UGatherIcon_C_FadeIn_Params
	{	};

	/**
	 * Function GatherIcon.GatherIcon_C.Fade Out
	 */
	struct UGatherIcon_C_FadeOut_Params
	{	};

	/**
	 * Function GatherIcon.GatherIcon_C.OnAnimationFinished
	 */
	struct UGatherIcon_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GatherIcon.GatherIcon_C.Construct
	 */
	struct UGatherIcon_C_Construct_Params
	{	};

	/**
	 * Function GatherIcon.GatherIcon_C.AutoChangeInvisible
	 */
	struct UGatherIcon_C_AutoChangeInvisible_Params
	{	};

	/**
	 * Function GatherIcon.GatherIcon_C.AutoChangeVisible
	 */
	struct UGatherIcon_C_AutoChangeVisible_Params
	{	};

	/**
	 * Function GatherIcon.GatherIcon_C.SEreset
	 */
	struct UGatherIcon_C_SEreset_Params
	{	};

	/**
	 * Function GatherIcon.GatherIcon_C.ExecuteUbergraph_GatherIcon
	 */
	struct UGatherIcon_C_ExecuteUbergraph_GatherIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_COC4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GatherIcon.GatherIcon_C.FinishedFade__DelegateSignature
	 */
	struct UGatherIcon_C_FinishedFade__DelegateSignature_Params
	{
	public:
		bool                                                       IsFadeIn;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
