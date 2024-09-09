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
	 * Function KeyGuide_Mouse2.KeyGuide_Mouse2_C.ApplyKeyConfigData
	 */
	struct UKeyGuide_Mouse2_C_ApplyKeyConfigData_Params
	{
	public:
		struct FSBPlayerClassKeyConfigData                         KeyConfigData;                                           // 0x0000(0x01D0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function KeyGuide_Mouse2.KeyGuide_Mouse2_C.ExecuteUbergraph_KeyGuide_Mouse2
	 */
	struct UKeyGuide_Mouse2_C_ExecuteUbergraph_KeyGuide_Mouse2_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VFJQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
