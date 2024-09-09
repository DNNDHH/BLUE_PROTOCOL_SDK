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
	 * 		Name   -> Function BP_PlayerSelectCaptureCharacter.BP_PlayerSelectCaptureCharacter_C.NewFunction_1
	 * 		Flags  -> ()
	 */
	void ABP_PlayerSelectCaptureCharacter_C::NewFunction_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerSelectCaptureCharacter.BP_PlayerSelectCaptureCharacter_C.NewFunction_1");
		
		ABP_PlayerSelectCaptureCharacter_C_NewFunction_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_PlayerSelectCaptureCharacter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_PlayerSelectCaptureCharacter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerSelectCaptureCharacter.BP_PlayerSelectCaptureCharacter_C");
		return ptr;
	}

}


