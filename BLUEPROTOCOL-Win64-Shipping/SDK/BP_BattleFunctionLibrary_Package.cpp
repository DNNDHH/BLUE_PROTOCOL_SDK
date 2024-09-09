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
	 * 		Name   -> Function BP_BattleFunctionLibrary.BP_BattleFunctionLibrary_C.ApplyLv4PhysicsDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      DamagedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              BaseDamage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBStunDirection                                   StunDirection                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBStunValueCalculation                            StunCalcType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_BattleFunctionLibrary_C::ApplyLv4PhysicsDamage(class AActor* DamagedActor, float BaseDamage, class AActor* DamageCauser, ESBStunDirection StunDirection, ESBStunValueCalculation StunCalcType, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleFunctionLibrary.BP_BattleFunctionLibrary_C.ApplyLv4PhysicsDamage");
		
		UBP_BattleFunctionLibrary_C_ApplyLv4PhysicsDamage_Params params {};
		params.DamagedActor = DamagedActor;
		params.BaseDamage = BaseDamage;
		params.DamageCauser = DamageCauser;
		params.StunDirection = StunDirection;
		params.StunCalcType = StunCalcType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleFunctionLibrary.BP_BattleFunctionLibrary_C.ApplyLv3PhysicsDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      DamagedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              BaseDamage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBStunDirection                                   StunDirection                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBStunValueCalculation                            StunCalcType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_BattleFunctionLibrary_C::ApplyLv3PhysicsDamage(class AActor* DamagedActor, float BaseDamage, class AActor* DamageCauser, ESBStunDirection StunDirection, ESBStunValueCalculation StunCalcType, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleFunctionLibrary.BP_BattleFunctionLibrary_C.ApplyLv3PhysicsDamage");
		
		UBP_BattleFunctionLibrary_C_ApplyLv3PhysicsDamage_Params params {};
		params.DamagedActor = DamagedActor;
		params.BaseDamage = BaseDamage;
		params.DamageCauser = DamageCauser;
		params.StunDirection = StunDirection;
		params.StunCalcType = StunCalcType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleFunctionLibrary.BP_BattleFunctionLibrary_C.ApplyLv2PhysicsDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      DamagedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              BaseDamage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBStunDirection                                   StunDirection                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBStunValueCalculation                            StunCalcType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_BattleFunctionLibrary_C::ApplyLv2PhysicsDamage(class AActor* DamagedActor, float BaseDamage, class AActor* DamageCauser, ESBStunDirection StunDirection, ESBStunValueCalculation StunCalcType, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleFunctionLibrary.BP_BattleFunctionLibrary_C.ApplyLv2PhysicsDamage");
		
		UBP_BattleFunctionLibrary_C_ApplyLv2PhysicsDamage_Params params {};
		params.DamagedActor = DamagedActor;
		params.BaseDamage = BaseDamage;
		params.DamageCauser = DamageCauser;
		params.StunDirection = StunDirection;
		params.StunCalcType = StunCalcType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleFunctionLibrary.BP_BattleFunctionLibrary_C.ApplyLv1PhysicsDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      DamagedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              BaseDamage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBStunDirection                                   StunDirection                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBStunValueCalculation                            StunCalcType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_BattleFunctionLibrary_C::ApplyLv1PhysicsDamage(class AActor* DamagedActor, float BaseDamage, class AActor* DamageCauser, ESBStunDirection StunDirection, ESBStunValueCalculation StunCalcType, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleFunctionLibrary.BP_BattleFunctionLibrary_C.ApplyLv1PhysicsDamage");
		
		UBP_BattleFunctionLibrary_C_ApplyLv1PhysicsDamage_Params params {};
		params.DamagedActor = DamagedActor;
		params.BaseDamage = BaseDamage;
		params.DamageCauser = DamageCauser;
		params.StunDirection = StunDirection;
		params.StunCalcType = StunCalcType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleFunctionLibrary.BP_BattleFunctionLibrary_C.GetDamageReactionByLevelDiff
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_DamageReaction                                   DamageRaction                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBStunInfo                                 StunInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		E_DamageReaction                                   DamageReaction                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_BattleFunctionLibrary_C::GetDamageReactionByLevelDiff(E_DamageReaction DamageRaction, const struct FSBStunInfo& StunInfo, class UObject* __WorldContext, E_DamageReaction* DamageReaction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleFunctionLibrary.BP_BattleFunctionLibrary_C.GetDamageReactionByLevelDiff");
		
		UBP_BattleFunctionLibrary_C_GetDamageReactionByLevelDiff_Params params {};
		params.DamageRaction = DamageRaction;
		params.StunInfo = StunInfo;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DamageReaction != nullptr)
			*DamageReaction = params.DamageReaction;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleFunctionLibrary.BP_BattleFunctionLibrary_C.GetDamageReactionByStunLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         DataTableRowHandle                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FSBStunInfo                                 StunInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		E_DamageReaction                                   DamageReaction                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_BattleFunctionLibrary_C::GetDamageReactionByStunLevel(const struct FDataTableRowHandle& DataTableRowHandle, const struct FSBStunInfo& StunInfo, class UObject* __WorldContext, E_DamageReaction* DamageReaction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleFunctionLibrary.BP_BattleFunctionLibrary_C.GetDamageReactionByStunLevel");
		
		UBP_BattleFunctionLibrary_C_GetDamageReactionByStunLevel_Params params {};
		params.DataTableRowHandle = DataTableRowHandle;
		params.StunInfo = StunInfo;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DamageReaction != nullptr)
			*DamageReaction = params.DamageReaction;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_BattleFunctionLibrary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_BattleFunctionLibrary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BattleFunctionLibrary.BP_BattleFunctionLibrary_C");
		return ptr;
	}

}


