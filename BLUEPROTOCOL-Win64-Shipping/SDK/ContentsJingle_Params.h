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
	 * Function ContentsJingle.ContentsJingle_C.IsAnyAnimationPlaying?
	 */
	struct UContentsJingle_C_IsAnyAnimationPlaying_Params
	{
	public:
		bool                                                       bIsPlaying;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ContentsJingle.ContentsJingle_C.Construct
	 */
	struct UContentsJingle_C_Construct_Params
	{	};

	/**
	 * Function ContentsJingle.ContentsJingle_C.ExecuteUbergraph_ContentsJingle
	 */
	struct UContentsJingle_C_ExecuteUbergraph_ContentsJingle_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VG69[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
