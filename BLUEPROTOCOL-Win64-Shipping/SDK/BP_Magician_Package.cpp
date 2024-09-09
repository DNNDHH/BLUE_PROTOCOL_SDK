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
	 * 		Name   -> Function BP_Magician.BP_Magician_C.CreateHUD
	 * 		Flags  -> ()
	 */
	void ABP_Magician_C::CreateHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Magician.BP_Magician_C.CreateHUD");
		
		ABP_Magician_C_CreateHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Magician.BP_Magician_C.OnRayHitForPlayerReticle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bHit                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bProperDistance                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Magician_C::OnRayHitForPlayerReticle(bool bHit, bool bProperDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Magician.BP_Magician_C.OnRayHitForPlayerReticle");
		
		ABP_Magician_C_OnRayHitForPlayerReticle_Params params {};
		params.bHit = bHit;
		params.bProperDistance = bProperDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Magician.BP_Magician_C.UnSheathe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBWeaponEquipType                                 EquipType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Magician_C::UnSheathe(ESBWeaponEquipType EquipType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Magician.BP_Magician_C.UnSheathe");
		
		ABP_Magician_C_UnSheathe_Params params {};
		params.EquipType = EquipType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Magician.BP_Magician_C.Sheathe
	 * 		Flags  -> ()
	 */
	void ABP_Magician_C::Sheathe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Magician.BP_Magician_C.Sheathe");
		
		ABP_Magician_C_Sheathe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Magician.BP_Magician_C.OnHitForPlayerReticle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bWeakHit                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Magician_C::OnHitForPlayerReticle(float Damage, bool bWeakHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Magician.BP_Magician_C.OnHitForPlayerReticle");
		
		ABP_Magician_C_OnHitForPlayerReticle_Params params {};
		params.Damage = Damage;
		params.bWeakHit = bWeakHit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Magician.BP_Magician_C.CreateClassHUD
	 * 		Flags  -> ()
	 */
	void ABP_Magician_C::CreateClassHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Magician.BP_Magician_C.CreateClassHUD");
		
		ABP_Magician_C_CreateClassHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Magician.BP_Magician_C.OnSetAimUIVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Magician_C::OnSetAimUIVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Magician.BP_Magician_C.OnSetAimUIVisibility");
		
		ABP_Magician_C_OnSetAimUIVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Magician.BP_Magician_C.ExecuteUbergraph_BP_Magician
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Magician_C::ExecuteUbergraph_BP_Magician(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Magician.BP_Magician_C.ExecuteUbergraph_BP_Magician");
		
		ABP_Magician_C_ExecuteUbergraph_BP_Magician_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Magician_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Magician_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Magician.BP_Magician_C");
		return ptr;
	}

}


