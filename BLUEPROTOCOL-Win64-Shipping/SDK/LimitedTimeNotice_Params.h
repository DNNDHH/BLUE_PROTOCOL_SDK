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
	 * Function LimitedTimeNotice.LimitedTimeNotice_C.Set Limited Time
	 */
	struct ULimitedTimeNotice_C_SetLimitedTime_Params
	{
	public:
		struct FDateTime                                           InEndTime;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LimitedTimeNotice.LimitedTimeNotice_C.Update
	 */
	struct ULimitedTimeNotice_C_Update_Params
	{	};

	/**
	 * Function LimitedTimeNotice.LimitedTimeNotice_C.ExecuteUbergraph_LimitedTimeNotice
	 */
	struct ULimitedTimeNotice_C_ExecuteUbergraph_LimitedTimeNotice_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
