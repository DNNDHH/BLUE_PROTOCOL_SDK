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
	 * Function KeyGuide_Gamepad2_Mount.KeyGuide_Gamepad2_Mount_C.ApplyKeyConfigData
	 */
	struct UKeyGuide_Gamepad2_Mount_C_ApplyKeyConfigData_Params
	{
	public:
		struct FSBPlayerClassKeyConfigData                         KeyConfigData;                                           // 0x0000(0x01D0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function KeyGuide_Gamepad2_Mount.KeyGuide_Gamepad2_Mount_C.ExecuteUbergraph_KeyGuide_Gamepad2_Mount
	 */
	struct UKeyGuide_Gamepad2_Mount_C_ExecuteUbergraph_KeyGuide_Gamepad2_Mount_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
