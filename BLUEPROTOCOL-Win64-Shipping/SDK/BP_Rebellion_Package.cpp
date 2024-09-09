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
	 * 		Name   -> Function BP_Rebellion.BP_Rebellion_C.CreateHUD
	 * 		Flags  -> ()
	 */
	void ABP_Rebellion_C::CreateHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Rebellion.BP_Rebellion_C.CreateHUD");
		
		ABP_Rebellion_C_CreateHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Rebellion.BP_Rebellion_C.GetHitCollision
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      HitActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         HitComp                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UPrimitiveComponent* ABP_Rebellion_C::GetHitCollision(class AActor* HitActor, class UPrimitiveComponent* HitComp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Rebellion.BP_Rebellion_C.GetHitCollision");
		
		ABP_Rebellion_C_GetHitCollision_Params params {};
		params.HitActor = HitActor;
		params.HitComp = HitComp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Rebellion.BP_Rebellion_C.PrintShieldDurability
	 * 		Flags  -> ()
	 */
	void ABP_Rebellion_C::PrintShieldDurability()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Rebellion.BP_Rebellion_C.PrintShieldDurability");
		
		ABP_Rebellion_C_PrintShieldDurability_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Rebellion.BP_Rebellion_C.Sheathe
	 * 		Flags  -> ()
	 */
	void ABP_Rebellion_C::Sheathe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Rebellion.BP_Rebellion_C.Sheathe");
		
		ABP_Rebellion_C_Sheathe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Rebellion.BP_Rebellion_C.UnSheathe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBWeaponEquipType                                 EquipType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Rebellion_C::UnSheathe(ESBWeaponEquipType EquipType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Rebellion.BP_Rebellion_C.UnSheathe");
		
		ABP_Rebellion_C_UnSheathe_Params params {};
		params.EquipType = EquipType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Rebellion.BP_Rebellion_C.OnRayHitForPlayerReticle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bHit                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bProperDistance                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Rebellion_C::OnRayHitForPlayerReticle(bool bHit, bool bProperDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Rebellion.BP_Rebellion_C.OnRayHitForPlayerReticle");
		
		ABP_Rebellion_C_OnRayHitForPlayerReticle_Params params {};
		params.bHit = bHit;
		params.bProperDistance = bProperDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Rebellion.BP_Rebellion_C.OnHitForPlayerReticle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bWeakHit                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Rebellion_C::OnHitForPlayerReticle(float Damage, bool bWeakHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Rebellion.BP_Rebellion_C.OnHitForPlayerReticle");
		
		ABP_Rebellion_C_OnHitForPlayerReticle_Params params {};
		params.Damage = Damage;
		params.bWeakHit = bWeakHit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Rebellion.BP_Rebellion_C.CreateClassHUD
	 * 		Flags  -> ()
	 */
	void ABP_Rebellion_C::CreateClassHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Rebellion.BP_Rebellion_C.CreateClassHUD");
		
		ABP_Rebellion_C_CreateClassHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Rebellion.BP_Rebellion_C.ExecuteUbergraph_BP_Rebellion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Rebellion_C::ExecuteUbergraph_BP_Rebellion(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Rebellion.BP_Rebellion_C.ExecuteUbergraph_BP_Rebellion");
		
		ABP_Rebellion_C_ExecuteUbergraph_BP_Rebellion_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Rebellion_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Rebellion_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Rebellion.BP_Rebellion_C");
		return ptr;
	}

}


