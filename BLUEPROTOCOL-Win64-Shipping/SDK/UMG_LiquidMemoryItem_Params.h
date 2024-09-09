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
	 * Function UMG_LiquidMemoryItem.UMG_LiquidMemoryItem_C.UpdateBonusStatus
	 */
	struct UUMG_LiquidMemoryItem_C_UpdateBonusStatus_Params
	{
	public:
		int32_t                                                    LiquidMemoryId;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Visible;                                                 // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_LiquidMemoryItem.UMG_LiquidMemoryItem_C.Setup Tooltip Widget
	 */
	struct UUMG_LiquidMemoryItem_C_SetupTooltipWidget_Params
	{
	public:
		TArray<struct FSBRewardBoostTooltipData>                   DataList;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UMG_LiquidMemoryItem.UMG_LiquidMemoryItem_C.SetAccumulateConditionText
	 */
	struct UUMG_LiquidMemoryItem_C_SetAccumulateConditionText_Params
	{
	public:
		TArray<struct FSBTextTableHash>                            InTextId;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UMG_LiquidMemoryItem.UMG_LiquidMemoryItem_C.SetBottleStatus
	 */
	struct UUMG_LiquidMemoryItem_C_SetBottleStatus_Params
	{
	public:
		bool                                                       InIsLiquidMemoryInfoValid;                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LFIE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBLiquidMemoryInfo                                 InLiquidMemoryInfo;                                      // 0x0008(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UMG_LiquidMemoryItem.UMG_LiquidMemoryItem_C.SetEfficacyTypeText
	 */
	struct UUMG_LiquidMemoryItem_C_SetEfficacyTypeText_Params
	{
	public:
		struct FSBTextTableHash                                    InNameTextId;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FSBTextTableHash                                    InDescTextId;                                            // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
