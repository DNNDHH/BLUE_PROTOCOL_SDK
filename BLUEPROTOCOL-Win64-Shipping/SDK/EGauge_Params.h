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
	 * Function EGauge.EGauge_C.SetDefaultGaugeSize
	 */
	struct UEGauge_C_SetDefaultGaugeSize_Params
	{
	public:
		struct FVector2D                                           InDefaultGaugeSize;                                      // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EGauge.EGauge_C.DebugPrintTime
	 */
	struct UEGauge_C_DebugPrintTime_Params
	{	};

	/**
	 * Function EGauge.EGauge_C.OnPlayAnimBlink
	 */
	struct UEGauge_C_OnPlayAnimBlink_Params
	{	};

	/**
	 * Function EGauge.EGauge_C.OnPlayAnimNormal
	 */
	struct UEGauge_C_OnPlayAnimNormal_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
