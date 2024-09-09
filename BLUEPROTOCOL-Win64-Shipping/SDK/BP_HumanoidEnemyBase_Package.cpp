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
	 * 		Name   -> Function BP_HumanoidEnemyBase.BP_HumanoidEnemyBase_C.GetLockOnCameraID
	 * 		Flags  -> ()
	 */
	class FName ABP_HumanoidEnemyBase_C::GetLockOnCameraID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HumanoidEnemyBase.BP_HumanoidEnemyBase_C.GetLockOnCameraID");
		
		ABP_HumanoidEnemyBase_C_GetLockOnCameraID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_HumanoidEnemyBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_HumanoidEnemyBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_HumanoidEnemyBase.BP_HumanoidEnemyBase_C");
		return ptr;
	}

}


