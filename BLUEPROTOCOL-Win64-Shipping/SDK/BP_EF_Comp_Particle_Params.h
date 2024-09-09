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
	 * Function BP_EF_Comp_Particle.BP_EF_Comp_Particle_C.ParticleScaleCTRL
	 */
	struct UBP_EF_Comp_Particle_C_ParticleScaleCTRL_Params
	{
	public:
		struct FVector                                             Scale;                                                   // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EF_Comp_Particle.BP_EF_Comp_Particle_C.ParticleEndCTRL
	 */
	struct UBP_EF_Comp_Particle_C_ParticleEndCTRL_Params
	{
	public:
		class USceneComponent*                                     EffectComp;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EF_Comp_Particle.BP_EF_Comp_Particle_C.ParticleSpawn
	 */
	struct UBP_EF_Comp_Particle_C_ParticleSpawn_Params
	{
	public:
		class USceneComponent*                                     EffectComp;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InitialLifeTime;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             AttackCollision;                                         // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             CollisionScale;                                          // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DestroyOrderTime;                                        // 0x0024(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EF_Comp_Particle.BP_EF_Comp_Particle_C.ReceiveBeginPlay
	 */
	struct UBP_EF_Comp_Particle_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_EF_Comp_Particle.BP_EF_Comp_Particle_C.ExecuteUbergraph_BP_EF_Comp_Particle
	 */
	struct UBP_EF_Comp_Particle_C_ExecuteUbergraph_BP_EF_Comp_Particle_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MVZZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_EF_Comp_Particle.BP_EF_Comp_Particle_C.NewEventDispatcher_0__DelegateSignature
	 */
	struct UBP_EF_Comp_Particle_C_NewEventDispatcher_0__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
