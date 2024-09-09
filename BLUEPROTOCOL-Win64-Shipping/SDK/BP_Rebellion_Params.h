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
	 * Function BP_Rebellion.BP_Rebellion_C.CreateHUD
	 */
	struct ABP_Rebellion_C_CreateHUD_Params
	{	};

	/**
	 * Function BP_Rebellion.BP_Rebellion_C.GetHitCollision
	 */
	struct ABP_Rebellion_C_GetHitCollision_Params
	{
	public:
		class AActor*                                              HitActor;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 HitComp;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Rebellion.BP_Rebellion_C.PrintShieldDurability
	 */
	struct ABP_Rebellion_C_PrintShieldDurability_Params
	{	};

	/**
	 * Function BP_Rebellion.BP_Rebellion_C.Sheathe
	 */
	struct ABP_Rebellion_C_Sheathe_Params
	{	};

	/**
	 * Function BP_Rebellion.BP_Rebellion_C.UnSheathe
	 */
	struct ABP_Rebellion_C_UnSheathe_Params
	{
	public:
		ESBWeaponEquipType                                         EquipType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Rebellion.BP_Rebellion_C.OnRayHitForPlayerReticle
	 */
	struct ABP_Rebellion_C_OnRayHitForPlayerReticle_Params
	{
	public:
		bool                                                       bHit;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bProperDistance;                                         // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Rebellion.BP_Rebellion_C.OnHitForPlayerReticle
	 */
	struct ABP_Rebellion_C_OnHitForPlayerReticle_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bWeakHit;                                                // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Rebellion.BP_Rebellion_C.CreateClassHUD
	 */
	struct ABP_Rebellion_C_CreateClassHUD_Params
	{	};

	/**
	 * Function BP_Rebellion.BP_Rebellion_C.ExecuteUbergraph_BP_Rebellion
	 */
	struct ABP_Rebellion_C_ExecuteUbergraph_BP_Rebellion_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
