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
	 * Function BP_EnemyCharacter.BP_EnemyCharacter_C.GetPartsDamageOverrideImpact
	 */
	struct ABP_EnemyCharacter_C_GetPartsDamageOverrideImpact_Params
	{
	public:
		class FString                                              AppearanceId;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       IsValid;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IYCR[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      OverrideImpact;                                          // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EnemyCharacter.BP_EnemyCharacter_C.IsClient
	 */
	struct ABP_EnemyCharacter_C_IsClient_Params
	{
	public:
		bool                                                       ReturnParam;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_EnemyCharacter.BP_EnemyCharacter_C.GetDamageReaction
	 */
	struct ABP_EnemyCharacter_C_GetDamageReaction_Params
	{
	public:
		struct FSBStunInfo                                         StunInfo;                                                // 0x0000(0x0014)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		E_DamageReaction                                           DamageReaction;                                          // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UX2W[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_EnemyCharacter.BP_EnemyCharacter_C.InitializeEquipWeapon
	 */
	struct ABP_EnemyCharacter_C_InitializeEquipWeapon_Params
	{	};

	/**
	 * Function BP_EnemyCharacter.BP_EnemyCharacter_C.SetAimBodyBlendRate
	 */
	struct ABP_EnemyCharacter_C_SetAimBodyBlendRate_Params
	{
	public:
		float                                                      BlendRate;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KHU6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_EnemyCharacter.BP_EnemyCharacter_C.EndAimBodyBlend
	 */
	struct ABP_EnemyCharacter_C_EndAimBodyBlend_Params
	{	};

	/**
	 * Function BP_EnemyCharacter.BP_EnemyCharacter_C.BeginAimBodyBlend
	 */
	struct ABP_EnemyCharacter_C_BeginAimBodyBlend_Params
	{	};

	/**
	 * Function BP_EnemyCharacter.BP_EnemyCharacter_C.UpdateAimBlend
	 */
	struct ABP_EnemyCharacter_C_UpdateAimBlend_Params
	{	};

	/**
	 * Function BP_EnemyCharacter.BP_EnemyCharacter_C.UserConstructionScript
	 */
	struct ABP_EnemyCharacter_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_EnemyCharacter.BP_EnemyCharacter_C.Timeline_AimBodyBlendRate__FinishedFunc
	 */
	struct ABP_EnemyCharacter_C_Timeline_AimBodyBlendRate__FinishedFunc_Params
	{	};

	/**
	 * Function BP_EnemyCharacter.BP_EnemyCharacter_C.Timeline_AimBodyBlendRate__UpdateFunc
	 */
	struct ABP_EnemyCharacter_C_Timeline_AimBodyBlendRate__UpdateFunc_Params
	{	};

	/**
	 * Function BP_EnemyCharacter.BP_EnemyCharacter_C.Event Begin Aim Restricted
	 */
	struct ABP_EnemyCharacter_C_EventBeginAimRestricted_Params
	{	};

	/**
	 * Function BP_EnemyCharacter.BP_EnemyCharacter_C.ReceiveEndInitialLoad
	 */
	struct ABP_EnemyCharacter_C_ReceiveEndInitialLoad_Params
	{	};

	/**
	 * Function BP_EnemyCharacter.BP_EnemyCharacter_C.Event End Aim Restricted
	 */
	struct ABP_EnemyCharacter_C_EventEndAimRestricted_Params
	{	};

	/**
	 * Function BP_EnemyCharacter.BP_EnemyCharacter_C.ReceiveTick
	 */
	struct ABP_EnemyCharacter_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EnemyCharacter.BP_EnemyCharacter_C.ReceiveStartDeathEffect
	 */
	struct ABP_EnemyCharacter_C_ReceiveStartDeathEffect_Params
	{	};

	/**
	 * Function BP_EnemyCharacter.BP_EnemyCharacter_C.ReceiveBeginPlay
	 */
	struct ABP_EnemyCharacter_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_EnemyCharacter.BP_EnemyCharacter_C.ReceiveSelfDeath
	 */
	struct ABP_EnemyCharacter_C_ReceiveSelfDeath_Params
	{	};

	/**
	 * Function BP_EnemyCharacter.BP_EnemyCharacter_C.Event Aim Body Blend Rate Near Max
	 */
	struct ABP_EnemyCharacter_C_EventAimBodyBlendRateNearMax_Params
	{	};

	/**
	 * Function BP_EnemyCharacter.BP_EnemyCharacter_C.ExecuteUbergraph_BP_EnemyCharacter
	 */
	struct ABP_EnemyCharacter_C_ExecuteUbergraph_BP_EnemyCharacter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EnemyCharacter.BP_EnemyCharacter_C.EnemySelfDeath__DelegateSignature
	 */
	struct ABP_EnemyCharacter_C_EnemySelfDeath__DelegateSignature_Params
	{	};

	/**
	 * Function BP_EnemyCharacter.BP_EnemyCharacter_C.EnemyDeath__DelegateSignature
	 */
	struct ABP_EnemyCharacter_C_EnemyDeath__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
