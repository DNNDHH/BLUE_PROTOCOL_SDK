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
	 * Function US_SetPartyStrategy.US_SetPartyStrategy_C.ReceiveOnActivate
	 */
	struct UUS_SetPartyStrategy_C_ReceiveOnActivate_Params
	{	};

	/**
	 * Function US_SetPartyStrategy.US_SetPartyStrategy_C.ReceiveOnDeactivate
	 */
	struct UUS_SetPartyStrategy_C_ReceiveOnDeactivate_Params
	{	};

	/**
	 * Function US_SetPartyStrategy.US_SetPartyStrategy_C.ExecuteUbergraph_US_SetPartyStrategy
	 */
	struct UUS_SetPartyStrategy_C_ExecuteUbergraph_US_SetPartyStrategy_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7XEH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
