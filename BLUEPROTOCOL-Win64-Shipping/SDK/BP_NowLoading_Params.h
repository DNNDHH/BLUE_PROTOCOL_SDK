﻿#pragma once

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
	 * Function BP_NowLoading.BP_NowLoading_C.StartAnim
	 */
	struct UBP_NowLoading_C_StartAnim_Params
	{	};

	/**
	 * Function BP_NowLoading.BP_NowLoading_C.StopAnim
	 */
	struct UBP_NowLoading_C_StopAnim_Params
	{	};

	/**
	 * Function BP_NowLoading.BP_NowLoading_C.ExecuteUbergraph_BP_NowLoading
	 */
	struct UBP_NowLoading_C_ExecuteUbergraph_BP_NowLoading_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_05EA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif