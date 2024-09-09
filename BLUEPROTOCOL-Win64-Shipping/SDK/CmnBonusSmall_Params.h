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
	 * Function CmnBonusSmall.CmnBonusSmall_C.UpdateVisibilityByMasterImagineRecepi
	 */
	struct UCmnBonusSmall_C_UpdateVisibilityByMasterImagineRecepi_Params
	{
	public:
		struct FMasterImagineRecepi                                MasterImagineRecepi;                                     // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function CmnBonusSmall.CmnBonusSmall_C.ExecuteUbergraph_CmnBonusSmall
	 */
	struct UCmnBonusSmall_C_ExecuteUbergraph_CmnBonusSmall_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_01NR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
