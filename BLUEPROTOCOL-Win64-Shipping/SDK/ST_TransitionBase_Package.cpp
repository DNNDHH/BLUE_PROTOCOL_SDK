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
	 * 		Name   -> Function ST_TransitionBase.ST_TransitionBase_C.GetLastDamageInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimInstance*                               AnimInstance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBDamageInfo                               DamageInfo                                                 (Parm, OutParm, NoDestructor)
	 */
	void UST_TransitionBase_C::GetLastDamageInfo(class UAnimInstance* AnimInstance, struct FSBDamageInfo* DamageInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ST_TransitionBase.ST_TransitionBase_C.GetLastDamageInfo");
		
		UST_TransitionBase_C_GetLastDamageInfo_Params params {};
		params.AnimInstance = AnimInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DamageInfo != nullptr)
			*DamageInfo = params.DamageInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UST_TransitionBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UST_TransitionBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ST_TransitionBase.ST_TransitionBase_C");
		return ptr;
	}

}


