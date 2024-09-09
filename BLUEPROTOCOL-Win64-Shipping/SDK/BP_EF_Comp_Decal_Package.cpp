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
	 * 		Name   -> Function BP_EF_Comp_Decal.BP_EF_Comp_Decal_C.DestroyDecal
	 * 		Flags  -> ()
	 */
	void UBP_EF_Comp_Decal_C::DestroyDecal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EF_Comp_Decal.BP_EF_Comp_Decal_C.DestroyDecal");
		
		UBP_EF_Comp_Decal_C_DestroyDecal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EF_Comp_Decal.BP_EF_Comp_Decal_C.GetOwnerCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OwnerCharacter                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_EF_Comp_Decal_C::GetOwnerCharacter(class AActor** OwnerCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EF_Comp_Decal.BP_EF_Comp_Decal_C.GetOwnerCharacter");
		
		UBP_EF_Comp_Decal_C_GetOwnerCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OwnerCharacter != nullptr)
			*OwnerCharacter = params.OwnerCharacter;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EF_Comp_Decal.BP_EF_Comp_Decal_C.DecalEndCTRL
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_EF_Comp_Decal_C::DecalEndCTRL(float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EF_Comp_Decal.BP_EF_Comp_Decal_C.DecalEndCTRL");
		
		UBP_EF_Comp_Decal_C_DecalEndCTRL_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EF_Comp_Decal.BP_EF_Comp_Decal_C.DecalAnimCTRL
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_EF_Comp_Decal_C::DecalAnimCTRL(float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EF_Comp_Decal.BP_EF_Comp_Decal_C.DecalAnimCTRL");
		
		UBP_EF_Comp_Decal_C_DecalAnimCTRL_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EF_Comp_Decal.BP_EF_Comp_Decal_C.DecalScaleCTRL
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Scale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_EF_Comp_Decal_C::DecalScaleCTRL(const struct FVector& Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EF_Comp_Decal.BP_EF_Comp_Decal_C.DecalScaleCTRL");
		
		UBP_EF_Comp_Decal_C_DecalScaleCTRL_Params params {};
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EF_Comp_Decal.BP_EF_Comp_Decal_C.SpawnDecal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             EffectComp                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InitialLifeTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     AttackCollision                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     CollisionScale                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBEffectVisibleType                               VisibleType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UDecalComponent*>                     DecalComponent                                             (Parm, OutParm, ContainsInstancedReference)
	 * 		float                                              DestroyOderTime                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DestroyGrace                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_EF_Comp_Decal_C::SpawnDecal(class USceneComponent* EffectComp, float InitialLifeTime, const struct FVector& AttackCollision, const struct FVector& CollisionScale, ESBEffectVisibleType VisibleType, TArray<class UDecalComponent*>* DecalComponent, float* DestroyOderTime, float* DestroyGrace)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EF_Comp_Decal.BP_EF_Comp_Decal_C.SpawnDecal");
		
		UBP_EF_Comp_Decal_C_SpawnDecal_Params params {};
		params.EffectComp = EffectComp;
		params.InitialLifeTime = InitialLifeTime;
		params.AttackCollision = AttackCollision;
		params.CollisionScale = CollisionScale;
		params.VisibleType = VisibleType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DecalComponent != nullptr)
			*DecalComponent = params.DecalComponent;
		if (DestroyOderTime != nullptr)
			*DestroyOderTime = params.DestroyOderTime;
		if (DestroyGrace != nullptr)
			*DestroyGrace = params.DestroyGrace;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_EF_Comp_Decal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_EF_Comp_Decal_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_EF_Comp_Decal.BP_EF_Comp_Decal_C");
		return ptr;
	}

}


