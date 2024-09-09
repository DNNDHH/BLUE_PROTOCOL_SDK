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
	 * 		Name   -> Function BP_EF_Comp_GroundHit.BP_EF_Comp_GroundHit_C.TraceGroundParticleCTRL
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Scale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_EF_Comp_GroundHit_C::TraceGroundParticleCTRL(const struct FVector& Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EF_Comp_GroundHit.BP_EF_Comp_GroundHit_C.TraceGroundParticleCTRL");
		
		UBP_EF_Comp_GroundHit_C_TraceGroundParticleCTRL_Params params {};
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EF_Comp_GroundHit.BP_EF_Comp_GroundHit_C.TraceGroundParticleEndCTRL
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             EffectComp                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_EF_Comp_GroundHit_C::TraceGroundParticleEndCTRL(class USceneComponent* EffectComp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EF_Comp_GroundHit.BP_EF_Comp_GroundHit_C.TraceGroundParticleEndCTRL");
		
		UBP_EF_Comp_GroundHit_C_TraceGroundParticleEndCTRL_Params params {};
		params.EffectComp = EffectComp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EF_Comp_GroundHit.BP_EF_Comp_GroundHit_C.TraceGroundParticleSpawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             EffectComp                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InitialLifeTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     AttackCollision                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     CollisionScale                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_EF_Comp_GroundHit_C::TraceGroundParticleSpawn(class USceneComponent* EffectComp, float InitialLifeTime, const struct FVector& AttackCollision, const struct FVector& CollisionScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EF_Comp_GroundHit.BP_EF_Comp_GroundHit_C.TraceGroundParticleSpawn");
		
		UBP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn_Params params {};
		params.EffectComp = EffectComp;
		params.InitialLifeTime = InitialLifeTime;
		params.AttackCollision = AttackCollision;
		params.CollisionScale = CollisionScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EF_Comp_GroundHit.BP_EF_Comp_GroundHit_C.NewEventDispatcher_0__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBP_EF_Comp_GroundHit_C::NewEventDispatcher_0__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EF_Comp_GroundHit.BP_EF_Comp_GroundHit_C.NewEventDispatcher_0__DelegateSignature");
		
		UBP_EF_Comp_GroundHit_C_NewEventDispatcher_0__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_EF_Comp_GroundHit_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_EF_Comp_GroundHit_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_EF_Comp_GroundHit.BP_EF_Comp_GroundHit_C");
		return ptr;
	}

}


