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
	 * Function BP_EF_Comp_GroundHit.BP_EF_Comp_GroundHit_C.TraceGroundParticleCTRL
	 */
	struct UBP_EF_Comp_GroundHit_C_TraceGroundParticleCTRL_Params
	{
	public:
		struct FVector                                             Scale;                                                   // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EF_Comp_GroundHit.BP_EF_Comp_GroundHit_C.TraceGroundParticleEndCTRL
	 */
	struct UBP_EF_Comp_GroundHit_C_TraceGroundParticleEndCTRL_Params
	{
	public:
		class USceneComponent*                                     EffectComp;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EF_Comp_GroundHit.BP_EF_Comp_GroundHit_C.TraceGroundParticleSpawn
	 */
	struct UBP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn_Params
	{
	public:
		class USceneComponent*                                     EffectComp;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InitialLifeTime;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             AttackCollision;                                         // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             CollisionScale;                                          // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EF_Comp_GroundHit.BP_EF_Comp_GroundHit_C.NewEventDispatcher_0__DelegateSignature
	 */
	struct UBP_EF_Comp_GroundHit_C_NewEventDispatcher_0__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
