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
	 * Function ErrorTooltip.ErrorTooltip_C.Construct
	 */
	struct UErrorTooltip_C_Construct_Params
	{	};

	/**
	 * Function ErrorTooltip.ErrorTooltip_C.SetErrorType
	 */
	struct UErrorTooltip_C_SetErrorType_Params
	{
	public:
		EGuildErrorDisplay                                         ErrorType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ErrorTooltip.ErrorTooltip_C.ExecuteUbergraph_ErrorTooltip
	 */
	struct UErrorTooltip_C_ExecuteUbergraph_ErrorTooltip_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
