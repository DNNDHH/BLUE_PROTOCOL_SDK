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
	 * Function StackBEnhanceImagineTypeIcon.StackBEnhanceImagineTypeIcon_C.SetIconColor
	 */
	struct UStackBEnhanceImagineTypeIcon_C_SetIconColor_Params
	{
	public:
		struct FLinearColor                                        NewParam;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StackBEnhanceImagineTypeIcon.StackBEnhanceImagineTypeIcon_C.SetMasterData
	 */
	struct UStackBEnhanceImagineTypeIcon_C_SetMasterData_Params
	{
	public:
		struct FSBMasterImagine                                    SBMasterImagine;                                         // 0x0000(0x00B8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
