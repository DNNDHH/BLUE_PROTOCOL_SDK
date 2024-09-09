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
	 * 		Name   -> Function BP_EnemyExitEffectCommon.BP_EnemyExitEffectCommon_C.ReceiveBegin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBEnemyCharacter*                           OwnerEnemyCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_EnemyExitEffectCommon_C::ReceiveBegin(class ASBEnemyCharacter* OwnerEnemyCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnemyExitEffectCommon.BP_EnemyExitEffectCommon_C.ReceiveBegin");
		
		UBP_EnemyExitEffectCommon_C_ReceiveBegin_Params params {};
		params.OwnerEnemyCharacter = OwnerEnemyCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnemyExitEffectCommon.BP_EnemyExitEffectCommon_C.SetEnemyMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBEnemyCharacter*                           Enemy                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_EnemyExitEffectCommon_C::SetEnemyMaterial(class ASBEnemyCharacter* Enemy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnemyExitEffectCommon.BP_EnemyExitEffectCommon_C.SetEnemyMaterial");
		
		UBP_EnemyExitEffectCommon_C_SetEnemyMaterial_Params params {};
		params.Enemy = Enemy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnemyExitEffectCommon.BP_EnemyExitEffectCommon_C.SetWeaponMatrial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBEnemyCharacter*                           Enemy                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_EnemyExitEffectCommon_C::SetWeaponMatrial(class ASBEnemyCharacter* Enemy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnemyExitEffectCommon.BP_EnemyExitEffectCommon_C.SetWeaponMatrial");
		
		UBP_EnemyExitEffectCommon_C_SetWeaponMatrial_Params params {};
		params.Enemy = Enemy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnemyExitEffectCommon.BP_EnemyExitEffectCommon_C.SetAttachedMeshMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBEnemyCharacter*                           Enemy                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_EnemyExitEffectCommon_C::SetAttachedMeshMaterial(class ASBEnemyCharacter* Enemy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnemyExitEffectCommon.BP_EnemyExitEffectCommon_C.SetAttachedMeshMaterial");
		
		UBP_EnemyExitEffectCommon_C_SetAttachedMeshMaterial_Params params {};
		params.Enemy = Enemy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnemyExitEffectCommon.BP_EnemyExitEffectCommon_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASBEnemyCharacter*                           OwnerEnemyCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_EnemyExitEffectCommon_C::ReceiveTick(float DeltaTime, class ASBEnemyCharacter* OwnerEnemyCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnemyExitEffectCommon.BP_EnemyExitEffectCommon_C.ReceiveTick");
		
		UBP_EnemyExitEffectCommon_C_ReceiveTick_Params params {};
		params.DeltaTime = DeltaTime;
		params.OwnerEnemyCharacter = OwnerEnemyCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnemyExitEffectCommon.BP_EnemyExitEffectCommon_C.SetFaceMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBEnemyCharacter*                           Enemy                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_EnemyExitEffectCommon_C::SetFaceMaterial(class ASBEnemyCharacter* Enemy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnemyExitEffectCommon.BP_EnemyExitEffectCommon_C.SetFaceMaterial");
		
		UBP_EnemyExitEffectCommon_C_SetFaceMaterial_Params params {};
		params.Enemy = Enemy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnemyExitEffectCommon.BP_EnemyExitEffectCommon_C.ExecuteUbergraph_BP_EnemyExitEffectCommon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_EnemyExitEffectCommon_C::ExecuteUbergraph_BP_EnemyExitEffectCommon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnemyExitEffectCommon.BP_EnemyExitEffectCommon_C.ExecuteUbergraph_BP_EnemyExitEffectCommon");
		
		UBP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_EnemyExitEffectCommon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_EnemyExitEffectCommon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_EnemyExitEffectCommon.BP_EnemyExitEffectCommon_C");
		return ptr;
	}

}


