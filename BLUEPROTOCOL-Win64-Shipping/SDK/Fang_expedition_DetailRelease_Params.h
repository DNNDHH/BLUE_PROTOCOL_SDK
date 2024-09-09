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
	 * Function Fang_expedition_DetailRelease.Fang_expedition_DetailRelease_C.Init
	 */
	struct UFang_expedition_DetailRelease_C_Init_Params
	{	};

	/**
	 * Function Fang_expedition_DetailRelease.Fang_expedition_DetailRelease_C.SetData
	 */
	struct UFang_expedition_DetailRelease_C_SetData_Params
	{
	public:
		TArray<struct FSBFang_expeditionLimitData>                 LimitData;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       NG;                                                      // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K6YB[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Fang_expedition_DetailRelease.Fang_expedition_DetailRelease_C.Construct
	 */
	struct UFang_expedition_DetailRelease_C_Construct_Params
	{	};

	/**
	 * Function Fang_expedition_DetailRelease.Fang_expedition_DetailRelease_C.ExecuteUbergraph_Fang_expedition_DetailRelease
	 */
	struct UFang_expedition_DetailRelease_C_ExecuteUbergraph_Fang_expedition_DetailRelease_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
