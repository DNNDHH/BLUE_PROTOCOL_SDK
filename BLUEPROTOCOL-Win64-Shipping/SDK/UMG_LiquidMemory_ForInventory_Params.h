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
	 * Function UMG_LiquidMemory_ForInventory.UMG_LiquidMemory_ForInventory_C.SetLiquidMemoryListItemNum
	 */
	struct UUMG_LiquidMemory_ForInventory_C_SetLiquidMemoryListItemNum_Params
	{
	public:
		int32_t                                                    InItemNum;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_LiquidMemory_ForInventory.UMG_LiquidMemory_ForInventory_C.Open
	 */
	struct UUMG_LiquidMemory_ForInventory_C_Open_Params
	{	};

	/**
	 * Function UMG_LiquidMemory_ForInventory.UMG_LiquidMemory_ForInventory_C.Destruct
	 */
	struct UUMG_LiquidMemory_ForInventory_C_Destruct_Params
	{	};

	/**
	 * Function UMG_LiquidMemory_ForInventory.UMG_LiquidMemory_ForInventory_C.Construct
	 */
	struct UUMG_LiquidMemory_ForInventory_C_Construct_Params
	{	};

	/**
	 * Function UMG_LiquidMemory_ForInventory.UMG_LiquidMemory_ForInventory_C.OnAccumulateLiquidMemory_Event
	 */
	struct UUMG_LiquidMemory_ForInventory_C_OnAccumulateLiquidMemory_Event_Params
	{
	public:
		int32_t                                                    InRetCode;                                               // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QUOM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FSBLiquidMemoryInfo>                         InUpdatedLiquidMemoryInfos;                              // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UMG_LiquidMemory_ForInventory.UMG_LiquidMemory_ForInventory_C.ExecOpen
	 */
	struct UUMG_LiquidMemory_ForInventory_C_ExecOpen_Params
	{	};

	/**
	 * Function UMG_LiquidMemory_ForInventory.UMG_LiquidMemory_ForInventory_C.RewardBoostUpdate
	 */
	struct UUMG_LiquidMemory_ForInventory_C_RewardBoostUpdate_Params
	{	};

	/**
	 * Function UMG_LiquidMemory_ForInventory.UMG_LiquidMemory_ForInventory_C.RewardBoostUpdateComplete
	 */
	struct UUMG_LiquidMemory_ForInventory_C_RewardBoostUpdateComplete_Params
	{
	public:
		int32_t                                                    InRetCode;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_LiquidMemory_ForInventory.UMG_LiquidMemory_ForInventory_C.ExecuteUbergraph_UMG_LiquidMemory_ForInventory
	 */
	struct UUMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
