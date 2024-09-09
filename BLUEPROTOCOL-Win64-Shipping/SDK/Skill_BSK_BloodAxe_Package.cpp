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
	 * 		Name   -> PredefinedFunction USkill_BSK_BloodAxe_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkill_BSK_BloodAxe_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Skill_BSK_BloodAxe.Skill_BSK_BloodAxe_C");
		return ptr;
	}

}


