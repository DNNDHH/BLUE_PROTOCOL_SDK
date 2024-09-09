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
	 * Function Startup.Startup_C.SequenceEvent__ENTRYPOINTStartup_1
	 */
	struct UStartup_C_SequenceEvent__ENTRYPOINTStartup_1_Params
	{	};

	/**
	 * Function Startup.Startup_C.UpdateWatchTime
	 */
	struct UStartup_C_UpdateWatchTime_Params
	{	};

	/**
	 * Function Startup.Startup_C.Is Today Watched
	 */
	struct UStartup_C_IsTodayWatched_Params
	{
	public:
		bool                                                       IsTodayWatch;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Startup.Startup_C.StartAnimation
	 */
	struct UStartup_C_StartAnimation_Params
	{
	public:
		class UWidgetAnimation*                                    InAnimation;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InStartTimeOffset;                                       // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6952[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Startup.Startup_C.TrySkip
	 */
	struct UStartup_C_TrySkip_Params
	{	};

	/**
	 * Function Startup.Startup_C.InitSkipPoint
	 */
	struct UStartup_C_InitSkipPoint_Params
	{	};

	/**
	 * Function Startup.Startup_C.InitAnimationDelegate
	 */
	struct UStartup_C_InitAnimationDelegate_Params
	{	};

	/**
	 * Function Startup.Startup_C.PlayStackTop
	 */
	struct UStartup_C_PlayStackTop_Params
	{	};

	/**
	 * Function Startup.Startup_C.AnimFinished
	 */
	struct UStartup_C_AnimFinished_Params
	{	};

	/**
	 * Function Startup.Startup_C.Construct
	 */
	struct UStartup_C_Construct_Params
	{	};

	/**
	 * Function Startup.Startup_C.CallFinish
	 */
	struct UStartup_C_CallFinish_Params
	{	};

	/**
	 * Function Startup.Startup_C.CustomEvent_2
	 */
	struct UStartup_C_CustomEvent_2_Params
	{	};

	/**
	 * Function Startup.Startup_C.BndEvt__AllowSkip_K2Node_ComponentBoundEvent_75_OnButtonClickedEvent__DelegateSignature
	 */
	struct UStartup_C_BndEvt__AllowSkip_K2Node_ComponentBoundEvent_75_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Startup.Startup_C.RequestBGM
	 */
	struct UStartup_C_RequestBGM_Params
	{	};

	/**
	 * Function Startup.Startup_C.OnAnimationStarted
	 */
	struct UStartup_C_OnAnimationStarted_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Startup.Startup_C.Destruct
	 */
	struct UStartup_C_Destruct_Params
	{	};

	/**
	 * Function Startup.Startup_C.CustomEvent_1
	 */
	struct UStartup_C_CustomEvent_1_Params
	{	};

	/**
	 * Function Startup.Startup_C.TerminationRequest
	 */
	struct UStartup_C_TerminationRequest_Params
	{	};

	/**
	 * Function Startup.Startup_C.TryRemove
	 */
	struct UStartup_C_TryRemove_Params
	{	};

	/**
	 * Function Startup.Startup_C.ExecuteUbergraph_Startup
	 */
	struct UStartup_C_ExecuteUbergraph_Startup_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Startup.Startup_C.OnFinish__DelegateSignature
	 */
	struct UStartup_C_OnFinish__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
