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
	 * 		Name   -> Function BP_WeaponForCapture.BP_WeaponForCapture_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_WeaponForCapture_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WeaponForCapture.BP_WeaponForCapture_C.UserConstructionScript");
		
		ABP_WeaponForCapture_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WeaponForCapture.BP_WeaponForCapture_C.SetWeaponMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBWeapon*                                   InWeapon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    InRotation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_WeaponForCapture_C::SetWeaponMesh(class ASBWeapon* InWeapon, const struct FRotator& InRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WeaponForCapture.BP_WeaponForCapture_C.SetWeaponMesh");
		
		ABP_WeaponForCapture_C_SetWeaponMesh_Params params {};
		params.InWeapon = InWeapon;
		params.InRotation = InRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WeaponForCapture.BP_WeaponForCapture_C.ExecuteUbergraph_BP_WeaponForCapture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_WeaponForCapture_C::ExecuteUbergraph_BP_WeaponForCapture(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WeaponForCapture.BP_WeaponForCapture_C.ExecuteUbergraph_BP_WeaponForCapture");
		
		ABP_WeaponForCapture_C_ExecuteUbergraph_BP_WeaponForCapture_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_WeaponForCapture_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_WeaponForCapture_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_WeaponForCapture.BP_WeaponForCapture_C");
		return ptr;
	}

}


