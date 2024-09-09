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
	 * Function CmnImageThrobber.CmnImageThrobber_C.Construct
	 */
	struct UCmnImageThrobber_C_Construct_Params
	{	};

	/**
	 * Function CmnImageThrobber.CmnImageThrobber_C.StartAnim
	 */
	struct UCmnImageThrobber_C_StartAnim_Params
	{	};

	/**
	 * Function CmnImageThrobber.CmnImageThrobber_C.StopAnim
	 */
	struct UCmnImageThrobber_C_StopAnim_Params
	{	};

	/**
	 * Function CmnImageThrobber.CmnImageThrobber_C.ExecuteUbergraph_CmnImageThrobber
	 */
	struct UCmnImageThrobber_C_ExecuteUbergraph_CmnImageThrobber_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2TX8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
