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
	 * Function BP_CameraLocationChecker.BP_CameraLocationChecker_C.ReceiveBeginPlay
	 */
	struct ABP_CameraLocationChecker_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_CameraLocationChecker.BP_CameraLocationChecker_C.ReceiveTick
	 */
	struct ABP_CameraLocationChecker_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CameraLocationChecker.BP_CameraLocationChecker_C.InitPostProcessLUT
	 */
	struct ABP_CameraLocationChecker_C_InitPostProcessLUT_Params
	{	};

	/**
	 * Function BP_CameraLocationChecker.BP_CameraLocationChecker_C.CheckPostPorcessVolumeLUT
	 */
	struct ABP_CameraLocationChecker_C_CheckPostPorcessVolumeLUT_Params
	{
	public:
		float                                                      DeltaSecnd;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CameraLocationChecker.BP_CameraLocationChecker_C.ExecuteUbergraph_BP_CameraLocationChecker
	 */
	struct ABP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UMXL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
