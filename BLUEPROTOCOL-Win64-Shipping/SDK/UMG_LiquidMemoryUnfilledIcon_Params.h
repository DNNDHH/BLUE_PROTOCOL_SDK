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
	 * Function UMG_LiquidMemoryUnfilledIcon.UMG_LiquidMemoryUnfilledIcon_C.SetAccumulatedRate
	 */
	struct UUMG_LiquidMemoryUnfilledIcon_C_SetAccumulatedRate_Params
	{
	public:
		float                                                      InAccumulatedRate;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_LiquidMemoryUnfilledIcon.UMG_LiquidMemoryUnfilledIcon_C.PreConstruct
	 */
	struct UUMG_LiquidMemoryUnfilledIcon_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_LiquidMemoryUnfilledIcon.UMG_LiquidMemoryUnfilledIcon_C.SetLiquidMemory
	 */
	struct UUMG_LiquidMemoryUnfilledIcon_C_SetLiquidMemory_Params
	{
	public:
		int32_t                                                    InLiquidMemoryId;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InAccumulatedRate;                                       // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_LiquidMemoryUnfilledIcon.UMG_LiquidMemoryUnfilledIcon_C.ExecuteUbergraph_UMG_LiquidMemoryUnfilledIcon
	 */
	struct UUMG_LiquidMemoryUnfilledIcon_C_ExecuteUbergraph_UMG_LiquidMemoryUnfilledIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
