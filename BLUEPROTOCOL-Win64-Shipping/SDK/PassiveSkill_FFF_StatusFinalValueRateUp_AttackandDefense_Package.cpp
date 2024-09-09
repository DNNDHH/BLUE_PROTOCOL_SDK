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
	 * 		Name   -> PredefinedFunction UPassiveSkill_FFF_StatusFinalValueRateUp_AttackandDefense_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPassiveSkill_FFF_StatusFinalValueRateUp_AttackandDefense_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PassiveSkill_FFF_StatusFinalValueRateUp_AttackandDefense.PassiveSkill_FFF_StatusFinalValueRateUp_AttackandDefense_C");
		return ptr;
	}

}


