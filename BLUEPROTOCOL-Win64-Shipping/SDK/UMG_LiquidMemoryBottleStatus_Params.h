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
	 * Function UMG_LiquidMemoryBottleStatus.UMG_LiquidMemoryBottleStatus_C.SetBottleLiquidMemory_One
	 */
	struct UUMG_LiquidMemoryBottleStatus_C_SetBottleLiquidMemory_One_Params
	{
	public:
		int32_t                                                    InBottleId;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InLiquidMemoryId;                                        // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InAccumulatedRate;                                       // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VY8O[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_LiquidMemoryBottleStatus.UMG_LiquidMemoryBottleStatus_C.SetBottleAccumulatedRate_One
	 */
	struct UUMG_LiquidMemoryBottleStatus_C_SetBottleAccumulatedRate_One_Params
	{
	public:
		int32_t                                                    InBottleId;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AccumlatedRate;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_LiquidMemoryBottleStatus.UMG_LiquidMemoryBottleStatus_C.SetBottleStatus
	 */
	struct UUMG_LiquidMemoryBottleStatus_C_SetBottleStatus_Params
	{
	public:
		struct FSBLiquidMemoryInfo                                 InLiquidMemoryInfo;                                      // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UMG_LiquidMemoryBottleStatus.UMG_LiquidMemoryBottleStatus_C.Construct
	 */
	struct UUMG_LiquidMemoryBottleStatus_C_Construct_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryBottleStatus.UMG_LiquidMemoryBottleStatus_C.PreConstruct
	 */
	struct UUMG_LiquidMemoryBottleStatus_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_LiquidMemoryBottleStatus.UMG_LiquidMemoryBottleStatus_C.ExecuteUbergraph_UMG_LiquidMemoryBottleStatus
	 */
	struct UUMG_LiquidMemoryBottleStatus_C_ExecuteUbergraph_UMG_LiquidMemoryBottleStatus_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
