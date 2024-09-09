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
	 * Function CmnExpOverflowRewardIcon.CmnExpOverflowRewardIcon_C.CreateTooltip
	 */
	struct UCmnExpOverflowRewardIcon_C_CreateTooltip_Params
	{
	public:
		bool                                                       bInUpdateTooltip;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInIsNoTooltip;                                          // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CmnExpOverflowRewardIcon.CmnExpOverflowRewardIcon_C.SetIconType
	 */
	struct UCmnExpOverflowRewardIcon_C_SetIconType_Params
	{
	public:
		bool                                                       bInIsClassLevelCounterStop;                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInIsClassLevelLimit;                                    // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInIsClassLevelLimitSmallerThanCounterStop;              // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInIsNoTooltip;                                          // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CmnExpOverflowRewardIcon.CmnExpOverflowRewardIcon_C.Construct
	 */
	struct UCmnExpOverflowRewardIcon_C_Construct_Params
	{	};

	/**
	 * Function CmnExpOverflowRewardIcon.CmnExpOverflowRewardIcon_C.ExecuteUbergraph_CmnExpOverflowRewardIcon
	 */
	struct UCmnExpOverflowRewardIcon_C_ExecuteUbergraph_CmnExpOverflowRewardIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
