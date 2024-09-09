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
	 * Function WBP_ToolTip_RemainTime.WBP_ToolTip_RemainTime_C.SetText
	 */
	struct UWBP_ToolTip_RemainTime_C_SetText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FDateTime                                           DateTime;                                                // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ToolTip_RemainTime.WBP_ToolTip_RemainTime_C.ChangeRecepiTooltip
	 */
	struct UWBP_ToolTip_RemainTime_C_ChangeRecepiTooltip_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FString                                              EventTermId;                                             // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ToolTip_RemainTime.WBP_ToolTip_RemainTime_C.ExecuteUbergraph_WBP_ToolTip_RemainTime
	 */
	struct UWBP_ToolTip_RemainTime_C_ExecuteUbergraph_WBP_ToolTip_RemainTime_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
