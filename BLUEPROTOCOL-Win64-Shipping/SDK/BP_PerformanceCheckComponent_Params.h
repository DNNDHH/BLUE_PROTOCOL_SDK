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
	 * Function BP_PerformanceCheckComponent.BP_PerformanceCheckComponent_C.GenerateFilename
	 */
	struct UBP_PerformanceCheckComponent_C_GenerateFilename_Params
	{
	public:
		class FString                                              Direction;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PerformanceCheckComponent.BP_PerformanceCheckComponent_C.PerformanceCheckEvent
	 */
	struct UBP_PerformanceCheckComponent_C_PerformanceCheckEvent_Params
	{	};

	/**
	 * Function BP_PerformanceCheckComponent.BP_PerformanceCheckComponent_C.OnPerformanceCheckStop
	 */
	struct UBP_PerformanceCheckComponent_C_OnPerformanceCheckStop_Params
	{	};

	/**
	 * Function BP_PerformanceCheckComponent.BP_PerformanceCheckComponent_C.OnPerformanceCheckStart
	 */
	struct UBP_PerformanceCheckComponent_C_OnPerformanceCheckStart_Params
	{	};

	/**
	 * Function BP_PerformanceCheckComponent.BP_PerformanceCheckComponent_C.ExecuteUbergraph_BP_PerformanceCheckComponent
	 */
	struct UBP_PerformanceCheckComponent_C_ExecuteUbergraph_BP_PerformanceCheckComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_16LF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
