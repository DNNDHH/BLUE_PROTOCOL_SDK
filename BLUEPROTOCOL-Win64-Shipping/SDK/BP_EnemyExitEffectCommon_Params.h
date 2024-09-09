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
	 * Function BP_EnemyExitEffectCommon.BP_EnemyExitEffectCommon_C.ReceiveBegin
	 */
	struct UBP_EnemyExitEffectCommon_C_ReceiveBegin_Params
	{
	public:
		class ASBEnemyCharacter*                                   OwnerEnemyCharacter;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EnemyExitEffectCommon.BP_EnemyExitEffectCommon_C.SetEnemyMaterial
	 */
	struct UBP_EnemyExitEffectCommon_C_SetEnemyMaterial_Params
	{
	public:
		class ASBEnemyCharacter*                                   Enemy;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EnemyExitEffectCommon.BP_EnemyExitEffectCommon_C.SetWeaponMatrial
	 */
	struct UBP_EnemyExitEffectCommon_C_SetWeaponMatrial_Params
	{
	public:
		class ASBEnemyCharacter*                                   Enemy;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EnemyExitEffectCommon.BP_EnemyExitEffectCommon_C.SetAttachedMeshMaterial
	 */
	struct UBP_EnemyExitEffectCommon_C_SetAttachedMeshMaterial_Params
	{
	public:
		class ASBEnemyCharacter*                                   Enemy;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EnemyExitEffectCommon.BP_EnemyExitEffectCommon_C.ReceiveTick
	 */
	struct UBP_EnemyExitEffectCommon_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Y8Q1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ASBEnemyCharacter*                                   OwnerEnemyCharacter;                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EnemyExitEffectCommon.BP_EnemyExitEffectCommon_C.SetFaceMaterial
	 */
	struct UBP_EnemyExitEffectCommon_C_SetFaceMaterial_Params
	{
	public:
		class ASBEnemyCharacter*                                   Enemy;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EnemyExitEffectCommon.BP_EnemyExitEffectCommon_C.ExecuteUbergraph_BP_EnemyExitEffectCommon
	 */
	struct UBP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
