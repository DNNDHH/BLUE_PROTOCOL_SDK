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
	 * Function BP_EnemyDeathEffectCommon.BP_EnemyDeathEffectCommon_C.SetEnemyMatrial
	 */
	struct UBP_EnemyDeathEffectCommon_C_SetEnemyMatrial_Params
	{
	public:
		class ASBEnemyCharacter*                                   Enemy;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EnemyDeathEffectCommon.BP_EnemyDeathEffectCommon_C.SetWeaponMatrial
	 */
	struct UBP_EnemyDeathEffectCommon_C_SetWeaponMatrial_Params
	{
	public:
		class ASBEnemyCharacter*                                   Enemy;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EnemyDeathEffectCommon.BP_EnemyDeathEffectCommon_C.ReceiveBegin
	 */
	struct UBP_EnemyDeathEffectCommon_C_ReceiveBegin_Params
	{
	public:
		class ASBEnemyCharacter*                                   OwnerEnemyCharacter;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EnemyDeathEffectCommon.BP_EnemyDeathEffectCommon_C.ReceiveTick
	 */
	struct UBP_EnemyDeathEffectCommon_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_01A2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ASBEnemyCharacter*                                   OwnerEnemyCharacter;                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EnemyDeathEffectCommon.BP_EnemyDeathEffectCommon_C.ReceiveBeginFadeOut
	 */
	struct UBP_EnemyDeathEffectCommon_C_ReceiveBeginFadeOut_Params
	{
	public:
		class ASBEnemyCharacter*                                   OwnerEnemyCharacter;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EnemyDeathEffectCommon.BP_EnemyDeathEffectCommon_C.ReceiveTickFadeOut
	 */
	struct UBP_EnemyDeathEffectCommon_C_ReceiveTickFadeOut_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AU6W[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ASBEnemyCharacter*                                   OwnerEnemyCharacter;                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EnemyDeathEffectCommon.BP_EnemyDeathEffectCommon_C.ReceiveMaterialUpdated
	 */
	struct UBP_EnemyDeathEffectCommon_C_ReceiveMaterialUpdated_Params
	{
	public:
		EDeathEffectType                                           DeathEffectType;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HAYU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ASBEnemyCharacter*                                   OwnerEnemyCharacter;                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EnemyDeathEffectCommon.BP_EnemyDeathEffectCommon_C.ReceiveBeginVanish
	 */
	struct UBP_EnemyDeathEffectCommon_C_ReceiveBeginVanish_Params
	{
	public:
		float                                                      WaitTime;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VKLA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ASBEnemyCharacter*                                   OwnerEnemyCharacter;                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EnemyDeathEffectCommon.BP_EnemyDeathEffectCommon_C.ReceiveTickVanish
	 */
	struct UBP_EnemyDeathEffectCommon_C_ReceiveTickVanish_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WAR9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ASBEnemyCharacter*                                   OwnerEnemyCharacter;                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EnemyDeathEffectCommon.BP_EnemyDeathEffectCommon_C.SetAttachedMeshMaterial
	 */
	struct UBP_EnemyDeathEffectCommon_C_SetAttachedMeshMaterial_Params
	{
	public:
		class ASBEnemyCharacter*                                   Enemy;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EnemyDeathEffectCommon.BP_EnemyDeathEffectCommon_C.SetFaceMaterial
	 */
	struct UBP_EnemyDeathEffectCommon_C_SetFaceMaterial_Params
	{
	public:
		class ASBEnemyCharacter*                                   Enemy;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EnemyDeathEffectCommon.BP_EnemyDeathEffectCommon_C.ExecuteUbergraph_BP_EnemyDeathEffectCommon
	 */
	struct UBP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
