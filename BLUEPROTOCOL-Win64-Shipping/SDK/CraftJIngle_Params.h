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
	 * Function CraftJIngle.CraftJIngle_C.GetisFailure
	 */
	struct UCraftJIngle_C_GetisFailure_Params
	{
	public:
		bool                                                       isFail;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CraftJIngle.CraftJIngle_C.GetIsCritical
	 */
	struct UCraftJIngle_C_GetIsCritical_Params
	{
	public:
		bool                                                       IsCritical;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CraftJIngle.CraftJIngle_C.GetIsSuccess
	 */
	struct UCraftJIngle_C_GetIsSuccess_Params
	{
	public:
		bool                                                       IsSuccess;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CraftJIngle.CraftJIngle_C.SetStatus
	 */
	struct UCraftJIngle_C_SetStatus_Params
	{
	public:
		bool                                                       IsSuccess;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsCritical;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isFail;                                                  // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CraftJIngle.CraftJIngle_C.Construct
	 */
	struct UCraftJIngle_C_Construct_Params
	{	};

	/**
	 * Function CraftJIngle.CraftJIngle_C.OnAnimationStarted
	 */
	struct UCraftJIngle_C_OnAnimationStarted_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CraftJIngle.CraftJIngle_C.OnAnimationFinished
	 */
	struct UCraftJIngle_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CraftJIngle.CraftJIngle_C.Play Success
	 */
	struct UCraftJIngle_C_PlaySuccess_Params
	{	};

	/**
	 * Function CraftJIngle.CraftJIngle_C.Play Failure
	 */
	struct UCraftJIngle_C_PlayFailure_Params
	{	};

	/**
	 * Function CraftJIngle.CraftJIngle_C.Play Critical
	 */
	struct UCraftJIngle_C_PlayCritical_Params
	{	};

	/**
	 * Function CraftJIngle.CraftJIngle_C.KickSE
	 */
	struct UCraftJIngle_C_KickSE_Params
	{	};

	/**
	 * Function CraftJIngle.CraftJIngle_C.ExecuteUbergraph_CraftJIngle
	 */
	struct UCraftJIngle_C_ExecuteUbergraph_CraftJIngle_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JZOT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CraftJIngle.CraftJIngle_C.OnAnimFinished__DelegateSignature
	 */
	struct UCraftJIngle_C_OnAnimFinished__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
