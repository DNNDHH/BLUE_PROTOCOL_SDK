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
	 * 		Name   -> Function BP_EnemyDeathEffectCommon.BP_EnemyDeathEffectCommon_C.SetEnemyMatrial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBEnemyCharacter*                           Enemy                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_EnemyDeathEffectCommon_C::SetEnemyMatrial(class ASBEnemyCharacter* Enemy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnemyDeathEffectCommon.BP_EnemyDeathEffectCommon_C.SetEnemyMatrial");
		
		UBP_EnemyDeathEffectCommon_C_SetEnemyMatrial_Params params {};
		params.Enemy = Enemy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnemyDeathEffectCommon.BP_EnemyDeathEffectCommon_C.SetWeaponMatrial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBEnemyCharacter*                           Enemy                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_EnemyDeathEffectCommon_C::SetWeaponMatrial(class ASBEnemyCharacter* Enemy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnemyDeathEffectCommon.BP_EnemyDeathEffectCommon_C.SetWeaponMatrial");
		
		UBP_EnemyDeathEffectCommon_C_SetWeaponMatrial_Params params {};
		params.Enemy = Enemy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnemyDeathEffectCommon.BP_EnemyDeathEffectCommon_C.ReceiveBegin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBEnemyCharacter*                           OwnerEnemyCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_EnemyDeathEffectCommon_C::ReceiveBegin(class ASBEnemyCharacter* OwnerEnemyCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnemyDeathEffectCommon.BP_EnemyDeathEffectCommon_C.ReceiveBegin");
		
		UBP_EnemyDeathEffectCommon_C_ReceiveBegin_Params params {};
		params.OwnerEnemyCharacter = OwnerEnemyCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnemyDeathEffectCommon.BP_EnemyDeathEffectCommon_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASBEnemyCharacter*                           OwnerEnemyCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_EnemyDeathEffectCommon_C::ReceiveTick(float DeltaTime, class ASBEnemyCharacter* OwnerEnemyCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnemyDeathEffectCommon.BP_EnemyDeathEffectCommon_C.ReceiveTick");
		
		UBP_EnemyDeathEffectCommon_C_ReceiveTick_Params params {};
		params.DeltaTime = DeltaTime;
		params.OwnerEnemyCharacter = OwnerEnemyCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnemyDeathEffectCommon.BP_EnemyDeathEffectCommon_C.ReceiveBeginFadeOut
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBEnemyCharacter*                           OwnerEnemyCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_EnemyDeathEffectCommon_C::ReceiveBeginFadeOut(class ASBEnemyCharacter* OwnerEnemyCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnemyDeathEffectCommon.BP_EnemyDeathEffectCommon_C.ReceiveBeginFadeOut");
		
		UBP_EnemyDeathEffectCommon_C_ReceiveBeginFadeOut_Params params {};
		params.OwnerEnemyCharacter = OwnerEnemyCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnemyDeathEffectCommon.BP_EnemyDeathEffectCommon_C.ReceiveTickFadeOut
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASBEnemyCharacter*                           OwnerEnemyCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_EnemyDeathEffectCommon_C::ReceiveTickFadeOut(float DeltaTime, class ASBEnemyCharacter* OwnerEnemyCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnemyDeathEffectCommon.BP_EnemyDeathEffectCommon_C.ReceiveTickFadeOut");
		
		UBP_EnemyDeathEffectCommon_C_ReceiveTickFadeOut_Params params {};
		params.DeltaTime = DeltaTime;
		params.OwnerEnemyCharacter = OwnerEnemyCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnemyDeathEffectCommon.BP_EnemyDeathEffectCommon_C.ReceiveMaterialUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDeathEffectType                                   DeathEffectType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASBEnemyCharacter*                           OwnerEnemyCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_EnemyDeathEffectCommon_C::ReceiveMaterialUpdated(EDeathEffectType DeathEffectType, class ASBEnemyCharacter* OwnerEnemyCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnemyDeathEffectCommon.BP_EnemyDeathEffectCommon_C.ReceiveMaterialUpdated");
		
		UBP_EnemyDeathEffectCommon_C_ReceiveMaterialUpdated_Params params {};
		params.DeathEffectType = DeathEffectType;
		params.OwnerEnemyCharacter = OwnerEnemyCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnemyDeathEffectCommon.BP_EnemyDeathEffectCommon_C.ReceiveBeginVanish
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              WaitTime                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASBEnemyCharacter*                           OwnerEnemyCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_EnemyDeathEffectCommon_C::ReceiveBeginVanish(float WaitTime, class ASBEnemyCharacter* OwnerEnemyCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnemyDeathEffectCommon.BP_EnemyDeathEffectCommon_C.ReceiveBeginVanish");
		
		UBP_EnemyDeathEffectCommon_C_ReceiveBeginVanish_Params params {};
		params.WaitTime = WaitTime;
		params.OwnerEnemyCharacter = OwnerEnemyCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnemyDeathEffectCommon.BP_EnemyDeathEffectCommon_C.ReceiveTickVanish
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASBEnemyCharacter*                           OwnerEnemyCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_EnemyDeathEffectCommon_C::ReceiveTickVanish(float DeltaTime, class ASBEnemyCharacter* OwnerEnemyCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnemyDeathEffectCommon.BP_EnemyDeathEffectCommon_C.ReceiveTickVanish");
		
		UBP_EnemyDeathEffectCommon_C_ReceiveTickVanish_Params params {};
		params.DeltaTime = DeltaTime;
		params.OwnerEnemyCharacter = OwnerEnemyCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnemyDeathEffectCommon.BP_EnemyDeathEffectCommon_C.SetAttachedMeshMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBEnemyCharacter*                           Enemy                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_EnemyDeathEffectCommon_C::SetAttachedMeshMaterial(class ASBEnemyCharacter* Enemy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnemyDeathEffectCommon.BP_EnemyDeathEffectCommon_C.SetAttachedMeshMaterial");
		
		UBP_EnemyDeathEffectCommon_C_SetAttachedMeshMaterial_Params params {};
		params.Enemy = Enemy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnemyDeathEffectCommon.BP_EnemyDeathEffectCommon_C.SetFaceMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBEnemyCharacter*                           Enemy                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_EnemyDeathEffectCommon_C::SetFaceMaterial(class ASBEnemyCharacter* Enemy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnemyDeathEffectCommon.BP_EnemyDeathEffectCommon_C.SetFaceMaterial");
		
		UBP_EnemyDeathEffectCommon_C_SetFaceMaterial_Params params {};
		params.Enemy = Enemy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnemyDeathEffectCommon.BP_EnemyDeathEffectCommon_C.ExecuteUbergraph_BP_EnemyDeathEffectCommon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_EnemyDeathEffectCommon_C::ExecuteUbergraph_BP_EnemyDeathEffectCommon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnemyDeathEffectCommon.BP_EnemyDeathEffectCommon_C.ExecuteUbergraph_BP_EnemyDeathEffectCommon");
		
		UBP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_EnemyDeathEffectCommon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_EnemyDeathEffectCommon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_EnemyDeathEffectCommon.BP_EnemyDeathEffectCommon_C");
		return ptr;
	}

}


