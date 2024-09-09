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
	 * Function ChatLogFloatStamp_DateTime.ChatLogFloatStamp_DateTime_C.SetExpiryDateTime
	 */
	struct UChatLogFloatStamp_DateTime_C_SetExpiryDateTime_Params
	{
	public:
		struct FDateTime                                           ExpiryDateTime;                                          // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatLogFloatStamp_DateTime.ChatLogFloatStamp_DateTime_C.ExecuteUbergraph_ChatLogFloatStamp_DateTime
	 */
	struct UChatLogFloatStamp_DateTime_C_ExecuteUbergraph_ChatLogFloatStamp_DateTime_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7K6M[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
