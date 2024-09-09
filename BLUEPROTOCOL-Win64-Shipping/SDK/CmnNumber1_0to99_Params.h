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
	 * Function CmnNumber1_0to99.CmnNumber1_0to99_C.GetNumber
	 */
	struct UCmnNumber1_0to99_C_GetNumber_Params
	{
	public:
		int32_t                                                    OutNumber;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CmnNumber1_0to99.CmnNumber1_0to99_C.SetNumber
	 */
	struct UCmnNumber1_0to99_C_SetNumber_Params
	{
	public:
		int32_t                                                    InNumber;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
