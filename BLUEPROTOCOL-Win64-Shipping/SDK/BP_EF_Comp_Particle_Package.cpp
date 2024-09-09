/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EF_Comp_Particle.BP_EF_Comp_Particle_C.ParticleScaleCTRL
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Scale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_EF_Comp_Particle_C::ParticleScaleCTRL(const struct FVector& Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EF_Comp_Particle.BP_EF_Comp_Particle_C.ParticleScaleCTRL");
		
		UBP_EF_Comp_Particle_C_ParticleScaleCTRL_Params params {};
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EF_Comp_Particle.BP_EF_Comp_Particle_C.ParticleEndCTRL
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             EffectComp                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_EF_Comp_Particle_C::ParticleEndCTRL(class USceneComponent* EffectComp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EF_Comp_Particle.BP_EF_Comp_Particle_C.ParticleEndCTRL");
		
		UBP_EF_Comp_Particle_C_ParticleEndCTRL_Params params {};
		params.EffectComp = EffectComp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EF_Comp_Particle.BP_EF_Comp_Particle_C.ParticleSpawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             EffectComp                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InitialLifeTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     AttackCollision                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     CollisionScale                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DestroyOrderTime                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_EF_Comp_Particle_C::ParticleSpawn(class USceneComponent* EffectComp, float InitialLifeTime, const struct FVector& AttackCollision, const struct FVector& CollisionScale, float* DestroyOrderTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EF_Comp_Particle.BP_EF_Comp_Particle_C.ParticleSpawn");
		
		UBP_EF_Comp_Particle_C_ParticleSpawn_Params params {};
		params.EffectComp = EffectComp;
		params.InitialLifeTime = InitialLifeTime;
		params.AttackCollision = AttackCollision;
		params.CollisionScale = CollisionScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DestroyOrderTime != nullptr)
			*DestroyOrderTime = params.DestroyOrderTime;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EF_Comp_Particle.BP_EF_Comp_Particle_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UBP_EF_Comp_Particle_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EF_Comp_Particle.BP_EF_Comp_Particle_C.ReceiveBeginPlay");
		
		UBP_EF_Comp_Particle_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EF_Comp_Particle.BP_EF_Comp_Particle_C.ExecuteUbergraph_BP_EF_Comp_Particle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_EF_Comp_Particle_C::ExecuteUbergraph_BP_EF_Comp_Particle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EF_Comp_Particle.BP_EF_Comp_Particle_C.ExecuteUbergraph_BP_EF_Comp_Particle");
		
		UBP_EF_Comp_Particle_C_ExecuteUbergraph_BP_EF_Comp_Particle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EF_Comp_Particle.BP_EF_Comp_Particle_C.NewEventDispatcher_0__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBP_EF_Comp_Particle_C::NewEventDispatcher_0__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EF_Comp_Particle.BP_EF_Comp_Particle_C.NewEventDispatcher_0__DelegateSignature");
		
		UBP_EF_Comp_Particle_C_NewEventDispatcher_0__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_EF_Comp_Particle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_EF_Comp_Particle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_EF_Comp_Particle.BP_EF_Comp_Particle_C");
		return ptr;
	}

}


