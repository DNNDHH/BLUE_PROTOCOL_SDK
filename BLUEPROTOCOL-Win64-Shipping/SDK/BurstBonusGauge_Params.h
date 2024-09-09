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
	 * Function BurstBonusGauge.BurstBonusGauge_C.StopAnim
	 */
	struct UBurstBonusGauge_C_StopAnim_Params
	{	};

	/**
	 * Function BurstBonusGauge.BurstBonusGauge_C.PlayAnimBlink2
	 */
	struct UBurstBonusGauge_C_PlayAnimBlink2_Params
	{	};

	/**
	 * Function BurstBonusGauge.BurstBonusGauge_C.PlayAnimBlink1
	 */
	struct UBurstBonusGauge_C_PlayAnimBlink1_Params
	{	};

	/**
	 * Function BurstBonusGauge.BurstBonusGauge_C.PlayAnimNormal
	 */
	struct UBurstBonusGauge_C_PlayAnimNormal_Params
	{	};

	/**
	 * Function BurstBonusGauge.BurstBonusGauge_C.SetGaugeSize
	 */
	struct UBurstBonusGauge_C_SetGaugeSize_Params
	{
	public:
		struct FVector2D                                           InSize;                                                  // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BurstBonusGauge.BurstBonusGauge_C.SetDefaultGaugeSize
	 */
	struct UBurstBonusGauge_C_SetDefaultGaugeSize_Params
	{
	public:
		struct FVector2D                                           InDefaultGaugeSize;                                      // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BurstBonusGauge.BurstBonusGauge_C.OnUpdateTime
	 */
	struct UBurstBonusGauge_C_OnUpdateTime_Params
	{	};

	/**
	 * Function BurstBonusGauge.BurstBonusGauge_C.OnUpdateLV
	 */
	struct UBurstBonusGauge_C_OnUpdateLV_Params
	{	};

	/**
	 * Function BurstBonusGauge.BurstBonusGauge_C.OnSetup
	 */
	struct UBurstBonusGauge_C_OnSetup_Params
	{	};

	/**
	 * Function BurstBonusGauge.BurstBonusGauge_C.UpdateGaugeSwitcher
	 */
	struct UBurstBonusGauge_C_UpdateGaugeSwitcher_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
