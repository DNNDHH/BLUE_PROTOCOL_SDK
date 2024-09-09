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
	 * Function RevolutionCount.RevolutionCount_C.SetTextCount
	 */
	struct URevolutionCount_C_SetTextCount_Params
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0F0B[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function RevolutionCount.RevolutionCount_C.SetIconVisibility
	 */
	struct URevolutionCount_C_SetIconVisibility_Params
	{
	public:
		bool                                                       NoHitSelforCollapse;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RevolutionCount.RevolutionCount_C.Construct
	 */
	struct URevolutionCount_C_Construct_Params
	{	};

	/**
	 * Function RevolutionCount.RevolutionCount_C.Tick
	 */
	struct URevolutionCount_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RevolutionCount.RevolutionCount_C.On_StartIntervalRevolution
	 */
	struct URevolutionCount_C_On_StartIntervalRevolution_Params
	{	};

	/**
	 * Function RevolutionCount.RevolutionCount_C.On_EndIntervalRevolution
	 */
	struct URevolutionCount_C_On_EndIntervalRevolution_Params
	{	};

	/**
	 * Function RevolutionCount.RevolutionCount_C.Destruct
	 */
	struct URevolutionCount_C_Destruct_Params
	{	};

	/**
	 * Function RevolutionCount.RevolutionCount_C.ExecuteUbergraph_RevolutionCount
	 */
	struct URevolutionCount_C_ExecuteUbergraph_RevolutionCount_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
