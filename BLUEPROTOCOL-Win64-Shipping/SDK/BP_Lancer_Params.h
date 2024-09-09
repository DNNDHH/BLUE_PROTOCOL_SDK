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
	 * Function BP_Lancer.BP_Lancer_C.CreateHUD
	 */
	struct ABP_Lancer_C_CreateHUD_Params
	{	};

	/**
	 * Function BP_Lancer.BP_Lancer_C.UnSheathe
	 */
	struct ABP_Lancer_C_UnSheathe_Params
	{
	public:
		ESBWeaponEquipType                                         EquipType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Lancer.BP_Lancer_C.Sheathe
	 */
	struct ABP_Lancer_C_Sheathe_Params
	{	};

	/**
	 * Function BP_Lancer.BP_Lancer_C.CreateClassHUD
	 */
	struct ABP_Lancer_C_CreateClassHUD_Params
	{	};

	/**
	 * Function BP_Lancer.BP_Lancer_C.ExecuteUbergraph_BP_Lancer
	 */
	struct ABP_Lancer_C_ExecuteUbergraph_BP_Lancer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
