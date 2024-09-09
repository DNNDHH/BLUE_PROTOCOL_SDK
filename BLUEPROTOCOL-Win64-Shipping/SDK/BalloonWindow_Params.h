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
	 * Function BalloonWindow.BalloonWindow_C.PlayAnimOut
	 */
	struct UBalloonWindow_C_PlayAnimOut_Params
	{	};

	/**
	 * Function BalloonWindow.BalloonWindow_C.PlayAnimIn
	 */
	struct UBalloonWindow_C_PlayAnimIn_Params
	{	};

	/**
	 * Function BalloonWindow.BalloonWindow_C.OnShow
	 */
	struct UBalloonWindow_C_OnShow_Params
	{
	public:
		struct FSBBalloonWindowRequest                             InRequest;                                               // 0x0000(0x0040)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BalloonWindow.BalloonWindow_C.OnTick
	 */
	struct UBalloonWindow_C_OnTick_Params
	{	};

	/**
	 * Function BalloonWindow.BalloonWindow_C.CheckDistanceLimit
	 */
	struct UBalloonWindow_C_CheckDistanceLimit_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BDA8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BalloonWindow.BalloonWindow_C.GetBasePosition
	 */
	struct UBalloonWindow_C_GetBasePosition_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BalloonWindow.BalloonWindow_C.AdjustPosition
	 */
	struct UBalloonWindow_C_AdjustPosition_Params
	{
	public:
		struct FVector2D                                           Position;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_N4XM[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BalloonWindow.BalloonWindow_C.GetFaceCaptureComponent
	 */
	struct UBalloonWindow_C_GetFaceCaptureComponent_Params
	{
	public:
		class USceneCaptureComponent2D*                            Component;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BalloonWindow.BalloonWindow_C.SetText
	 */
	struct UBalloonWindow_C_SetText_Params
	{
	public:
		struct FSBBalloonWindowRequest                             SBBalloonWindowRequest;                                  // 0x0000(0x0040)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BalloonWindow.BalloonWindow_C.OnDestruct
	 */
	struct UBalloonWindow_C_OnDestruct_Params
	{	};

	/**
	 * Function BalloonWindow.BalloonWindow_C.Destruct
	 */
	struct UBalloonWindow_C_Destruct_Params
	{	};

	/**
	 * Function BalloonWindow.BalloonWindow_C.OnAnimationFinished
	 */
	struct UBalloonWindow_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BalloonWindow.BalloonWindow_C.ExecuteUbergraph_BalloonWindow
	 */
	struct UBalloonWindow_C_ExecuteUbergraph_BalloonWindow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PZAD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
