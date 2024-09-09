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
	 * 		Name   -> Function SS_TurnActor_JointGestureTarget_Interp.SS_TurnActor_JointGestureTarget_Interp_C.ReceiveGetInterpSpeed
	 * 		Flags  -> ()
	 */
	float USS_TurnActor_JointGestureTarget_Interp_C::ReceiveGetInterpSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SS_TurnActor_JointGestureTarget_Interp.SS_TurnActor_JointGestureTarget_Interp_C.ReceiveGetInterpSpeed");
		
		USS_TurnActor_JointGestureTarget_Interp_C_ReceiveGetInterpSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USS_TurnActor_JointGestureTarget_Interp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USS_TurnActor_JointGestureTarget_Interp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SS_TurnActor_JointGestureTarget_Interp.SS_TurnActor_JointGestureTarget_Interp_C");
		return ptr;
	}

}


