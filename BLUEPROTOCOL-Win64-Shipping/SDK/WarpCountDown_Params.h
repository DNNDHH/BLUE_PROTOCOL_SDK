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
	 * Function WarpCountDown.WarpCountDown_C.GetCurrInteractWaitTime
	 */
	struct UWarpCountDown_C_GetCurrInteractWaitTime_Params
	{
	public:
		float                                                      CurrInteractWaitTime;                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WarpCountDown.WarpCountDown_C.PlayAnimOut
	 */
	struct UWarpCountDown_C_PlayAnimOut_Params
	{	};

	/**
	 * Function WarpCountDown.WarpCountDown_C.PlayAnimIn
	 */
	struct UWarpCountDown_C_PlayAnimIn_Params
	{	};

	/**
	 * Function WarpCountDown.WarpCountDown_C.OnCountdownCancelDelegate_イベント
	 */
	struct UWarpCountDown_C_OnCountdownCancelDelegate__Params
	{	};

	/**
	 * Function WarpCountDown.WarpCountDown_C.OnCountdownInteractionDelegate_イベント
	 */
	struct UWarpCountDown_C_OnCountdownInteractionDelegate__Params
	{
	public:
		bool                                                       bPress;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WarpCountDown.WarpCountDown_C.OnInteractRelease
	 */
	struct UWarpCountDown_C_OnInteractRelease_Params
	{	};

	/**
	 * Function WarpCountDown.WarpCountDown_C.OnInteractPress
	 */
	struct UWarpCountDown_C_OnInteractPress_Params
	{	};

	/**
	 * Function WarpCountDown.WarpCountDown_C.ClearInputParam
	 */
	struct UWarpCountDown_C_ClearInputParam_Params
	{	};

	/**
	 * Function WarpCountDown.WarpCountDown_C.SetInputBlock
	 */
	struct UWarpCountDown_C_SetInputBlock_Params
	{
	public:
		bool                                                       IsInputBlock;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HIEE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WarpCountDown.WarpCountDown_C.UpdateInteractGauge
	 */
	struct UWarpCountDown_C_UpdateInteractGauge_Params
	{	};

	/**
	 * Function WarpCountDown.WarpCountDown_C.SetRemainCount
	 */
	struct UWarpCountDown_C_SetRemainCount_Params
	{
	public:
		float                                                      InRemainCount;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WarpCountDown.WarpCountDown_C.SetLabel
	 */
	struct UWarpCountDown_C_SetLabel_Params
	{	};

	/**
	 * Function WarpCountDown.WarpCountDown_C.Update
	 */
	struct UWarpCountDown_C_Update_Params
	{
	public:
		float                                                      InDeltaTime;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MPC7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WarpCountDown.WarpCountDown_C.Unbind
	 */
	struct UWarpCountDown_C_Unbind_Params
	{	};

	/**
	 * Function WarpCountDown.WarpCountDown_C.Bind
	 */
	struct UWarpCountDown_C_Bind_Params
	{	};

	/**
	 * Function WarpCountDown.WarpCountDown_C.Terminate
	 */
	struct UWarpCountDown_C_Terminate_Params
	{	};

	/**
	 * Function WarpCountDown.WarpCountDown_C.Initialize
	 */
	struct UWarpCountDown_C_Initialize_Params
	{	};

	/**
	 * Function WarpCountDown.WarpCountDown_C.Construct
	 */
	struct UWarpCountDown_C_Construct_Params
	{	};

	/**
	 * Function WarpCountDown.WarpCountDown_C.Tick
	 */
	struct UWarpCountDown_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WarpCountDown.WarpCountDown_C.Destruct
	 */
	struct UWarpCountDown_C_Destruct_Params
	{	};

	/**
	 * Function WarpCountDown.WarpCountDown_C.OnAnimationFinished
	 */
	struct UWarpCountDown_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WarpCountDown.WarpCountDown_C.ExecuteUbergraph_WarpCountDown
	 */
	struct UWarpCountDown_C_ExecuteUbergraph_WarpCountDown_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
