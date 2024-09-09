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
	 * Function ClassIconL.ClassIconL_C.GetIconTexture
	 */
	struct UClassIconL_C_GetIconTexture_Params
	{
	public:
		class UTexture2D*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ClassIconL.ClassIconL_C.OnUpdateClassIcon
	 */
	struct UClassIconL_C_OnUpdateClassIcon_Params
	{	};

	/**
	 * Function ClassIconL.ClassIconL_C.UpdateShadow
	 */
	struct UClassIconL_C_UpdateShadow_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
