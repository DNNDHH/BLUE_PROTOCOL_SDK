﻿#pragma once

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
	 * Function BP_Blaster.BP_Blaster_C.CreateHUD
	 */
	struct ABP_Blaster_C_CreateHUD_Params
	{	};

	/**
	 * Function BP_Blaster.BP_Blaster_C.DebugPrintCurrentBowChargeLevel
	 */
	struct ABP_Blaster_C_DebugPrintCurrentBowChargeLevel_Params
	{	};

	/**
	 * Function BP_Blaster.BP_Blaster_C.OnHitForPlayerReticle
	 */
	struct ABP_Blaster_C_OnHitForPlayerReticle_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bWeakHit;                                                // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Blaster.BP_Blaster_C.OnRayHitForPlayerReticle
	 */
	struct ABP_Blaster_C_OnRayHitForPlayerReticle_Params
	{
	public:
		bool                                                       bHit;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bProperDistance;                                         // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Blaster.BP_Blaster_C.Sheathe
	 */
	struct ABP_Blaster_C_Sheathe_Params
	{	};

	/**
	 * Function BP_Blaster.BP_Blaster_C.UnSheathe
	 */
	struct ABP_Blaster_C_UnSheathe_Params
	{
	public:
		ESBWeaponEquipType                                         EquipType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Blaster.BP_Blaster_C.CreateClassHUD
	 */
	struct ABP_Blaster_C_CreateClassHUD_Params
	{	};

	/**
	 * Function BP_Blaster.BP_Blaster_C.ExecuteUbergraph_BP_Blaster
	 */
	struct ABP_Blaster_C_ExecuteUbergraph_BP_Blaster_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif