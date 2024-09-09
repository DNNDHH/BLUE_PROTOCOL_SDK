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
	 * Function CustomMenuPartTagChange.CustomMenuPartTagChange_C.SetupForInt
	 */
	struct UCustomMenuPartTagChange_C_SetupForInt_Params
	{
	public:
		int32_t                                                    InDelta;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CustomMenuPartTagChange.CustomMenuPartTagChange_C.Setup
	 */
	struct UCustomMenuPartTagChange_C_Setup_Params
	{
	public:
		ESlotDataChangeType                                        Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
